/// Configuration for controlling screen output & LEDs
pub struct Config<'a> {
    pub freq_led: [i32; 3],   // frequencies of up to 3 LEDs in ms, i.e., LED will toggle each given ms
    pub delay_led: [i32; 3],  // delays of up to 3 LEDs in ms, i.e., LED will start to toggle after given ms
    pub text: &'a str         // text to be displayed at screen
}

pub const CONFIG: Config = Config {
    freq_led: [500, 500, 1000],  // LED3 blinks with half of frequency of LED1
    delay_led: [0, 500, 0],      // LED1 blinks alternatively to LED2
    text: "Merry Christmas & Happy New Year!\n\0"
};