# BluePill Blink LED using FreeRTOS Example

This code is intended to be a template to use FreeRTOS with the BluePill dev board.
It is just a blink LED code running from a task.


### Dependencies

- arm-none-eabi-gcc (toolchain)
- [st-flasher](https://github.com/stlink-org/stlink) (If you're gonna flash it using ST-LINK)
- libusb-1.0-0-dev
- build-essential
- cmake


### Compiling st-flasher from source
```
git clone https://github.com/texane/stlink stlink.git
cd stlink
make release
sudo cp build/Release/bin/st-* /usr/local/bin
sudo cp etc/udev/rules.d/49-stlinkv* /etc/udev/rules.d/
sudo udevadm control --reload
```

### Instructions

If you are done with the dependencies, just run `make` to compile binary and then `make flash` to burn binary to the target device.