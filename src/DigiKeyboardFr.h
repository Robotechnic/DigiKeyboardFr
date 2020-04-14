#include "DigiKeyboard.h"
#ifndef DIGIKEYBOARDFR_H
#define DIGIKEYBOARDFR_H


#define FR_MOD_CONTROL_LEFT  (1<<8)
#define FR_MOD_SHIFT_LEFT    (1<<9)
#define FR_MOD_ALT_LEFT      (1<<10)
#define FR_MOD_GUI_LEFT      (1<<11)
#define FR_MOD_CONTROL_RIGHT (1<<12)
#define FR_MOD_SHIFT_RIGHT   (1<<13)
#define FR_MOD_ALT_RIGHT     (1<<14)
#define FR_MOD_GUI_RIGHT     (1<<15)

#define KEY_ARROW_RIGHT 79
#define KEY_ARROW_UP 82
#define KEY_ARROW_DOWN 81

#define KEY_CAPSLOCK 57
#define KEY_NUMLOCK 83
#define KEY_ESC 41

#define KEY_FR_A       20
#define KEY_FR_B       5
#define KEY_FR_C       6
#define KEY_FR_D       7
#define KEY_FR_E       8
#define KEY_FR_F       9
#define KEY_FR_G       10
#define KEY_FR_H       11
#define KEY_FR_I       12
#define KEY_FR_J       13
#define KEY_FR_K       14
#define KEY_FR_L       15
#define KEY_FR_M       51
#define KEY_FR_N       17
#define KEY_FR_O       18
#define KEY_FR_P       19
#define KEY_FR_Q       4
#define KEY_FR_R       21
#define KEY_FR_S       22
#define KEY_FR_T       23
#define KEY_FR_U       24
#define KEY_FR_V       25
#define KEY_FR_W       29
#define KEY_FR_X       27
#define KEY_FR_Y       28
#define KEY_FR_Z       26

#define KEY_FR_0       98
#define KEY_FR_1       89
#define KEY_FR_2       90
#define KEY_FR_3       91
#define KEY_FR_4       92
#define KEY_FR_5       93
#define KEY_FR_6       94
#define KEY_FR_7       95
#define KEY_FR_8       96
#define KEY_FR_9       97

