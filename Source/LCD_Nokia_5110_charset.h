#include <avr/pgmspace.h>

static const int8_t LCD_Nokia_ASCII_Charset5[][5] PROGMEM = {
	// First 32 characters (0x00-0x19) are ignored. These are
	// non-displayable, control characters.
	 {0x00, 0x00, 0x00, 0x00, 0x00} // 0x20
	,{0x00, 0x00, 0x5f, 0x00, 0x00} // 0x21 !
	,{0x00, 0x07, 0x00, 0x07, 0x00} // 0x22 "
	,{0x14, 0x7f, 0x14, 0x7f, 0x14} // 0x23 #
	,{0x24, 0x2a, 0x7f, 0x2a, 0x12} // 0x24 $
	,{0x23, 0x13, 0x08, 0x64, 0x62} // 0x25 %
	,{0x36, 0x49, 0x55, 0x22, 0x50} // 0x26 &
	,{0x00, 0x05, 0x03, 0x00, 0x00} // 0x27 '
	,{0x00, 0x1c, 0x22, 0x41, 0x00} // 0x28 (
	,{0x00, 0x41, 0x22, 0x1c, 0x00} // 0x29 )
	,{0x14, 0x08, 0x3e, 0x08, 0x14} // 0x2a *
	,{0x08, 0x08, 0x3e, 0x08, 0x08} // 0x2b +
	,{0x00, 0x50, 0x30, 0x00, 0x00} // 0x2c ,
	,{0x08, 0x08, 0x08, 0x08, 0x08} // 0x2d -
	,{0x00, 0x60, 0x60, 0x00, 0x00} // 0x2e .
	,{0x20, 0x10, 0x08, 0x04, 0x02} // 0x2f /
	,{0x3e, 0x51, 0x49, 0x45, 0x3e} // 0x30 0
	,{0x00, 0x42, 0x7f, 0x40, 0x00} // 0x31 1
	,{0x42, 0x61, 0x51, 0x49, 0x46} // 0x32 2
	,{0x21, 0x41, 0x45, 0x4b, 0x31} // 0x33 3
	,{0x18, 0x14, 0x12, 0x7f, 0x10} // 0x34 4
	,{0x27, 0x45, 0x45, 0x45, 0x39} // 0x35 5
	,{0x3c, 0x4a, 0x49, 0x49, 0x30} // 0x36 6
	,{0x01, 0x71, 0x09, 0x05, 0x03} // 0x37 7
	,{0x36, 0x49, 0x49, 0x49, 0x36} // 0x38 8
	,{0x06, 0x49, 0x49, 0x29, 0x1e} // 0x39 9
	,{0x00, 0x36, 0x36, 0x00, 0x00} // 0x3a :
	,{0x00, 0x56, 0x36, 0x00, 0x00} // 0x3b ;
	,{0x08, 0x14, 0x22, 0x41, 0x00} // 0x3c <
	,{0x14, 0x14, 0x14, 0x14, 0x14} // 0x3d =
	,{0x00, 0x41, 0x22, 0x14, 0x08} // 0x3e >
	,{0x02, 0x01, 0x51, 0x09, 0x06} // 0x3f ?
	,{0x32, 0x49, 0x79, 0x41, 0x3e} // 0x40 @
	,{0x7e, 0x11, 0x11, 0x11, 0x7e} // 0x41 A
	,{0x7f, 0x49, 0x49, 0x49, 0x36} // 0x42 B
	,{0x3e, 0x41, 0x41, 0x41, 0x22} // 0x43 C
	,{0x7f, 0x41, 0x41, 0x22, 0x1c} // 0x44 D
	,{0x7f, 0x49, 0x49, 0x49, 0x41} // 0x45 E
	,{0x7f, 0x09, 0x09, 0x09, 0x01} // 0x46 F
	,{0x3e, 0x41, 0x49, 0x49, 0x7a} // 0x47 G
	,{0x7f, 0x08, 0x08, 0x08, 0x7f} // 0x48 H
	,{0x00, 0x41, 0x7f, 0x41, 0x00} // 0x49 I
	,{0x20, 0x40, 0x41, 0x3f, 0x01} // 0x4a J
	,{0x7f, 0x08, 0x14, 0x22, 0x41} // 0x4b K
	,{0x7f, 0x40, 0x40, 0x40, 0x40} // 0x4c L
	,{0x7f, 0x02, 0x0c, 0x02, 0x7f} // 0x4d M
	,{0x7f, 0x04, 0x08, 0x10, 0x7f} // 0x4e N
	,{0x3e, 0x41, 0x41, 0x41, 0x3e} // 0x4f O
	,{0x7f, 0x09, 0x09, 0x09, 0x06} // 0x50 P
	,{0x3e, 0x41, 0x51, 0x21, 0x5e} // 0x51 Q
	,{0x7f, 0x09, 0x19, 0x29, 0x46} // 0x52 R
	,{0x46, 0x49, 0x49, 0x49, 0x31} // 0x53 S
	,{0x01, 0x01, 0x7f, 0x01, 0x01} // 0x54 T
	,{0x3f, 0x40, 0x40, 0x40, 0x3f} // 0x55 U
	,{0x1f, 0x20, 0x40, 0x20, 0x1f} // 0x56 V
	,{0x3f, 0x40, 0x38, 0x40, 0x3f} // 0x57 W
	,{0x63, 0x14, 0x08, 0x14, 0x63} // 0x58 X
	,{0x07, 0x08, 0x70, 0x08, 0x07} // 0x59 Y
	,{0x61, 0x51, 0x49, 0x45, 0x43} // 0x5a Z
	,{0x00, 0x7f, 0x41, 0x41, 0x00} // 0x5b [
	,{0x02, 0x04, 0x08, 0x10, 0x20} // 0x5c \ (keep this to escape the backslash)
	,{0x00, 0x41, 0x41, 0x7f, 0x00} // 0x5d ]
	,{0x04, 0x02, 0x01, 0x02, 0x04} // 0x5e ^
	,{0x40, 0x40, 0x40, 0x40, 0x40} // 0x5f _
	,{0x00, 0x01, 0x02, 0x04, 0x00} // 0x60 `
	,{0x20, 0x54, 0x54, 0x54, 0x78} // 0x61 a
	,{0x7f, 0x48, 0x44, 0x44, 0x38} // 0x62 b
	,{0x38, 0x44, 0x44, 0x44, 0x20} // 0x63 c
	,{0x38, 0x44, 0x44, 0x48, 0x7f} // 0x64 d
	,{0x38, 0x54, 0x54, 0x54, 0x18} // 0x65 e
	,{0x08, 0x7e, 0x09, 0x01, 0x02} // 0x66 f
	,{0x0c, 0x52, 0x52, 0x52, 0x3e} // 0x67 g
	,{0x7f, 0x08, 0x04, 0x04, 0x78} // 0x68 h
	,{0x00, 0x44, 0x7d, 0x40, 0x00} // 0x69 i
	,{0x20, 0x40, 0x44, 0x3d, 0x00} // 0x6a j
	,{0x7f, 0x10, 0x28, 0x44, 0x00} // 0x6b k
	,{0x00, 0x41, 0x7f, 0x40, 0x00} // 0x6c l
	,{0x7c, 0x04, 0x18, 0x04, 0x78} // 0x6d m
	,{0x7c, 0x08, 0x04, 0x04, 0x78} // 0x6e n
	,{0x38, 0x44, 0x44, 0x44, 0x38} // 0x6f o
	,{0x7c, 0x14, 0x14, 0x14, 0x08} // 0x70 p
	,{0x08, 0x14, 0x14, 0x18, 0x7c} // 0x71 q
	,{0x7c, 0x08, 0x04, 0x04, 0x08} // 0x72 r
	,{0x48, 0x54, 0x54, 0x54, 0x20} // 0x73 s
	,{0x04, 0x3f, 0x44, 0x40, 0x20} // 0x74 t
	,{0x3c, 0x40, 0x40, 0x20, 0x7c} // 0x75 u
	,{0x1c, 0x20, 0x40, 0x20, 0x1c} // 0x76 v
	,{0x3c, 0x40, 0x30, 0x40, 0x3c} // 0x77 w
	,{0x44, 0x28, 0x10, 0x28, 0x44} // 0x78 x
	,{0x0c, 0x50, 0x50, 0x50, 0x3c} // 0x79 y
	,{0x44, 0x64, 0x54, 0x4c, 0x44} // 0x7a z
	,{0x00, 0x08, 0x36, 0x41, 0x00} // 0x7b {
	,{0x00, 0x00, 0x7f, 0x00, 0x00} // 0x7c |
	,{0x00, 0x41, 0x36, 0x08, 0x00} // 0x7d }
	,{0x10, 0x08, 0x08, 0x10, 0x08} // 0x7e ~
	,{0x78, 0x46, 0x41, 0x46, 0x78} // 0x7f DEL
// 	,{0x7F, 0x11, 0x09, 0x48, 0x30}	// 0x80 128
// 	,{0x7C, 0x04, 0x05, 0x04, 0x00}	// 0x81 129
// 	,{0x00, 0x40, 0x30, 0x00, 0x00}	// 0x82	130
// 	,{0x00, 0x78, 0x0A, 0x09, 0x00} // 0x83 131
// 	,{0x40, 0x30, 0x00, 0x40, 0x30} // 0x84 132
// 	, { 0x40, 0x00, 0x40, 0x00, 0x40 } //85 133
// 	, { 0x00, 0x02, 0x7F, 0x02, 0x00 } //86 134
// 	, { 0x00, 0x22, 0x7F, 0x22, 0x00 } //87 135
// 	, { 0x3E, 0x55, 0x55, 0x41, 0x22 } //88 136
// 	, { 0x13, 0x08, 0x64, 0x02, 0x60 } //89 137
// 	, { 0x7C, 0x02, 0x7F, 0x48, 0x30 } //8A 138
// 	, { 0x00, 0x08, 0x14, 0x00, 0x00 } //8B 139
// 	, { 0x7F, 0x08, 0x7F, 0x48, 0x30 } //8C 140
// 	, { 0x7E, 0x18, 0x19, 0x24, 0x42 } //8D 141
// 	, { 0x7F, 0x11, 0x09, 0x08, 0x70 } //8E 142
// 	, { 0x7F, 0x40, 0xC0, 0x40, 0x7F } //8F 143
// 	, { 0x7F, 0x12, 0x8A, 0x70, 0x00 } //90 144
// 	, { 0x00, 0x00, 0x06, 0x01, 0x00 } //91 145
// 	, { 0x00, 0x04, 0x03, 0x00, 0x00 } //92 146
// 	, { 0x06, 0x01, 0x00, 0x06, 0x01 } //93 147
// 	, { 0x04, 0x03, 0x00, 0x04, 0x03 } //94 148
// 	, { 0x00, 0x0C, 0x0C, 0x00, 0x00 } //95 149
// 	, { 0x00, 0x08, 0x08, 0x08, 0x00 } //96 150
// 	, { 0x08, 0x08, 0x08, 0x08, 0x08 } //97 151
// 	, { 0x00, 0x00, 0x00, 0x00, 0x00 } //98 152
// 	, { 0x78, 0x11, 0x27, 0x11, 0x78 } //99 153
// 	, { 0x70, 0x08, 0x7C, 0x50, 0x20 } //9A 154
// 	, { 0x00, 0x00, 0x14, 0x08, 0x00 } //9B 155
// 	, { 0x7C, 0x10, 0x7C, 0x50, 0x20 } //9C 156
// 	, { 0x7C, 0x10, 0x12, 0x29, 0x44 } //9D 157
// 	, { 0x7F, 0x12, 0x0A, 0x70, 0x00 } //9E 158
// 	, { 0x7C, 0x40, 0xC0, 0x40, 0x7C } //9F 159
// 	, { 0x00, 0x00, 0x00, 0x00, 0x00 } //A0 160
// 	, { 0x23, 0x44, 0x39, 0x04, 0x03 } //A1 161
// 	, { 0x24, 0x49, 0x32, 0x09, 0x04 } //A2 162
// 	, { 0x20, 0x41, 0x3F, 0x01, 0x00 } //A3 163
// 	, { 0x5D, 0x22, 0x22, 0x22, 0x5D } //A4 164
// 	, { 0x7E, 0x02, 0x02, 0x02, 0x01 } //A5 165
// 	, { 0x00, 0x00, 0x77, 0x00, 0x00 } //A6 166
// 	, { 0x00, 0x4A, 0x55, 0x29, 0x00 } //A7 167
// 	, { 0x7C, 0x55, 0x54, 0x45, 0x00 } //A8 168
// 	, { 0x3E, 0x7F, 0x63, 0x77, 0x3E } //A9 169
// 	, { 0x3E, 0x49, 0x49, 0x41, 0x22 } //AA 170
// 	, { 0x08, 0x14, 0x00, 0x08, 0x14 } //AB 171
// 	, { 0x08, 0x08, 0x08, 0x08, 0x18 } //AC 172
// 	, { 0x00, 0x00, 0x00, 0x00, 0x00 } //AD 173
// 	, { 0x3E, 0x5F, 0x4B, 0x55, 0x3E } //AE 174
// 	, { 0x00, 0x45, 0x7C, 0x45, 0x00 } //AF 175
// 	, { 0x00, 0x04, 0x0A, 0x04, 0x00 } //B0 176
// 	, { 0x44, 0x44, 0x5F, 0x44, 0x44 } //B1 177
// 	, { 0x00, 0x41, 0x7F, 0x41, 0x00 } //B2 178
// 	, { 0x00, 0x44, 0x7D, 0x40, 0x00 } //B3 179
// 	, { 0x7C, 0x04, 0x04, 0x02, 0x00 } //B4 180
// 	, { 0x7C, 0x10, 0x10, 0x3C, 0x40 } //B5 181
// 	, { 0x06, 0x0F, 0x7F, 0x01, 0x7F } //B6 182
// 	, { 0x00, 0x00, 0x08, 0x00, 0x00 } //B7 183
// 	, { 0x38, 0x55, 0x54, 0x55, 0x18 } //B8 184
// 	, { 0x7C, 0x10, 0x20, 0x7C, 0x01 } //B9 185
// 	, { 0x38, 0x54, 0x54, 0x44, 0x28 } //BA 186
// 	, { 0x14, 0x08, 0x00, 0x14, 0x08 } //BB 187
// 	, { 0x20, 0x40, 0x3D, 0x00, 0x00 } //BC 188
// 	, { 0x66, 0x49, 0x49, 0x49, 0x33 } //BD 189
// 	, { 0x08, 0x54, 0x54, 0x54, 0x20 } //BE 190
// 	, { 0x00, 0x45, 0x7C, 0x41, 0x00 } //BF 191
// 	, { 0x7C, 0x12, 0x11, 0x12, 0x7C } //C0 192
// 	, { 0x7F, 0x49, 0x49, 0x49, 0x30 } //C1 193
// 	, { 0x7F, 0x49, 0x49, 0x49, 0x36 } //C2 194
// 	, { 0x7F, 0x01, 0x01, 0x01, 0x01 } //C3 195
// 	, { 0xC0, 0x7E, 0x41, 0x7F, 0xC0 } //C4 196
// 	, { 0x7F, 0x49, 0x49, 0x49, 0x41 } //C5 197
// 	, { 0x77, 0x08, 0x7F, 0x08, 0x77 } //C6 198
// 	, { 0x00, 0x49, 0x49, 0x49, 0x36 } //C7 199
// 	, { 0x7F, 0x10, 0x08, 0x04, 0x7F } //C8 200
// 	, { 0x7F, 0x10, 0x09, 0x04, 0x7F } //C9 201
// 	, { 0x7F, 0x08, 0x14, 0x22, 0x41 } //CA 202
// 	, { 0x7C, 0x02, 0x01, 0x01, 0x7F } //CB 203
// 	, { 0x7F, 0x02, 0x0C, 0x02, 0x7F } //CC 204
// 	, { 0x7F, 0x08, 0x08, 0x08, 0x7F } //CD 205
// 	, { 0x3E, 0x41, 0x41, 0x41, 0x3E } //CE 206
// 	, { 0x7F, 0x01, 0x01, 0x01, 0x7F } //CF 207
// 	, { 0x7F, 0x09, 0x09, 0x09, 0x06 } //D0 208
// 	, { 0x3E, 0x41, 0x41, 0x41, 0x22 } //D1 209
// 	, { 0x01, 0x01, 0x7F, 0x01, 0x01 } //D2 210
// 	, { 0x07, 0x48, 0x48, 0x48, 0x3F } //D3 211
// 	, { 0x0E, 0x11, 0x7F, 0x11, 0x0E } //D4 212
// 	, { 0x63, 0x14, 0x08, 0x14, 0x63 } //D5 213
// 	, { 0x7F, 0x40, 0x40, 0x7F, 0xC0 } //D6 214
// 	, { 0x07, 0x08, 0x08, 0x08, 0x7F } //D7 215
// 	, { 0x7F, 0x40, 0x7F, 0x40, 0x7F } //D8 216
// 	, { 0x7F, 0x40, 0x7F, 0x40, 0xFF } //D9 217
// 	, { 0x01, 0x7F, 0x48, 0x48, 0x30 } //DA 218
// 	, { 0x7F, 0x48, 0x30, 0x00, 0x7F } //DB 219
// 	, { 0x7F, 0x48, 0x48, 0x48, 0x30 } //DC 220
// 	, { 0x22, 0x41, 0x49, 0x49, 0x3E } //DD 221
// 	, { 0x7F, 0x08, 0x3E, 0x41, 0x3E } //DE 222
// 	, { 0x46, 0x29, 0x19, 0x09, 0x7F } //DF 223
// 	, { 0x20, 0x54, 0x54, 0x54, 0x78 } //E0 224
// 	, { 0x7C, 0x54, 0x54, 0x54, 0x20 } //E1 225
// 	, { 0x7C, 0x54, 0x54, 0x54, 0x28 } //E2 226
// 	, { 0x7C, 0x04, 0x04, 0x04, 0x00 } //E3 227
// 	, { 0xC0, 0x78, 0x44, 0x7C, 0xC0 } //E4 228
// 	, { 0x38, 0x54, 0x54, 0x54, 0x18 } //E5 229
// 	, { 0x6C, 0x10, 0x7C, 0x10, 0x6C } //E6 230
// 	, { 0x00, 0x54, 0x54, 0x54, 0x28 } //E7 231
// 	, { 0x7C, 0x20, 0x10, 0x08, 0x7C } //E8 232
// 	, { 0x7C, 0x20, 0x12, 0x08, 0x7C } //E9 233
// 	, { 0x7C, 0x10, 0x10, 0x28, 0x44 } //EA 234
// 	, { 0x70, 0x08, 0x04, 0x04, 0x7C } //EB 235
// 	, { 0x7C, 0x08, 0x10, 0x08, 0x7C } //EC 236
// 	, { 0x7C, 0x10, 0x10, 0x10, 0x7C } //ED 237
// 	, { 0x38, 0x44, 0x44, 0x44, 0x38 } //EE 238
// 	, { 0x7C, 0x04, 0x04, 0x04, 0x7C } //EF 239
// 	, { 0x7C, 0x14, 0x14, 0x14, 0x08 } //F0 240
// 	, { 0x38, 0x44, 0x44, 0x44, 0x28 } //F1 241
// 	, { 0x04, 0x04, 0x7C, 0x04, 0x04 } //F2 242
// 	, { 0x0C, 0x50, 0x50, 0x50, 0x3C } //F3 243
// 	, { 0x38, 0x44, 0xFC, 0x44, 0x38 } //F4 244
// 	, { 0x44, 0x28, 0x10, 0x28, 0x44 } //F5 245
// 	, { 0x7C, 0x40, 0x40, 0x7C, 0xC0 } //F6 246
// 	, { 0x0C, 0x10, 0x10, 0x10, 0x7C } //F7 247
// 	, { 0x7C, 0x40, 0x7C, 0x40, 0x7C } //F8 248
// 	, { 0x7C, 0x40, 0x7C, 0x40, 0xFC } //F9 249
// 	, { 0x04, 0x7C, 0x50, 0x50, 0x20 } //FA 250
// 	, { 0x7C, 0x50, 0x20, 0x00, 0x7C } //FB 251
// 	, { 0x7C, 0x50, 0x50, 0x20, 0x00 } //FC 252
// 	, { 0x28, 0x44, 0x54, 0x54, 0x38 } //FD 253
// 	, { 0x7C, 0x10, 0x38, 0x44, 0x38 } //FE 254
// 	, { 0x48, 0x34, 0x14, 0x14, 0x7C } //FF 255
};

