/* This file is used by rust-bindgen to generate Rust bindings to Zephyr API's C functions in order to be able to make Zephyr API calls from within Rust. */

#include <stdio.h>                // for calling Zephyr's printf() from Rust
#include <zephyr/kernel.h>        // for calling Zephyr's k_msleep() from Rust
#include <zephyr/drivers/gpio.h>  // for calling Zephyr's gpio_is_ready_dt(), gpio_pin_configure_dt() and gpio_pin_toggle_dt() from Rust