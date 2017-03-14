##Pocket Keyboard

First attempt at building a keyboard from scratch

* PCB Design and Fabrication - EasyEDA + Seeed
* Firmware - [TMK](https://github.com/tmk/tmk_keyboard)

###Top Layer
![Top Layer](/images/pcb_top.png)

###Bottom Layer
![Bottom Layer](/images/pcb_bot.png)

###PCB Layout
![PCB Layout](/images/pcb_layout.png)

###Components
*  1 x Atmega32u4
*  1 x Micro USB Connector
*  2 x 22OΩ - R1,R2
*  1 x 10KΩ - R3
*  1 x 330Ω - R4
*  2 x 22pF - C1,C2
*  1 x 1uF  - C3
*  1 x LED  - D0
* 70 x 1N4148 - D1-D70
* 70 x TL3303 Tactile Switch
*  1 x 5-way Tactile Switch


###Schematic
![Controller](/images/schem_ctrlr.png)
![Keys](/images/schem_keys.png)


###Firmware
* Based on [TMK](https://github.com/tmk/tmk_keyboard)'s onekey example
* `cd firmware/keyboard/pocket_kbd`
* `make -f Makefile`
* press the reset button
* `sudo dfu-programmer atmega32u4 erace --force --debug 5`
* `sudo dfu-programmer atmega32u4 flash firmware.hex --debug 5`
* power cycle board, it should now appear as an USB keyboard