static const int8_t LCD_Nokia_SmallFont6x8[][6] PROGMEM = {
	{	0x00, 0x00, 0x00, 0x00, 0x00, 0x00	}	//	sp
	,{	0x00, 0x00, 0x00, 0x2f, 0x00, 0x00	}	//	!
	,{	0x00, 0x00, 0x07, 0x00, 0x07, 0x00	}	//	"
	,{	0x00, 0x14, 0x7f, 0x14, 0x7f, 0x14	}	//	#
	,{	0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12	}	//	$
	,{	0x00, 0x23, 0x13, 0x08, 0x64, 0x62	}	//	%
	,{	0x00, 0x36, 0x49, 0x55, 0x22, 0x50	}	//	&
	,{	0x00, 0x00, 0x05, 0x03, 0x00, 0x00	}	//	'
	,{	0x00, 0x00, 0x1c, 0x22, 0x41, 0x00	}	//	(
	,{	0x00, 0x00, 0x41, 0x22, 0x1c, 0x00	}	//	)
	,{	0x00, 0x14, 0x08, 0x3E, 0x08, 0x14	}	//	*
	,{	0x00, 0x08, 0x08, 0x3E, 0x08, 0x08	}	//	+
	,{	0x00, 0x00, 0x00, 0xA0, 0x60, 0x00	}	//	,
	,{	0x00, 0x08, 0x08, 0x08, 0x08, 0x08	}	//	-
	,{	0x00, 0x00, 0x60, 0x60, 0x00, 0x00	}	//	.
	,{	0x00, 0x20, 0x10, 0x08, 0x04, 0x02	}	//	/
	,{	0x00, 0x3E, 0x51, 0x49, 0x45, 0x3E	}	//	0
	,{	0x00, 0x00, 0x42, 0x7F, 0x40, 0x00	}	//	1
	,{	0x00, 0x42, 0x61, 0x51, 0x49, 0x46	}	//	2
	,{	0x00, 0x21, 0x41, 0x45, 0x4B, 0x31	}	//	3
	,{	0x00, 0x18, 0x14, 0x12, 0x7F, 0x10	}	//	4
	,{	0x00, 0x27, 0x45, 0x45, 0x45, 0x39	}	//	5
	,{	0x00, 0x3C, 0x4A, 0x49, 0x49, 0x30	}	//	6
	,{	0x00, 0x01, 0x71, 0x09, 0x05, 0x03	}	//	7
	,{	0x00, 0x36, 0x49, 0x49, 0x49, 0x36	}	//	8
	,{	0x00, 0x06, 0x49, 0x49, 0x29, 0x1E	}	//	9
	,{	0x00, 0x00, 0x36, 0x36, 0x00, 0x00	}	//	:
	,{	0x00, 0x00, 0x56, 0x36, 0x00, 0x00	}	//	;
	,{	0x00, 0x08, 0x14, 0x22, 0x41, 0x00	}	//	<
	,{	0x00, 0x14, 0x14, 0x14, 0x14, 0x14	}	//	=
	,{	0x00, 0x00, 0x41, 0x22, 0x14, 0x08	}	//	>
	,{	0x00, 0x02, 0x01, 0x51, 0x09, 0x06	}	//	?
	,{	0x00, 0x32, 0x49, 0x59, 0x51, 0x3E	}	//	@
	,{	0x00, 0x7C, 0x12, 0x11, 0x12, 0x7C	}	//	A
	,{	0x00, 0x7F, 0x49, 0x49, 0x49, 0x36	}	//	B
	,{	0x00, 0x3E, 0x41, 0x41, 0x41, 0x22	}	//	C
	,{	0x00, 0x7F, 0x41, 0x41, 0x22, 0x1C	}	//	D
	,{	0x00, 0x7F, 0x49, 0x49, 0x49, 0x41	}	//	E
	,{	0x00, 0x7F, 0x09, 0x09, 0x09, 0x01	}	//	F
	,{	0x00, 0x3E, 0x41, 0x49, 0x49, 0x7A	}	//	G
	,{	0x00, 0x7F, 0x08, 0x08, 0x08, 0x7F	}	//	H
	,{	0x00, 0x00, 0x41, 0x7F, 0x41, 0x00	}	//	I
	,{	0x00, 0x20, 0x40, 0x41, 0x3F, 0x01	}	//	J
	,{	0x00, 0x7F, 0x08, 0x14, 0x22, 0x41	}	//	K
	,{	0x00, 0x7F, 0x40, 0x40, 0x40, 0x40	}	//	L
	,{	0x00, 0x7F, 0x02, 0x0C, 0x02, 0x7F	}	//	M
	,{	0x00, 0x7F, 0x04, 0x08, 0x10, 0x7F	}	//	N
	,{	0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E	}	//	O
	,{	0x00, 0x7F, 0x09, 0x09, 0x09, 0x06	}	//	P
	,{	0x00, 0x3E, 0x41, 0x51, 0x21, 0x5E	}	//	Q
	,{	0x00, 0x7F, 0x09, 0x19, 0x29, 0x46	}	//	R
	,{	0x00, 0x46, 0x49, 0x49, 0x49, 0x31	}	//	S
	,{	0x00, 0x01, 0x01, 0x7F, 0x01, 0x01	}	//	T
	,{	0x00, 0x3F, 0x40, 0x40, 0x40, 0x3F	}	//	U
	,{	0x00, 0x1F, 0x20, 0x40, 0x20, 0x1F	}	//	V
	,{	0x00, 0x3F, 0x40, 0x38, 0x40, 0x3F	}	//	W
	,{	0x00, 0x63, 0x14, 0x08, 0x14, 0x63	}	//	X
	,{	0x00, 0x07, 0x08, 0x70, 0x08, 0x07	}	//	Y
	,{	0x00, 0x61, 0x51, 0x49, 0x45, 0x43	}	//	Z
	,{	0x00, 0x00, 0x7F, 0x41, 0x41, 0x00	}	//	[
	,{	0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55	}	//	Backslash (Checker pattern)
	,{	0x00, 0x00, 0x41, 0x41, 0x7F, 0x00	}	//	]
	,{	0x00, 0x04, 0x02, 0x01, 0x02, 0x04	}	//	^
	,{	0x00, 0x40, 0x40, 0x40, 0x40, 0x40	}	//	_
	,{	0x00, 0x00, 0x03, 0x05, 0x00, 0x00	}	//	`
	,{	0x00, 0x20, 0x54, 0x54, 0x54, 0x78	}	//	a
	,{	0x00, 0x7F, 0x48, 0x44, 0x44, 0x38	}	//	b
	,{	0x00, 0x38, 0x44, 0x44, 0x44, 0x20	}	//	c
	,{	0x00, 0x38, 0x44, 0x44, 0x48, 0x7F	}	//	d
	,{	0x00, 0x38, 0x54, 0x54, 0x54, 0x18	}	//	e
	,{	0x00, 0x08, 0x7E, 0x09, 0x01, 0x02	}	//	f
	,{	0x00, 0x18, 0xA4, 0xA4, 0xA4, 0x7C	}	//	g
	,{	0x00, 0x7F, 0x08, 0x04, 0x04, 0x78	}	//	h
	,{	0x00, 0x00, 0x44, 0x7D, 0x40, 0x00	}	//	i
	,{	0x00, 0x40, 0x80, 0x84, 0x7D, 0x00	}	//	j
	,{	0x00, 0x7F, 0x10, 0x28, 0x44, 0x00	}	//	k
	,{	0x00, 0x00, 0x41, 0x7F, 0x40, 0x00	}	//	l
	,{	0x00, 0x7C, 0x04, 0x18, 0x04, 0x78	}	//	m
	,{	0x00, 0x7C, 0x08, 0x04, 0x04, 0x78	}	//	n
	,{	0x00, 0x38, 0x44, 0x44, 0x44, 0x38	}	//	o
	,{	0x00, 0xFC, 0x24, 0x24, 0x24, 0x18	}	//	p
	,{	0x00, 0x18, 0x24, 0x24, 0x18, 0xFC	}	//	q
	,{	0x00, 0x7C, 0x08, 0x04, 0x04, 0x08	}	//	r
	,{	0x00, 0x48, 0x54, 0x54, 0x54, 0x20	}	//	s
	,{	0x00, 0x04, 0x3F, 0x44, 0x40, 0x20	}	//	t
	,{	0x00, 0x3C, 0x40, 0x40, 0x20, 0x7C	}	//	u
	,{	0x00, 0x1C, 0x20, 0x40, 0x20, 0x1C	}	//	v
	,{	0x00, 0x3C, 0x40, 0x30, 0x40, 0x3C	}	//	w
	,{	0x00, 0x44, 0x28, 0x10, 0x28, 0x44	}	//	x
	,{	0x00, 0x1C, 0xA0, 0xA0, 0xA0, 0x7C	}	//	y
	,{	0x00, 0x44, 0x64, 0x54, 0x4C, 0x44	}	//	z
	,{	0x00, 0x00, 0x10, 0x7C, 0x82, 0x00	}	//	{
	,{	0x00, 0x00, 0x00, 0xFF, 0x00, 0x00	}	//	|
	,{	0x00, 0x00, 0x82, 0x7C, 0x10, 0x00	}	//	}
	,{	0x00, 0x00, 0x06, 0x09, 0x09, 0x06	}	//	~ (Degrees)
};

