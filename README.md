## Pocket Keyboard

First attempt at building a keyboard from scratch

* PCB Design and Fabrication - EasyEDA + Seeed
* EasyEDA Project [Link](https://easyeda.com/w4ilun/Pocket_Key-5001400dc132468eae7bc688ea3f74ed)
* Firmware - [TMK](https://github.com/tmk/tmk_keyboard)

![Assembled](http://i.imgur.com/QtvWF8S.jpg)

### Top Layer
![Top Layer](/images/pcb_top.png)

### Bottom Layer
![Bottom Layer](/images/pcb_bot.png)

### PCB Layout
![PCB Layout](/images/pcb_layout.png)

### Components

| Component             | Label  | Quantity |
| --------------------- | ------ | -------- |
| Atmega32u4            |        | 1        |
| 16MHZ Crystal         | Y1     | 1        |
| Micro USB Connector   |        | 1        |
| 22OΩ                  | R1, R2 | 2        |
| 10KΩ                  | R3     | 1        |
| 330Ω                  | R4     | 1        |
| 22pF                  | C1, C2 | 2        |
| 1uF                   | C3     | 1        |
| LED                   | D0     | 1        |
| 1N4148                | D1-D70 | 70       |
| TL3303 Tactile Switch | SW     | 70       |
| 5-way Switch          | S1     | 1        |

### Schematic
![Controller](/images/schem_ctrlr.png)
![Keys](/images/schem_keys.png)


### Firmware
* Based on [TMK](https://github.com/tmk/tmk_keyboard)'s onekey example
* `cd firmware/keyboard/pocket_kbd`
* `make -f Makefile`
* press the reset button
* `sudo dfu-programmer atmega32u4 erace --force --debug 5`
* `sudo dfu-programmer atmega32u4 flash firmware.hex --debug 5`
* power cycle board, it should now appear as an USB keyboard