const uint16_t ascii_to_scan_code_table_fr[128] PROGMEM =
		{
				0x00,                 // NUL
				0x00,                 // SOH
				0x00,                 // STX
				0x00,                 // ETX
				0x00,                 // EOT
				0x00,                 // ENQ
				0x00,                 // ACK
				0x00,                 // BEL
				42,                   // BS Backspace
				43,                   // TAB  Tab
				40,                   // LF Enter
				0x00,                 // VT
				0x00,                 // FF
				0x00,                 // CR
				0x00,                 // SO
				0x00,                 // SI
				0x00,                 // DEL
				0x00,                 // DC1
				0x00,                 // DC2
				0x00,                 // DC3
				0x00,                 // DC4
				0x00,                 // NAK
				0x00,                 // SYN
				0x00,                 // ETB
				0x00,                 // CAN
				0x00,                 // EM
				0x00,                 // SUB
				0x00,                 // ESC
				0x00,                 // FS
				0x00,                 // GS
				0x00,                 // RS
				0x00,                 // US
				
				44,                   //  ' '
				56,                   // !
				32,                   // "
				32|FR_MOD_ALT_RIGHT,  // #
				48,                   // $
				52|FR_MOD_SHIFT_LEFT, // %
				30,                   // &
				33,                   // '
				34,                   // (
				45,                   // )
				49,                   // *
				46|FR_MOD_SHIFT_LEFT, // +
				16,                   // ,
				35,                   // -
				54|FR_MOD_SHIFT_LEFT, // .
				55|FR_MOD_SHIFT_LEFT, // /
				39|FR_MOD_SHIFT_LEFT, // 0
				30|FR_MOD_SHIFT_LEFT, // 1
				31|FR_MOD_SHIFT_LEFT, // 2
				32|FR_MOD_SHIFT_LEFT, // 3
				33|FR_MOD_SHIFT_LEFT, // 4
				34|FR_MOD_SHIFT_LEFT, // 5
				35|FR_MOD_SHIFT_LEFT, // 6
				36|FR_MOD_SHIFT_LEFT, // 7
				37|FR_MOD_SHIFT_LEFT, // 8
				38|FR_MOD_SHIFT_LEFT, // 9
				55,                   // :
				54,                   // ;
				100,                  // <
				46,                   // =
				100|FR_MOD_SHIFT_LEFT,// >
				16|FR_MOD_SHIFT_LEFT, // ?
				39|FR_MOD_ALT_RIGHT,  //@
				20|FR_MOD_SHIFT_LEFT, // A
				5|FR_MOD_SHIFT_LEFT,  // B
				6|FR_MOD_SHIFT_LEFT,  // C
				7|FR_MOD_SHIFT_LEFT,  // D
				8|FR_MOD_SHIFT_LEFT,  // E
				9|FR_MOD_SHIFT_LEFT,  // F
				10|FR_MOD_SHIFT_LEFT, // G
				11|FR_MOD_SHIFT_LEFT, // H
				12|FR_MOD_SHIFT_LEFT, // I
				13|FR_MOD_SHIFT_LEFT, // J
				14|FR_MOD_SHIFT_LEFT, // K
				15|FR_MOD_SHIFT_LEFT, // L
				51|FR_MOD_SHIFT_LEFT, // M
				17|FR_MOD_SHIFT_LEFT, // N
				18|FR_MOD_SHIFT_LEFT, // O
				19|FR_MOD_SHIFT_LEFT, // P
				4|FR_MOD_SHIFT_LEFT,  // Q
				21|FR_MOD_SHIFT_LEFT, // R
				22|FR_MOD_SHIFT_LEFT, // S
				23|FR_MOD_SHIFT_LEFT, // T
				24|FR_MOD_SHIFT_LEFT, // U
				25|FR_MOD_SHIFT_LEFT, // V
				29|FR_MOD_SHIFT_LEFT, // W
				27|FR_MOD_SHIFT_LEFT, // X
				28|FR_MOD_SHIFT_LEFT, // Y
				26|FR_MOD_SHIFT_LEFT, // Z
				34|FR_MOD_ALT_RIGHT,  // [
				37|FR_MOD_ALT_RIGHT,  // bslash
				45|FR_MOD_ALT_RIGHT,  // ]
				47,                   // ^
				37,                   // _
				36|FR_MOD_ALT_RIGHT,  // `
				20,                   // a
				5,                    // b
				6,                    // C
				7,                    // d
				8,                    // e
				9,                    // f
				10,                   // g
				11,                   // h
				12,                   // i
				13,                   // j
				14,                   // k
				15,                   // l
				51,                   // m
				17,                   // n
				18,                   // O
				19,                   // P
				4,                    // Q
				21,                   // r
				22,                   // s
				23,                   // t
				24,                   // u
				25,                   // v
				29,                   // w
				27,                   // x
				28,                   // y
				26,                   // z
				33|FR_MOD_ALT_RIGHT,  // {
				35|FR_MOD_ALT_RIGHT,  // |
				46|FR_MOD_ALT_RIGHT,  // }
				31|FR_MOD_ALT_RIGHT,  // ~
				0                     // DEL

		};

class DigiKeyboardDeviceFr : public DigiKeyboardDevice{
	public:
	size_t write(uint8_t chr) {
		unsigned int temp = pgm_read_word_near(ascii_to_scan_code_table_fr + chr);
		unsigned char low = temp & 0xFF;
		unsigned char high = (temp >> 8) & 0xFF;
		sendKeyStroke(low,high);
		return 1;
	}
	void sendKeyReport(uchar *array,const unsigned int size){
		while (!usbInterruptIsReady()) {
			// Note: We wait until we can send keyPress
			//       so we know the previous keyPress was
			//       sent.
			usbPoll();
			_delay_ms(5);
		}

		usbSetInterrupt(array, size);
	}
};
DigiKeyboardDeviceFr DigiKeyboardFr = DigiKeyboardDeviceFr();
#endif //DIGIKEYBOARDFR_H