/// Toggles LEDs, i.e., turns them on & off based on the given configuration (frequencies & delays).
/// Each LED will blink in its given frequency and will start to blink after given delay.
#[no_mangle]
pub extern "C" fn toggle_leds(led1: *const super::gpio_dt_spec, led2: *const super::gpio_dt_spec, led3: *const super::gpio_dt_spec) {
    unsafe {
        if !super::gpio_is_ready_dt(led1) {  // call Zephyr API's gpio_is_ready_dt() function to check if GPIO port connected to LED is ready
            panic!("GPIO port for LED1 is NOT ready!");
        }
        if !super::gpio_is_ready_dt(led2) {  // call Zephyr API's gpio_is_ready_dt() function to check if GPIO port connected to LED is ready
            panic!("GPIO port for LED2 is NOT ready!");
        }
        if !super::gpio_is_ready_dt(led3) {  // call Zephyr API's gpio_is_ready_dt() function to check if GPIO port connected to LED is ready
            panic!("GPIO port for LED3 is NOT ready!");
        }

        if super::gpio_pin_configure_dt(led1, super::GPIO_OUTPUT_INACTIVE) < 0 {  // call Zephyr API's gpio_pin_configure_dt() function to configure GPIO pin connected to LED as OUTPUT pin
            panic!("Configuring GPIO pin for LED1 as OUTPUT failed!");
        }
        if super::gpio_pin_configure_dt(led2, super::GPIO_OUTPUT_INACTIVE) < 0 {  // call Zephyr API's gpio_pin_configure_dt() function to configure GPIO pin connected to LED as OUTPUT pin
            panic!("Configuring GPIO pin for LED2 as OUTPUT failed!");
        }
        if super::gpio_pin_configure_dt(led3, super::GPIO_OUTPUT_INACTIVE) < 0 {  // call Zephyr API's gpio_pin_configure_dt() function to configure GPIO pin connected to LED as OUTPUT pin
            panic!("Configuring GPIO pin for LED3 as OUTPUT failed!");
        }
    }

    let mut delays: [i32; 3] = [super::config::CONFIG.delay_led[0],
                                super::config::CONFIG.delay_led[1],
                                super::config::CONFIG.delay_led[2]];  // for each LED, track delay to toggle LED (note the all 3 LEDs are initially INACTIVE/turned of, as, their GPIO pins were configured as GPIO_OUTPUT_INACTIVE)
    let leds: [*const super::gpio_dt_spec; 3] = [led1, led2, led3];   // just to access led args more conveniently

    loop {
        for (i, delay) in delays.iter_mut().enumerate() {       // for each LED, check its delay
            if *delay <= 0 {                                    // delay of LED has expired, i.e., toggle LED
                unsafe { super::gpio_pin_toggle_dt(leds[i]); }  // call Zephyr API's gpio_pin_toggle_dt() function to let LED blink by toggling corresponding GPIO pin
                *delay = super::config::CONFIG.freq_led[i];     // reset delay for LED
            }
        }
        
        let delay_min: i32 = delays.iter().copied().min().unwrap();
		unsafe { super::k_msleep(delay_min); } // call Zephyr API's k_msleep() function to put the current thread to sleep for given LEDs minimum delay

        for delay in delays.iter_mut() {
            *delay -= delay_min;  // for each LED, update its delay
        }
	}
}