static const uint8_t LCD_Nokia_MediumFont12x16[][2][12] PROGMEM = {
	{{0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00}, {0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00}}   //	0x2D	-
	,{{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, {0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00}}   //	0x3E	.
	,{{0x00, 0x00, 0x02, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x02, 0x00, 0x00}, {0x00, 0x00, 0x81, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x81, 0x00, 0x00}}   //	0x2F	/
	,{{0x00, 0xfc, 0x7a, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x7a, 0xfc, 0x00}, {0x00, 0x7e, 0xbc, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xbc, 0x7e, 0x00}}   //	0x30	0
	,{{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xfc, 0x00}, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x7e, 0x00}}   //	0x31	1
	,{{0x00, 0x00, 0x02, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x7a, 0xfc, 0x00}, {0x00, 0x7e, 0xbd, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x81, 0x00, 0x00}}   //	0x32	2
	,{{0x00, 0x00, 0x02, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x7a, 0xfc, 0x00}, {0x00, 0x00, 0x81, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xbd, 0x7e, 0x00}}   //	0x33	3
	,{{0x00, 0xfc, 0x78, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x78, 0xfc, 0x00}, {0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x3d, 0x7e, 0x00}}   //	0x34	4
	,{{0x00, 0xfc, 0x7a, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x02, 0x00, 0x00}, {0x00, 0x00, 0x81, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xbd, 0x7e, 0x00}}   //	0x35	5
	,{{0x00, 0xfc, 0x7a, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x02, 0x00, 0x00}, {0x00, 0x7e, 0xbd, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xbd, 0x7e, 0x00}}   //	0x36	6
	,{{0x00, 0x00, 0x02, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x7a, 0xfc, 0x00}, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x7e, 0x00}}   //	0x37	7
	,{{0x00, 0xfc, 0x7a, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x7a, 0xfc, 0x00}, {0x00, 0x7e, 0xbd, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xbd, 0x7e, 0x00}}   //	0x38	8
	,{{0x00, 0xfc, 0x7a, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x7a, 0xfc, 0x00}, {0x00, 0x00, 0x81, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xbd, 0x7e, 0x00}}   //	0x39	9
	,{{0x00, 0x00, 0x00, 0x00, 0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00, 0x00, 0x00}, {0x00, 0x00, 0x00, 0x00, 0x3E, 0x3E, 0x3E, 0x3E, 0x00, 0x00, 0x00, 0x00}}	//	0x3A	:
};

