/// Displays text on screen as given by configuration.
#[no_mangle]
pub extern "C" fn display_text() {
    unsafe { super::printf(super::config::CONFIG.text.as_ptr()); }  // call Zephyr API's printf() function to output text to console/display
}