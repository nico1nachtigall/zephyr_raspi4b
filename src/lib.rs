#![no_std]
#![no_main]
#![allow(non_upper_case_globals)]  // suppress build warnings caused by generated rustbindings.rs
#![allow(non_camel_case_types)]    // suppress build warnings caused by generated rustbindings.rs
#![allow(non_snake_case)]          // suppress build warnings caused by generated rustbindings.rs

include!(concat!(env!("CARGO_MANIFEST_DIR"), "/bindings/rustbindings.rs"));  // include Rust bindings to Zephyr API's C functions

use core::panic::PanicInfo;

pub mod config;   // module for loading the configuration
pub mod led;      // module for controlling up to three LEDs
pub mod display;  // module for printing text to a display

/// Explicit definition of handler called on kernel panic that is required in our no_std environment.
#[panic_handler]
fn panic(_info: &PanicInfo) -> ! {
    loop {}
}