/*
static const int8_t LCD_Nokia_RussianCharSet[][5] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00,   //20    32
	0x00, 0x00, 0x5F, 0x00, 0x00,   //21    33
	0x00, 0x07, 0x00, 0x07, 0x00,   //22    34
	0x14, 0x7F, 0x14, 0x7F, 0x14,   //23    35
	0x24, 0x2A, 0x6B, 0x2A, 0x12,   //24    36
	0x23, 0x13, 0x08, 0x64, 0x62,   //25    37
	0x36, 0x49, 0x56, 0x20, 0x50,   //26    38
	0x00, 0x00, 0x07, 0x00, 0x00,   //27    39
	0x00, 0x1C, 0x22, 0x41, 0x00,   //28    40
	0x00, 0x41, 0x22, 0x1C, 0x00,   //29    41
	0x0A, 0x04, 0x0E, 0x04, 0x0A,   //2A    42
	0x08, 0x08, 0x3E, 0x08, 0x08,   //2B    43
	0x00, 0x40, 0x30, 0x00, 0x00,   //2C    44
	0x08, 0x08, 0x08, 0x08, 0x08,   //2D    45
	0x00, 0x60, 0x60, 0x00, 0x00,   //2E    46
	0x40, 0x30, 0x08, 0x06, 0x01,   //2F    47
	0x3E, 0x51, 0x49, 0x45, 0x3E,   //30    48
	0x00, 0x42, 0x7F, 0x40, 0x00,   //31    49
	0x72, 0x49, 0x49, 0x49, 0x46,   //32    50
	0x21, 0x41, 0x49, 0x4D, 0x33,   //33    51
	0x18, 0x14, 0x12, 0x7F, 0x10,   //34    52
	0x27, 0x45, 0x45, 0x45, 0x39,   //35    53
	0x3E, 0x49, 0x49, 0x49, 0x32,   //36    54
	0x41, 0x21, 0x11, 0x09, 0x07,   //37    55
	0x36, 0x49, 0x49, 0x49, 0x36,   //38    56
	0x26, 0x49, 0x49, 0x49, 0x3E,   //39    57
	0x00, 0x00, 0x14, 0x00, 0x00,   //3A    58
	0x00, 0x40, 0x34, 0x00, 0x00,   //3B    59
	0x08, 0x14, 0x22, 0x41, 0x00,   //3C    60
	0x14, 0x14, 0x14, 0x14, 0x14,   //3D    61
	0x00, 0x41, 0x22, 0x14, 0x08,   //3E    62
	0x02, 0x01, 0x59, 0x09, 0x06,   //3F    63
	0x3E, 0x41, 0x5D, 0x49, 0x26,   //40    64
	0x7C, 0x12, 0x11, 0x12, 0x7C,   //41    65
	0x7F, 0x49, 0x49, 0x49, 0x36,   //42    66
	0x3E, 0x41, 0x41, 0x41, 0x22,   //43    67
	0x7F, 0x41, 0x41, 0x41, 0x3E,   //44    68
	0x7F, 0x49, 0x49, 0x49, 0x41,   //45    69
	0x7F, 0x09, 0x09, 0x01, 0x03,   //46    70
	0x3E, 0x41, 0x41, 0x51, 0x73,   //47    71
	0x7F, 0x08, 0x08, 0x08, 0x7F,   //48    72
	0x00, 0x41, 0x7F, 0x41, 0x00,   //49    73
	0x20, 0x40, 0x41, 0x3F, 0x01,   //4A    74
	0x7F, 0x08, 0x14, 0x22, 0x41,   //4B    75
	0x7F, 0x40, 0x40, 0x40, 0x60,   //4C    76
	0x7F, 0x02, 0x1C, 0x02, 0x7F,   //4D    77
	0x7F, 0x04, 0x08, 0x10, 0x7F,   //4E    78
	0x3E, 0x41, 0x41, 0x41, 0x3E,   //4F    79
	0x7F, 0x09, 0x09, 0x09, 0x06,   //50    80
	0x3E, 0x41, 0x51, 0x21, 0x5E,   //51    81
	0x7F, 0x09, 0x19, 0x29, 0x46,   //52    82
	0x26, 0x49, 0x49, 0x49, 0x32,   //53    83
	0x03, 0x01, 0x7F, 0x01, 0x03,   //54    84
	0x3F, 0x40, 0x40, 0x40, 0x3F,   //55    85
	0x1F, 0x20, 0x40, 0x20, 0x1F,   //56    86
	0x3F, 0x40, 0x38, 0x40, 0x3F,   //57    87
	0x63, 0x14, 0x08, 0x14, 0x63,   //58    88
	0x03, 0x04, 0x78, 0x04, 0x03,   //59    89
	0x63, 0x51, 0x49, 0x45, 0x63,   //5A    90
	0x00, 0x7F, 0x41, 0x41, 0x00,   //5B    91
	0x01, 0x06, 0x08, 0x30, 0x40,   //5C    92
	0x00, 0x41, 0x41, 0x7F, 0x00,   //5D    93
	0x04, 0x02, 0x01, 0x02, 0x04,   //5E    94
	0x40, 0x40, 0x40, 0x40, 0x40,   //5F    95
	0x00, 0x01, 0x02, 0x04, 0x00,   //60    96
	0x20, 0x54, 0x54, 0x78, 0x40,   //61    97
	0x7F, 0x28, 0x44, 0x44, 0x38,   //62    98
	0x38, 0x44, 0x44, 0x44, 0x28,   //63    99
	0x38, 0x44, 0x44, 0x28, 0x7F,   //64    100
	0x38, 0x54, 0x54, 0x54, 0x18,   //65    101
	0x00, 0x08, 0x7E, 0x09, 0x02,   //66    102
	0x18, 0xA4, 0xA4, 0x9C, 0x78,   //67    103
	0x7F, 0x08, 0x04, 0x04, 0x78,   //68    104
	0x00, 0x44, 0x7D, 0x40, 0x00,   //69    105
	0x20, 0x40, 0x40, 0x3D, 0x00,   //6A    106
	0x7F, 0x10, 0x28, 0x44, 0x00,   //6B    107
	0x00, 0x41, 0x7F, 0x40, 0x00,   //6C    108
	0x7C, 0x04, 0x78, 0x04, 0x78,   //6D    109
	0x7C, 0x08, 0x04, 0x04, 0x78,   //6E    110
	0x38, 0x44, 0x44, 0x44, 0x38,   //6F    111
	0xFC, 0x18, 0x24, 0x24, 0x18,   //70    112
	0x18, 0x24, 0x24, 0x18, 0xFC,   //71    113
	0x7C, 0x08, 0x04, 0x04, 0x08,   //72    114
	0x48, 0x54, 0x54, 0x54, 0x24,   //73    115
	0x04, 0x04, 0x3F, 0x44, 0x24,   //74    116
	0x3C, 0x40, 0x40, 0x20, 0x7C,   //75    117
	0x1C, 0x20, 0x40, 0x20, 0x1C,   //76    118
	0x3C, 0x40, 0x30, 0x40, 0x3C,   //77    119
	0x44, 0x28, 0x10, 0x28, 0x44,   //78    120
	0x4C, 0x90, 0x90, 0x90, 0x7C,   //79    121
	0x44, 0x64, 0x54, 0x4C, 0x44,   //7A    122
	0x00, 0x08, 0x36, 0x41, 0x00,   //7B    123
	0x00, 0x00, 0x77, 0x00, 0x00,   //7C    124
	0x00, 0x41, 0x36, 0x08, 0x00,   //7D    125
	0x08, 0x04, 0x08, 0x10, 0x08,   //7E    126
	0x3C, 0x26, 0x23, 0x26, 0x3C,   //7F    127
	0x7F, 0x11, 0x09, 0x48, 0x30,   //80    128
	0x7C, 0x04, 0x05, 0x04, 0x00,   //81    129
	0x00, 0x40, 0x30, 0x00, 0x00,   //82    130
	0x00, 0x78, 0x0A, 0x09, 0x00,   //83    131
	0x40, 0x30, 0x00, 0x40, 0x30,   //84    132
	0x40, 0x00, 0x40, 0x00, 0x40,   //85    133
	0x00, 0x02, 0x7F, 0x02, 0x00,   //86    134
	0x00, 0x22, 0x7F, 0x22, 0x00,   //87    135
	0x3E, 0x55, 0x55, 0x41, 0x22,   //88    136
	0x13, 0x08, 0x64, 0x02, 0x60,   //89    137
	0x7C, 0x02, 0x7F, 0x48, 0x30,   //8A    138
	0x00, 0x08, 0x14, 0x00, 0x00,   //8B    139
	0x7F, 0x08, 0x7F, 0x48, 0x30,   //8C    140
	0x7E, 0x18, 0x19, 0x24, 0x42,   //8D    141
	0x7F, 0x11, 0x09, 0x08, 0x70,   //8E    142
	0x7F, 0x40, 0xC0, 0x40, 0x7F,   //8F    143
	0x7F, 0x12, 0x8A, 0x70, 0x00,   //90    144
	0x00, 0x00, 0x06, 0x01, 0x00,   //91    145
	0x00, 0x04, 0x03, 0x00, 0x00,   //92    146
	0x06, 0x01, 0x00, 0x06, 0x01,   //93    147
	0x04, 0x03, 0x00, 0x04, 0x03,   //94    148
	0x00, 0x0C, 0x0C, 0x00, 0x00,   //95    149
	0x00, 0x08, 0x08, 0x08, 0x00,   //96    150
	0x08, 0x08, 0x08, 0x08, 0x08,   //97    151
	0x00, 0x00, 0x00, 0x00, 0x00,   //98    152
	0x78, 0x11, 0x27, 0x11, 0x78,   //99    153
	0x70, 0x08, 0x7C, 0x50, 0x20,   //9A    154
	0x00, 0x00, 0x14, 0x08, 0x00,   //9B    155
	0x7C, 0x10, 0x7C, 0x50, 0x20,   //9C    156
	0x7C, 0x10, 0x12, 0x29, 0x44,   //9D    157
	0x7F, 0x12, 0x0A, 0x70, 0x00,   //9E    158
	0x7C, 0x40, 0xC0, 0x40, 0x7C,   //9F    159
	0x00, 0x00, 0x00, 0x00, 0x00,   //A0    160
	0x23, 0x44, 0x39, 0x04, 0x03,   //A1    161
	0x24, 0x49, 0x32, 0x09, 0x04,   //A2    162
	0x20, 0x41, 0x3F, 0x01, 0x00,   //A3    163
	0x5D, 0x22, 0x22, 0x22, 0x5D,   //A4    164
	0x7E, 0x02, 0x02, 0x02, 0x01,   //A5    165
	0x00, 0x00, 0x77, 0x00, 0x00,   //A6    166
	0x00, 0x4A, 0x55, 0x29, 0x00,   //A7    167
	0x7C, 0x55, 0x54, 0x45, 0x00,   //A8    168
	0x3E, 0x7F, 0x63, 0x77, 0x3E,   //A9    169
	0x3E, 0x49, 0x49, 0x41, 0x22,   //AA    170
	0x08, 0x14, 0x00, 0x08, 0x14,   //AB    171
	0x08, 0x08, 0x08, 0x08, 0x18,   //AC    172
	0x00, 0x00, 0x00, 0x00, 0x00,   //AD    173
	0x3E, 0x5F, 0x4B, 0x55, 0x3E,   //AE    174
	0x00, 0x45, 0x7C, 0x45, 0x00,   //AF    175
	0x00, 0x04, 0x0A, 0x04, 0x00,   //B0    176
	0x44, 0x44, 0x5F, 0x44, 0x44,   //B1    177
	0x00, 0x41, 0x7F, 0x41, 0x00,   //B2    178
	0x00, 0x44, 0x7D, 0x40, 0x00,   //B3    179
	0x7C, 0x04, 0x04, 0x02, 0x00,   //B4    180
	0x7C, 0x10, 0x10, 0x3C, 0x40,   //B5    181
	0x06, 0x0F, 0x7F, 0x01, 0x7F,   //B6    182
	0x00, 0x00, 0x08, 0x00, 0x00,   //B7    183
	0x38, 0x55, 0x54, 0x55, 0x18,   //B8    184
	0x7C, 0x10, 0x20, 0x7C, 0x01,   //B9    185
	0x38, 0x54, 0x54, 0x44, 0x28,   //BA    186
	0x14, 0x08, 0x00, 0x14, 0x08,   //BB    187
	0x20, 0x40, 0x3D, 0x00, 0x00,   //BC    188
	0x66, 0x49, 0x49, 0x49, 0x33,   //BD    189
	0x08, 0x54, 0x54, 0x54, 0x20,   //BE    190
	0x00, 0x45, 0x7C, 0x41, 0x00,   //BF    191
	0x7C, 0x12, 0x11, 0x12, 0x7C,   //C0    192
	0x7F, 0x49, 0x49, 0x49, 0x30,   //C1    193
	0x7F, 0x49, 0x49, 0x49, 0x36,   //C2    194
	0x7F, 0x01, 0x01, 0x01, 0x01,   //C3    195
	0xC0, 0x7E, 0x41, 0x7F, 0xC0,   //C4    196
	0x7F, 0x49, 0x49, 0x49, 0x41,   //C5    197
	0x77, 0x08, 0x7F, 0x08, 0x77,   //C6    198
	0x00, 0x49, 0x49, 0x49, 0x36,   //C7    199
	0x7F, 0x10, 0x08, 0x04, 0x7F,   //C8    200
	0x7F, 0x10, 0x09, 0x04, 0x7F,   //C9    201
	0x7F, 0x08, 0x14, 0x22, 0x41,   //CA    202
	0x7C, 0x02, 0x01, 0x01, 0x7F,   //CB    203
	0x7F, 0x02, 0x0C, 0x02, 0x7F,   //CC    204
	0x7F, 0x08, 0x08, 0x08, 0x7F,   //CD    205
	0x3E, 0x41, 0x41, 0x41, 0x3E,   //CE    206
	0x7F, 0x01, 0x01, 0x01, 0x7F,   //CF    207
	0x7F, 0x09, 0x09, 0x09, 0x06,   //D0    208
	0x3E, 0x41, 0x41, 0x41, 0x22,   //D1    209
	0x01, 0x01, 0x7F, 0x01, 0x01,   //D2    210
	0x07, 0x48, 0x48, 0x48, 0x3F,   //D3    211
	0x0E, 0x11, 0x7F, 0x11, 0x0E,   //D4    212
	0x63, 0x14, 0x08, 0x14, 0x63,   //D5    213
	0x7F, 0x40, 0x40, 0x7F, 0xC0,   //D6    214
	0x07, 0x08, 0x08, 0x08, 0x7F,   //D7    215
	0x7F, 0x40, 0x7F, 0x40, 0x7F,   //D8    216
	0x7F, 0x40, 0x7F, 0x40, 0xFF,   //D9    217
	0x01, 0x7F, 0x48, 0x48, 0x30,   //DA    218
	0x7F, 0x48, 0x30, 0x00, 0x7F,   //DB    219
	0x7F, 0x48, 0x48, 0x48, 0x30,   //DC    220
	0x22, 0x41, 0x49, 0x49, 0x3E,   //DD    221
	0x7F, 0x08, 0x3E, 0x41, 0x3E,   //DE    222
	0x46, 0x29, 0x19, 0x09, 0x7F,   //DF    223
	0x20, 0x54, 0x54, 0x54, 0x78,   //E0    224
	0x7C, 0x54, 0x54, 0x54, 0x20,   //E1    225
	0x7C, 0x54, 0x54, 0x54, 0x28,   //E2    226
	0x7C, 0x04, 0x04, 0x04, 0x00,   //E3    227
	0xC0, 0x78, 0x44, 0x7C, 0xC0,   //E4    228
	0x38, 0x54, 0x54, 0x54, 0x18,   //E5    229
	0x6C, 0x10, 0x7C, 0x10, 0x6C,   //E6    230
	0x00, 0x54, 0x54, 0x54, 0x28,   //E7    231
	0x7C, 0x20, 0x10, 0x08, 0x7C,   //E8    232
	0x7C, 0x20, 0x12, 0x08, 0x7C,   //E9    233
	0x7C, 0x10, 0x10, 0x28, 0x44,   //EA    234
	0x70, 0x08, 0x04, 0x04, 0x7C,   //EB    235
	0x7C, 0x08, 0x10, 0x08, 0x7C,   //EC    236
	0x7C, 0x10, 0x10, 0x10, 0x7C,   //ED    237
	0x38, 0x44, 0x44, 0x44, 0x38,   //EE    238
	0x7C, 0x04, 0x04, 0x04, 0x7C,   //EF    239
	0x7C, 0x14, 0x14, 0x14, 0x08,   //F0    240
	0x38, 0x44, 0x44, 0x44, 0x28,   //F1    241
	0x04, 0x04, 0x7C, 0x04, 0x04,   //F2    242
	0x0C, 0x50, 0x50, 0x50, 0x3C,   //F3    243
	0x38, 0x44, 0xFC, 0x44, 0x38,   //F4    244
	0x44, 0x28, 0x10, 0x28, 0x44,   //F5    245
	0x7C, 0x40, 0x40, 0x7C, 0xC0,   //F6    246
	0x0C, 0x10, 0x10, 0x10, 0x7C,   //F7    247
	0x7C, 0x40, 0x7C, 0x40, 0x7C,   //F8    248
	0x7C, 0x40, 0x7C, 0x40, 0xFC,   //F9    249
	0x04, 0x7C, 0x50, 0x50, 0x20,   //FA    250
	0x7C, 0x50, 0x20, 0x00, 0x7C,   //FB    251
	0x7C, 0x50, 0x50, 0x20, 0x00,   //FC    252
	0x28, 0x44, 0x54, 0x54, 0x38,   //FD    253
	0x7C, 0x10, 0x38, 0x44, 0x38,   //FE    254
	0x48, 0x34, 0x14, 0x14, 0x7C    //FF    255
};
*/

