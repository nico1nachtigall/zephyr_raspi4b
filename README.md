# Sample RUST/Zephyr RTOS application

* tested with [Zephyr RTOS v3.5.0](https://www.zephyrproject.org/) on Raspberry Pi 4 Model B
* based on [Zephyr Getting Started Guide](https://docs.zephyrproject.org/latest/develop/getting_started/index.html)
* build Zephyr application as [Zephyr workspace application](https://docs.zephyrproject.org/latest/develop/application/index.html#application-types): 1) copy everything to `<zephyrproject>/<app name>`, 2) `source <zephyrproject>/.venv/bin/activate` & `cd <zephyrproject>` & `west build -p always -b rpi_4b <app name>`
* [run Zephyr application on Raspberry Pi 4 Model B](https://docs.zephyrproject.org/latest/boards/arm64/rpi_4b/doc/index.html), i.e., copy Raspi 4B [specific files](rpi_4b) for [booting the device](https://www.raspberrypi.com/documentation/computers/config_txt.html) & loading the built Zephyr application's kernel to FAT32 formatted SD card's root folder together with built Zephyr application binary located at `<zephyrproject>/build/zephyr/zephyr.bin`.
* [device tree overlay](https://docs.zephyrproject.org/latest/build/dts/howtos.html#set-devicetree-overlays) altering Raspberry board's [base devicetree](https://github.com/zephyrproject-rtos/zephyr/blob/main/boards/arm64/rpi_4b/rpi_4b.dts) based on its SOC's device tree of the [Broadcom BCM2711](https://github.com/zephyrproject-rtos/zephyr/blob/main/dts/arm64/broadcom/bcm2711.dtsi) in order to activate the board's [GPIO0](https://www.raspberrypi.com/documentation/computers/raspberry-pi.html) (GPIO 0 ~ 27) to control 3 LEDs connected to pins GPIO 23,24,25 as defined by aliases `led1`, `led2` & `led3` in the device tree overlay that then can be directly used in code
* [Kconfig fragment](https://docs.zephyrproject.org/latest/develop/application/index.html#kconfig-configuration) - [prj.conf](prj.conf) configuring the Zephyr application build to include 1) (`CONFIG_GPIO`) GPIO drivers for controllong LEDs via GPIOs, 2) (`CONFIG_CONSOLE`) console drivers to been able to print output, and 3) (`CONFIG_UART_CONSOLE`) usage of one UART for console on order to been able to print to some serial display via console over UART serial port (cf. [Kconfig search](https://docs.zephyrproject.org/latest/kconfig.html#kconfig-search))
* Display serial output by using USB to UART serial TTL adapter and [Putty](https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html) with the following configuration:
<img src="doc/putty_serial_config.png" alt="Serial Configuration in Putty" width="800"/>

```
.
├── CMakeLists.txt                  # instructions/build system's entry point for building the Zephyr application
├── VERSION                         # version information of Zephyr application
├── boards
│   └── rpi_4b.overlay              # device tree overlay activating GPIO on Raspi 4B board for controlling connected LEDs
├── build
│   └── zephyr.bin                  # built Zephyr application binary ready to be deployed to and tested on Raspi 4B
├── prj.conf                        # Kconfig fragment specifying application-specific Zephyr features that need to be included in the application build
├── rpi_4b                          # Raspi 4B specific files for booting the device & loading the built Zephyr application's kernel
│   ├── bcm2711-rpi-4-b.dtb
│   ├── bootcode.bin
│   ├── config.txt
│   └── start4.elf
└── src
    └── main.c                      # Zephyr application entry point
```