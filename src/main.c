#include "cbindings.h"

static const struct gpio_dt_spec led_1 = GPIO_DT_SPEC_GET(DT_ALIAS(led1), gpios);  // use the devicetree node identifier for the "led1" alias
static const struct gpio_dt_spec led_2 = GPIO_DT_SPEC_GET(DT_ALIAS(led2), gpios);  // use the devicetree node identifier for the "led2" alias
static const struct gpio_dt_spec led_3 = GPIO_DT_SPEC_GET(DT_ALIAS(led3), gpios);  // use the devicetree node identifier for the "led3" alias

int main(void)
{
	display_text();       // call Rust function display_text() to display text on screen
	toggle_leds(&led_1, &led_2, &led_3);  // call Rust function toggle_leds() to let LEDs blink

	return 0;
}
