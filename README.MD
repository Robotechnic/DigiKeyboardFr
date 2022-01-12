# DigiKeyboardFr
###### *Now Available on arduino library manager*
A libray that alow to use an **AZERTY** Keyboard with Digispark. This code is an adaptation of a code for German Keyboard. The original code come from [here](https://github.com/adnan-alhomssi/DigistumpArduinoDe/blob/master/digistump-avr/libraries/DigisparkKeyboard/DigiKeyboardDe.h)

For this library I was use this image wich come from [this](https://digistump.com/board/index.php?topic=2289.0) digistump topic.

![KeyCodes](https://scriptel.com/KeyboardEmulationAPI/JavaScript/images/keyboard-identifiers.png)
You can also find every **HID** codes [here](http://www.freebsddiary.org/APC/usb_hid_usages.php).

## Spetial key
/!\ Volume key sems to works only on some board with no explanations

| Consant |Key |
| :-------: |:---: |
| KEY_ARROW_RIGHT | Arrow right |
| KEY_ARROW_UP | Arrow up |
| KEY_ARROW_DOWN | Arrow down |
| KEY_ARROW_LEFT | Arrow left |
| KEY_DELETE | Delete key (delete forward) |
| KEY_BACKSPACE | backspace key (delete backward) |
| KEY_CAPSLOCK | Capslock key |
| KEY_NUMLOCK | Numlock key |
| KEY_PRINT_SCREEN | Print screen key |
| KEY_INSERT | insert key |
| KEY_END | go to end key |
| KEY_MUTE | volume mute key |
| KEY_VOLUME_UP | volume up key |
| KEY_VOLUME_DOWN | volume down key |
| KEY_COPY | copy to clipboard key |
| KEY_PASTE | paste from clipboard key |
| KEY_CUT | cut to clipboard key |
| KEY_ESC | Escape key |
| KEY_FR_A | AZERTY lower case key a |
| KEY_FR_B | AZERTY lower case key b |
| KEY_FR_C | AZERTY lower case key c |
| KEY_FR_D | AZERTY lower case key d |
| KEY_FR_E | AZERTY lower case key e |
| KEY_FR_F | AZERTY lower case key f |
| KEY_FR_G | AZERTY lower case key g |
| KEY_FR_H | AZERTY lower case key h |
| KEY_FR_I | AZERTY lower case key i |
| KEY_FR_J | AZERTY lower case key j |
| KEY_FR_K | AZERTY lower case key k |
| KEY_FR_L | AZERTY lower case key l |
| KEY_FR_M | AZERTY lower case key m |
| KEY_FR_N | AZERTY lower case key n |
| KEY_FR_O | AZERTY lower case key o |
| KEY_FR_P | AZERTY lower case key p |
| KEY_FR_Q | AZERTY lower case key q |
| KEY_FR_R | AZERTY lower case key r |
| KEY_FR_S | AZERTY lower case key s |
| KEY_FR_T | AZERTY lower case key t |
| KEY_FR_U | AZERTY lower case key u |
| KEY_FR_V | AZERTY lower case key v |
| KEY_FR_W | AZERTY lower case key w |
| KEY_FR_X | AZERTY lower case key x |
| KEY_FR_Y | AZERTY lower case key y |
| KEY_FR_Z | AZERTY lower case key z |
| KEY_FR_0 | AZERTY key 0 |
| KEY_FR_1 | AZERTY key 1 |
| KEY_FR_2 | AZERTY key 2 |
| KEY_FR_3 | AZERTY key 3 |
| KEY_FR_4 | AZERTY key 4 |
| KEY_FR_5 | AZERTY key 5 |
| KEY_FR_6 | AZERTY key 6 |
| KEY_FR_7 | AZERTY key 7 |
| KEY_FR_8 | AZERTY key 8 |
| KEY_FR_9 | AZERTY key 9 |

## Releases:
### Release 1.0.1:
* Add more exemples
* Add more special key
- KEY_BACKSPACE
- KEY_DELETE


### Release 1.0.0:
* The same functions that the original library (write, sendKeyStroke...)
* Every character of the base original lib have been converted to AZERTY keyboard
* New special key:
KEY_ARROW_RIGHT, 
KEY_ARROW_UP,
KEY_ARROW_DOWN,
KEY_CAPSLOCK,
KEY_NUMLOCK,
KEY_ESC,
and every AZERTY key with the prefix KEY_FR_
* Example