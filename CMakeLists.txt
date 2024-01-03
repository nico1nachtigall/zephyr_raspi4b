# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(challenge)

# build Zephyr application
target_sources(app PRIVATE bindings/extern.c src/main.c)
target_include_directories(app PUBLIC ${CMAKE_CURRENT_LIST_DIR})

# build Rust library
include(ExternalProject)

set(rust_src_dir ${PROJECT_SOURCE_DIR})

ExternalProject_Add(
    rust_project
    PREFIX ${standlone_build_dir}
    SOURCE_DIR ${rust_src_dir}
    BINARY_DIR ${rust_src_dir}
    CONFIGURE_COMMAND ""
    BUILD_ALWAYS TRUE # for the build to always be run, so that changes in the Rust code are detected
    BUILD_COMMAND
        "cargo"
            "build"
            "--target" "aarch64-unknown-none" # cross-compiling Rust library for target Raspberry 4 Model B
            "--release"
    INSTALL_COMMAND ""
    BUILD_BYPRODUCTS
        ${rust_src_dir}/target/aarch64-unknown-none/release/libzephyr_raspi4b.a
)

add_library(rust_lib STATIC IMPORTED GLOBAL)

add_dependencies(
        rust_lib
        rust_project
)

set_target_properties(rust_lib PROPERTIES IMPORTED_LOCATION ${rust_src_dir}/target/aarch64-unknown-none/release/libzephyr_raspi4b.a)
set_target_properties(rust_lib PROPERTIES INTERFACE_INCLUDE_DIRECTORIES ${rust_src_dir}/bindings) # set include dir containing C (header) bindings to Rust library

target_link_libraries(app PUBLIC rust_lib) # link Zephyr application against Rust library