static const uint8_t SparkfunLogo[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (0,0)->(11,7) ~ These 12 bytes cover an 8x12 block in the left corner of the display
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (12,0)->(23,7)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, // (24,0)->(35,7)
	0xF0, 0xF8, 0xFC, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0x1E, 0x0E, 0x02, 0x00, // (36,0)->(47,7)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (48,0)->(59,7)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (60,0)->(71,7)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (72,0)->(83,7)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (0,8)->(11,15)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (12,8)->(23,15)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, // (24,8)->(35,15)
	0x0F, 0x1F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, // (36,8)->(47,15)
	0xF8, 0xF0, 0xF8, 0xFE, 0xFE, 0xFC, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x00, // (48,8)->(59,15)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (60,8)->(71,15)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (72,8)->(83,15)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (0,16)->(11,23)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (12,16)->(23,23)
	0x00, 0x00, 0xF8, 0xFC, 0xFE, 0xFE, 0xFF, 0xFF, 0xF3, 0xE0, 0xE0, 0xC0, // (24,16)->(35,23)
	0xC0, 0xC0, 0xE0, 0xE0, 0xF1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // (36,16)->(47,23)
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3E, 0x00, 0x00, 0x00, // (48,16)->(59,23)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (60,16)->(71,23)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (72,16)->(83,23)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (0,24)->(11,31)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (12,24)->(23,31)
	0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // (24,24)->(35,31)
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // (36,24)->(47,31)
	0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, // (48,24)->(59,31)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (60,24)->(71,31)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (72,24)->(83,31)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (0,32)->(11,39)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (12,32)->(23,39)
	0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, // (24,32)->(35,39)
	0x0F, 0x0F, 0x0F, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x03, // (36,32)->(47,39)
	0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (48,32)->(59,39)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (60,32)->(71,39)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (72,32)->(83,39)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (0,40)->(11,47)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (12,40)->(23,47)
	0x00, 0x00, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, // (24,40)->(35,47)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (36,40)->(47,47)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (48,40)->(59,47)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (60,40)->(71,47)
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (72,40)->(83,47) !!! The bottom right pixel!
};