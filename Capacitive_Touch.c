                                                   /*Anyone is free to copy, modify, publish, use, compile or
                                                    distribute this software, either in source code form or as a compiled
                                                    binary, for non-commercial use only. (i.e. YOU MAY NOT SELL IT)
                                                    John B 16/05/2021

                                                    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
                                                    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
                                                    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
                                                    IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
                                                    OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
                                                    ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
                                                    OTHER DEALINGS IN THE SOFTWARE.*/

//GLCD FontName : Tahoma15x21_%
//GLCD FontSize : 15 x 21

const unsigned short Tahoma15x21_Percent[] = {
   0x00,0x00,0x0C,0x02,0x12,0x02,0x21,0x03,0x21,0x01,0xA1,0x01,0xA1,0x18,0xA1,0x24,0x92,0x42,0xCC,0x42,0x40,0x42,0x40,0x42,0x60,0x42,0x20,0x24,0x20,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 // Code for char num 37  %    Percent
  };

unsigned short Tahoma15x21_Spaceaa[] = {

   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 32  42 long
 };

//GLCD FontName : Tahoma15x21
//GLCD FontSize : 15 x 21

const unsigned short Tahoma15x21[] = {

   0x00,0x00,0xC0,0x01,0xC0,0x01,0x60,0x03,0x60,0x03,0x60,0x03,0x30,0x06,0x30,0x06,0x30,0x06,0x18,0x0C,0x18,0x0C,0xF8,0x0F,0xFC,0x1F,0x0C,0x18,0x0C,0x18,0x0E,0x38,0x06,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 65 'A'   0 TO 42 long
   0x00,0x00,0xFC,0x03,0xFC,0x07,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0xFC,0x03,0xFC,0x03,0x0C,0x06,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x06,0xFC,0x07,0xFC,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 66  B    42 - 84
   0x00,0x00,0xC0,0x07,0xF0,0x1F,0x70,0x18,0x18,0x10,0x18,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x1C,0x00,0x18,0x10,0x78,0x18,0xF0,0x1F,0xC0,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 67  C    84 - 126
   0x00,0x00,0xFC,0x01,0xFC,0x03,0x0C,0x07,0x0C,0x0C,0x0C,0x0C,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x0C,0x0C,0x0C,0x0C,0x07,0xFC,0x03,0xFC,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 68  D    126 - 168
   0x00,0x00,0xFC,0x07,0xFC,0x07,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0xFC,0x03,0xFC,0x03,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0xFC,0x07,0xFC,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 69  E    168 - 210
   0x00,0x00,0xFC,0x07,0xFC,0x07,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0xFC,0x07,0xFC,0x07,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 70  F    210 - 252
   0x00,0x00,0xE0,0x07,0xF0,0x1F,0x38,0x1C,0x0C,0x10,0x0C,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x1F,0x06,0x1F,0x06,0x18,0x0C,0x18,0x0C,0x18,0x38,0x18,0xF8,0x1F,0xE0,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 71  G    252 - 294
   0x00,0x00,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0xFC,0x0F,0xFC,0x0F,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 72  H    294 - 336
   0x00,0x00,0xF0,0x03,0xF0,0x03,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xF0,0x03,0xF0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 73  I    336 - 378
   0x00,0x00,0xFC,0x1F,0xFC,0x1F,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0xC2,0x01,0xFE,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 74  J    378 - 420
   0x00,0x00,0x0C,0x0E,0x0C,0x07,0x8C,0x03,0x8C,0x01,0xCC,0x00,0xEC,0x00,0x7C,0x00,0x3C,0x00,0x7C,0x00,0xEC,0x00,0xCC,0x00,0x8C,0x01,0x8C,0x03,0x0C,0x03,0x0C,0x06,0x0C,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 75  K    420 - 462
   0x00,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0xFC,0x07,0xFC,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 76  L    462 - 504
   0x00,0x00,0x0E,0x1C,0x0E,0x1C,0x1E,0x1E,0x1E,0x1E,0x16,0x1A,0x36,0x1B,0x36,0x19,0x26,0x19,0xE6,0x19,0xC6,0x18,0xC6,0x18,0xC6,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 77  M    504 - 546
   0x00,0x00,0x1C,0x0C,0x1C,0x0C,0x3C,0x0C,0x2C,0x0C,0x6C,0x0C,0x6C,0x0C,0x4C,0x0C,0xCC,0x0C,0x8C,0x0C,0x8C,0x0D,0x8C,0x0D,0x0C,0x0F,0x0C,0x0F,0x0C,0x0E,0x0C,0x0E,0x0C,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 78  N    546 - 588
   0x00,0x00,0xE0,0x03,0xF8,0x0F,0x1C,0x1C,0x0C,0x18,0x0E,0x38,0x06,0x30,0x06,0x30,0x06,0x30,0x06,0x30,0x06,0x30,0x06,0x30,0x0E,0x38,0x0C,0x18,0x1C,0x1C,0xF8,0x0F,0xE0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 79  O    588 - 630
   0x00,0x00,0xFC,0x01,0xFC,0x07,0x0C,0x06,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x06,0xFC,0x03,0xFC,0x01,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 80  P    630 - 672
   0x00,0x00,0xE0,0x03,0xF8,0x0F,0x1C,0x1C,0x0C,0x18,0x0E,0x38,0x06,0x30,0x06,0x30,0x06,0x30,0x06,0x30,0x06,0x30,0x06,0x30,0x0E,0x38,0x0C,0x18,0x1C,0x1C,0xF8,0x0F,0xE0,0x03,0x00,0x03,0x00,0x07,0x00,0x1E,0x00,0x3C, // Code for char num 81  Q    672 - 714
   0x00,0x00,0xFC,0x01,0xFC,0x03,0x0C,0x07,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x03,0xFC,0x01,0xFC,0x00,0xCC,0x01,0x8C,0x03,0x0C,0x03,0x0C,0x06,0x0C,0x0E,0x0C,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 82  R    714 - 756
   0x00,0x00,0xF0,0x03,0xF8,0x07,0x1C,0x04,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x3C,0x00,0xF8,0x01,0xE0,0x07,0x00,0x0E,0x00,0x0C,0x00,0x0C,0x04,0x0C,0x0C,0x06,0xFC,0x07,0xF0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 83  S    756 - 798
   0x00,0x00,0xFE,0x1F,0xFE,0x1F,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 84  T    798 - 840
   0x00,0x00,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x0E,0x1C,0x1C,0x0E,0xF8,0x07,0xF0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 85  U    840 - 882
   0x00,0x00,0x04,0x10,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x30,0x06,0x30,0x06,0x30,0x06,0x60,0x03,0x60,0x03,0x60,0x03,0xC0,0x01,0xC0,0x01,0xC0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 86  V    882 - 924
   0x00,0x00,0x02,0x20,0x82,0x20,0x82,0x20,0x42,0x21,0x46,0x31,0x46,0x31,0x44,0x11,0x44,0x11,0x44,0x11,0x6C,0x1B,0x28,0x0A,0x28,0x0A,0x28,0x0A,0x28,0x0A,0x10,0x04,0x10,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 87  W    924 - 966
   0x00,0x00,0x06,0x18,0x0C,0x0C,0x18,0x06,0x18,0x06,0x30,0x03,0x30,0x03,0xE0,0x01,0xC0,0x00,0xC0,0x00,0xE0,0x01,0x30,0x03,0x30,0x03,0x18,0x06,0x18,0x06,0x0C,0x0C,0x06,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 88  X    966 - 1008
   0x00,0x00,0x04,0x08,0x04,0x08,0x0C,0x0C,0x08,0x04,0x18,0x06,0x10,0x02,0x30,0x03,0xE0,0x01,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 89  Y    1008 - 1050
   0x00,0x00,0xFC,0x0F,0xFC,0x0F,0x00,0x0C,0x00,0x06,0x00,0x03,0x00,0x03,0x80,0x01,0xC0,0x00,0xC0,0x00,0x60,0x00,0x30,0x00,0x30,0x00,0x18,0x00,0x0C,0x00,0xFC,0x0F,0xFC,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 90  Z    1050 - 1092
   // Code for char num 91
   0x06,0x00,0x06,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0x80,0x01,0x80,0x01,0x00,0x00, // Code for char num 92      1092  1134
    // Code for char num 93
   0x00,0x00,0xC0,0x01,0xC0,0x01,0x60,0x03,0x30,0x06,0x30,0x06,0x18,0x0C,0x0C,0x18,0x06,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 94     1134   1176
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x07,0x00,0x00, // Code for char num 95     1176   1218
   // Code for char num 96
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x01,0xF8,0x03,0x00,0x06,0x00,0x06,0xE0,0x07,0xF8,0x07,0x1C,0x06,0x0C,0x06,0x0C,0x07,0xFC,0x07,0xF0,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 97     1218  1260
   0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0xCC,0x03,0xFC,0x07,0x1C,0x06,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x06,0xFC,0x07,0xEC,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 98     1260  1303
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x03,0xF8,0x07,0x18,0x04,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x18,0x04,0xF8,0x07,0xE0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 99     1302  1344
   0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0xE0,0x0D,0xF8,0x0F,0x18,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x18,0x0E,0xF8,0x0F,0xF0,0x0D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 100    1344  1386
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x03,0xF8,0x07,0x18,0x0E,0x0C,0x0C,0xFC,0x0F,0xFC,0x0F,0x0C,0x00,0x0C,0x00,0x18,0x08,0xF8,0x0F,0xE0,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 101    1386  1428
   0xE0,0x01,0xF0,0x01,0x38,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0xFC,0x00,0xFC,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 102    1428  1470
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x0D,0xF0,0x0F,0x18,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x18,0x0E,0xF8,0x0F,0xF0,0x0D,0x00,0x0C,0x08,0x06,0xF8,0x07,0xF8,0x01, // Code for char num 103    1470  1512
   0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0xEC,0x01,0xFC,0x03,0x1C,0x07,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 104    1512  1554  H LOWER CASE
   // Code for char num 105
   // Code for char num 106
   0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x03,0x8C,0x01,0xCC,0x00,0x6C,0x00,0x3C,0x00,0x7C,0x00,0x6C,0x00,0xCC,0x00,0x8C,0x01,0x8C,0x03,0x0C,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 107    1554  1596
   // Code for char num 108
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x1F,0xFF,0x3F,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 109    1596  1638
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEC,0x01,0xFC,0x03,0x1C,0x07,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 110    1638  1680  N LOWER CASE
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x01,0xF8,0x07,0x18,0x06,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x18,0x06,0xF8,0x07,0xE0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 111 O LOWER CASE 1680 1722
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEC,0x03,0xFC,0x07,0x1C,0x06,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x06,0xFC,0x07,0xFC,0x01,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00, // Code for char num 112   1722  1764  P LOWER CASE
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x0D,0xF8,0x0F,0x18,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x18,0x0E,0xF8,0x0F,0xF0,0x0D,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C, // Code for char num 113   1764  1806  Q
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xCC,0x01,0xFC,0x03,0x1C,0x02,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 114
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x01,0xF8,0x03,0x0C,0x02,0x0C,0x00,0x1C,0x00,0xF8,0x01,0xE0,0x03,0x00,0x03,0x04,0x03,0xFC,0x01,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 115
   0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0xFC,0x00,0xFC,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x01,0xF8,0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 116
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x1C,0x07,0xF8,0x07,0xF0,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 117
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x06,0x18,0x03,0x18,0x03,0x18,0x03,0xB0,0x01,0xB0,0x01,0xB0,0x01,0xE0,0x00,0xE0,0x00,0xE0,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 118
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x83,0x60,0xC3,0x61,0xC6,0x31,0x46,0x33,0x66,0x33,0x66,0x33,0x2C,0x12,0x3C,0x1E,0x3C,0x1E,0x18,0x0C,0x18,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 119
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x06,0x18,0x03,0xB0,0x01,0xB0,0x01,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xB0,0x01,0xB0,0x01,0x18,0x03,0x0C,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 120
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x06,0x18,0x03,0x18,0x03,0x18,0x03,0xB0,0x01,0xB0,0x01,0xB0,0x01,0xE0,0x00,0xE0,0x00,0xE0,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x20,0x00,0x38,0x00, // Code for char num 121
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x01,0xFC,0x01,0xC0,0x00,0xC0,0x00,0x60,0x00,0x70,0x00,0x30,0x00,0x18,0x00,0x1C,0x00,0xFC,0x01,0xFC,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 122
   0xC0,0x01,0xE0,0x01,0x70,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x18,0x00,0x0E,0x00,0x0E,0x00,0x18,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x70,0x00,0xE0,0x01,0xC0,0x01, // Code for char num 123
   // Code for char num 124
   0x0E,0x00,0x1E,0x00,0x38,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x60,0x00,0xC0,0x01,0xC0,0x01,0x60,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x38,0x00,0x1E,0x00,0x0E,0x00, // Code for char num 125
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x30,0xFC,0x30,0xCE,0x39,0x86,0x1F,0x06,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 126
   0x7C,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x7C,0x00,0x00,0x00,0x00,0x00 // Code for char num 127
        };


//GLCD FontName : Segment1416x22
//GLCD FontSize : 16 x 22

const unsigned short Segment1416x22[] = {                                                                                                                                                                                                       //  44 long  2 bytes 16 pixels wide

   0xFE,0x3F,0xFD,0x5F,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x01,0x40,0x02,0x20,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0xFD,0x5F,0xFE,0x3F, // Code for char num 48 0   0 to 44
   0x80,0x00,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x00,0x01,0x80,0x00,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x00, // Code for char num 49 1   44 to 88
   0xFF,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0xFE,0x5F,0xFD,0x3F,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0xFD,0x3F,0xFE,0x7F, // Code for char num 50 2   88 to 132
   0xFF,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0xFE,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0xFE,0x5F,0xFF,0x3F, // Code for char num 51 3   132 to 176
   0x01,0x40,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0xFD,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x20, // Code for char num 52 4   176 to 220
   0xFE,0x7F,0xFD,0x3F,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0xFD,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0xFE,0x5F,0xFF,0x3F, // Code for char num 53 5   220 to 264
   0xFE,0x7F,0xFD,0x3F,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0xFD,0x3F,0xFE,0x5F,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0xFD,0x5F,0xFE,0x3F, // Code for char num 54 6   264 to 308
   0xFF,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x40,0x00,0x20,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x40, // Code for char num 55 7   308 to 352
   0xFE,0x3F,0xFD,0x5F,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0xFD,0x3F,0xFE,0x5F,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0xFD,0x5F,0xFE,0x3F, // Code for char num 56 8   352 to 396
   0xFE,0x3F,0xFD,0x5F,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0xFD,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0xFE,0x5F,0xFF,0x3F  // Code for char num 57 9   396 to 440
        };

// TFT display connections
unsigned char TFT_DataPort at PORTB;
sbit TFT_WR at LATA3_bit;
sbit TFT_RD at LATA4_bit;
sbit TFT_CS at LATA2_bit;
sbit TFT_RS at LATA0_bit;        //This Is The #DC Pin  Needs Ra0
sbit TFT_RST at LATA1_bit;


unsigned char TFT_DataPort_Direction at TRISB;
sbit TFT_WR_Direction at TRISA3_bit;
sbit TFT_RD_Direction at TRISA4_bit;
sbit TFT_CS_Direction at TRISA2_bit;
sbit TFT_RS_Direction at TRISA0_bit;    // D/C# BIT
sbit TFT_RST_Direction at TRISA1_bit;

void TFT_Write_Command_ST7735S(unsigned char cmd) {
  TFT_CS = 0;
  TFT_RS = 0;
  TFT_DataPort = cmd;
  TFT_WR = 0;
  TFT_WR = 1;
  TFT_CS = 1;
}

void TFT_Write_Data_ST7735S(unsigned int _data) {
  TFT_CS = 0;
  TFT_RS = 1;
  TFT_DataPort = _data;
  TFT_WR = 0;
  TFT_WR = 1;
  TFT_RS = 0;
  TFT_CS = 1;
}


void Initialize_Display(){
      //------------------------------------ST7735S Reset Sequence-----------------------------------------//
       TFT_RST = 1;
       Delay_ms(1);
       TFT_RST = 0;
       Delay_ms(1);
       TFT_RST = 1;
       Delay_ms(120);
   //--------------------------------------------------------------------------------------------------------

       TFT_Write_Command_ST7735S(0x11);              // SLEEP OUT
       Delay_ms(120);

   //------------------------------------ST7735S Frame rate-----------------------------------------//

        TFT_Write_Command_ST7735S(0xB1); //Frame rate 80Hz
        TFT_Write_Data_ST7735S(0x02);
        TFT_Write_Data_ST7735S(0x35);
        TFT_Write_Data_ST7735S(0x36);

        TFT_Write_Command_ST7735S(0xB2); //Frame rate 80Hz
        TFT_Write_Data_ST7735S(0x02);
        TFT_Write_Data_ST7735S(0x35);
        TFT_Write_Data_ST7735S(0x36);

        TFT_Write_Command_ST7735S(0xB3); //Frame rate 80Hz
        TFT_Write_Data_ST7735S(0x02);
        TFT_Write_Data_ST7735S(0x35);
        TFT_Write_Data_ST7735S(0x36);
        TFT_Write_Data_ST7735S(0x02);
        TFT_Write_Data_ST7735S(0x35);
        TFT_Write_Data_ST7735S(0x36);

      //-----------------------------------End ST7735S Frame Rate-----------------------------------------//

        TFT_Write_Command_ST7735S(0xB4); //Dot Inversion  ?????????????????
        TFT_Write_Data_ST7735S(0x03);
      //------------------------------------ST7735S Power Sequence-----------------------------------------//

        TFT_Write_Command_ST7735S(0xC0);
        TFT_Write_Data_ST7735S(0xA2);
        TFT_Write_Data_ST7735S(0x02);
        TFT_Write_Data_ST7735S(0x84);
        TFT_Write_Command_ST7735S(0xC1);
        TFT_Write_Data_ST7735S(0xC5);
        TFT_Write_Command_ST7735S(0xC2);
        TFT_Write_Data_ST7735S(0x0D);
        TFT_Write_Data_ST7735S(0x00);
        TFT_Write_Command_ST7735S(0xC3);
        TFT_Write_Data_ST7735S(0x8D);
        TFT_Write_Data_ST7735S(0xEA);
        TFT_Write_Command_ST7735S(0xC4);
        TFT_Write_Data_ST7735S(0x8D);
        TFT_Write_Data_ST7735S(0xEE);

     //---------------------------------End ST7735S Power Sequence-------------------------------------//

        TFT_Write_Command_ST7735S(0xC5);  //VCOM
        TFT_Write_Data_ST7735S(0x05);

        TFT_Write_Command_ST7735S(0x36);  //MX, MY, RGB mode
      //  TFT_Write_Data_ST7735S(0B00001100); //TOP = CABLE AT TO         //         TFT_Write_Data_ST7735S(0xC8);  //TOP = CABLE AT BOTTOM
         TFT_Write_Data_ST7735S(0xC8);  //TOP = CABLE AT BOTTOM

     //------------------------------------ST7735S Gamma Sequence-----------------------------------------//

        TFT_Write_Command_ST7735S(0xE0);
        TFT_Write_Data_ST7735S(0x03);
        TFT_Write_Data_ST7735S(0x1B);
        TFT_Write_Data_ST7735S(0x09);
        TFT_Write_Data_ST7735S(0x0E);
        TFT_Write_Data_ST7735S(0x32);
        TFT_Write_Data_ST7735S(0x2D);
        TFT_Write_Data_ST7735S(0x28);
        TFT_Write_Data_ST7735S(0x2C);
        TFT_Write_Data_ST7735S(0x2B);
        TFT_Write_Data_ST7735S(0x29);
        TFT_Write_Data_ST7735S(0x30);
        TFT_Write_Data_ST7735S(0x3B);
        TFT_Write_Data_ST7735S(0x00);
        TFT_Write_Data_ST7735S(0x01);
        TFT_Write_Data_ST7735S(0x02);
        TFT_Write_Data_ST7735S(0x10);
        TFT_Write_Command_ST7735S(0xE1);
        TFT_Write_Data_ST7735S(0x03);
        TFT_Write_Data_ST7735S(0x1B);
        TFT_Write_Data_ST7735S(0x09);
        TFT_Write_Data_ST7735S(0x0E);
        TFT_Write_Data_ST7735S(0x32);
        TFT_Write_Data_ST7735S(0x2E);
        TFT_Write_Data_ST7735S(0x28);
        TFT_Write_Data_ST7735S(0x2C);
        TFT_Write_Data_ST7735S(0x2B);
        TFT_Write_Data_ST7735S(0x28);
        TFT_Write_Data_ST7735S(0x31);
        TFT_Write_Data_ST7735S(0x3C);
        TFT_Write_Data_ST7735S(0x00);
        TFT_Write_Data_ST7735S(0x00);
        TFT_Write_Data_ST7735S(0x02);
        TFT_Write_Data_ST7735S(0x10);

     //------------------------------------ST7735S Gamma Sequence End-----------------------------------------//

        TFT_Write_Command_ST7735S(0x3A);  //65k mode  PAGE 52 FOR DETAILS
        TFT_Write_Data_ST7735S(0x05);     //16 Bit Colour  8-bit Data Bus for 16-bit/Pixel (RGB 5-6-5-bit Input), 65K-Colors, 3AH= “05h”

        TFT_Write_Command_ST7735S(0x38);   //Idle Mode Off
        TFT_Write_Command_ST7735S(0x29);   //Display on
      // TFT_Write_Command_ST7735S(0x28);   //Display OFF


     //------------------------------------ST7735S Setup the partial area------------------------------------//
        /*TFT_Write_Command_ST7735S(0x30);  //Setup the partial area
        TFT_Write_Data_ST7735S(0x00);
        TFT_Write_Data_ST7735S(25); //PSL:Start Line
        TFT_Write_Data_ST7735S(0x00);
        TFT_Write_Data_ST7735S(105); //PEL:End Line

       // TFT_Write_Command_ST7735S(0x12); //Turn on partial mode
        TFT_Write_Command_ST7735S(0x13); //Turn off partial mode*/
     //-------------------------------------------------------------------------------------------------------//

       // TFT_Write_Command_ST7735S(0x2C);//Write memory access

    //   TFT_Write_Command_ST7735S(0x21); //:Display Inversion On

     //  TFT_Write_Command_ST7735S(0x20); //: Display Inversion Off

      //    (36h): Memory Data Access Control SCAN DIRECTION ETC IS PAGE 142

    // 10.1 System Function Command List and Description  PAGE 106
}


const unsigned char Black = 0;
const unsigned char Red = 2;
const unsigned char Orange = 3;
const unsigned char Yellow = 4;
const unsigned char Green = 5;
const unsigned char Blue = 6;
const unsigned char Violet = 7;
const unsigned char Gray = 8;
const unsigned char White = 9;
const unsigned char Magenta = 10;
const unsigned char Lime = 11;
const unsigned char Baby_Powder = 12;
const unsigned char Cyan = 13;
const unsigned char Lavenderblush = 14;
const unsigned char Beige = 15;

#define Black_Out         TFT_Write_Data_ST7735S(0b00000000);  TFT_Write_Data_ST7735S(0b00000000);
#define Red_Out           TFT_Write_Data_ST7735S(0b11110000);  TFT_Write_Data_ST7735S(0b00000000);
#define Orange_Out        TFT_Write_Data_ST7735S(0b11110011);  TFT_Write_Data_ST7735S(0b10000000);
#define Yellow_Out        TFT_Write_Data_ST7735S(0b11111111);  TFT_Write_Data_ST7735S(0b11100000);
#define Green_Out         TFT_Write_Data_ST7735S(0b00000011);  TFT_Write_Data_ST7735S(0b00000000);
#define Blue_Out          TFT_Write_Data_ST7735S(0b00000000);  TFT_Write_Data_ST7735S(0b00010111);
#define Violet_Out        TFT_Write_Data_ST7735S(0b11110000);  TFT_Write_Data_ST7735S(0b00011111);
#define Gray_Out          TFT_Write_Data_ST7735S(0b00111001);  TFT_Write_Data_ST7735S(0b11100011);
#define White_Out         TFT_Write_Data_ST7735S(0b11111111);  TFT_Write_Data_ST7735S(0b11111111);
#define Magenta_Out       TFT_Write_Data_ST7735S(0b11111001);  TFT_Write_Data_ST7735S(0b00001101);
#define Lime_Out          TFT_Write_Data_ST7735S(0b01100111);  TFT_Write_Data_ST7735S(0b11100000);
#define Baby_Powder_Out   TFT_Write_Data_ST7735S(0b11101110);  TFT_Write_Data_ST7735S(0b10001111);
#define Cyan_Out          TFT_Write_Data_ST7735S(0b00000111);  TFT_Write_Data_ST7735S(0b11111111);
#define Lavenderblush_Out TFT_Write_Data_ST7735S(0b11111011);  TFT_Write_Data_ST7735S(0b11000111);
#define Beige_Out         TFT_Write_Data_ST7735S(0b10111100);  TFT_Write_Data_ST7735S(0b00000000);

unsigned char X_Position;
unsigned char Y_Position;

void Set_Display_Tahoma16x18(unsigned char X_Position, unsigned char Y_Position){  //FOR MIDAS CHARACTERS OF WHICH THERE ARE ONLY 5

     unsigned char font_width = 16;
     unsigned char font_height = 18;

     unsigned char set_start_column = 0x00 | X_Position;
     unsigned char Set_start_row = 0x00 | Y_position;

     unsigned char Set_end_column = Set_start_column + font_width-1;
     unsigned char Set_end_row = Set_start_row + font_height;

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(Set_start_column); // Start Column Address   20 to 24 is 5 bytes
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(Set_end_column);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(Set_start_row); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(159);   // End Row Address

     TFT_Write_Command_ST7735S(0x2C);  // 3 hours for this little shit
}

void Set_Display_Tahoma15x21(unsigned char X_Position, unsigned char Y_Position){  //FOR MIDAS CHARACTERS OF WHICH THERE ARE ONLY 5

     unsigned char font_width = 15;
     unsigned char font_height = 21;

     unsigned char set_start_column = 0x00 | X_Position;
     unsigned char Set_start_row = 0x00 | Y_position;

     unsigned char Set_end_column = Set_start_column + font_width;
     unsigned char Set_end_row = Set_start_row + font_height;

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(Set_start_column); // Start Column Address   20 to 24 is 5 bytes
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(Set_end_column);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(Set_start_row); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(159);   // End Row Address

     TFT_Write_Command_ST7735S(0x2C);  // 3 hours for this little shit
}


void Set_Display_Segment1416x22(unsigned char X_Position, unsigned char Y_Position){  //FOR MIDAS CHARACTERS OF WHICH THERE ARE ONLY 5

     unsigned char font_width = 15;
     unsigned char font_height = 22;

     unsigned char set_start_column = 0x00 | X_Position;
     unsigned char Set_start_row = 0x00 | Y_position;

     unsigned char Set_end_column = Set_start_column + font_width;
     unsigned char Set_end_row = Set_start_row + font_height;

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(Set_start_column); // Start Column Address   bytes
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(Set_end_column);   // End Column Address   bytes or pixels of data

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(Set_start_row); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(159);   // End Row Address

     TFT_Write_Command_ST7735S(0x2C);  // 3 hours for this little shit
}


unsigned int Background_Colour;

TFT_Clear_Screen_ST7735S(unsigned int colour){

       static unsigned int i;
       Background_Colour = 0x00 | colour;
       TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128
       TFT_Write_Data_ST7735S(0x00);
       TFT_Write_Data_ST7735S(0);
       TFT_Write_Data_ST7735S(0x00);
       TFT_Write_Data_ST7735S(127);

       TFT_Write_Command_ST7735S(0x2B); //Set Row Address //159
       TFT_Write_Data_ST7735S(0);
       TFT_Write_Data_ST7735S(0);
       TFT_Write_Data_ST7735S(0);
       TFT_Write_Data_ST7735S(159);
       TFT_Write_Command_ST7735S(0x2C); //Write Memory Start

    switch (colour)  {

     case 0:     for(i=0;i<20480;i++){
                 Black_Out;
                 } break;
     case 2:     for(i=0;i<20480;i++){
                 Red_Out;
                 } break;
     case 3:     for(i=0;i<20480;i++){
                 Orange_Out;
                 } break;
     case 4:     for(i=0;i<20480;i++){
                 Yellow_Out;
                 } break;
     case 5:     for(i=0;i<20480;i++){
                 Green_Out;
                 } break;
     case 6:     for(i=0;i<20480;i++){
                 Blue_Out;
                 } break;
     case 7:     for(i=0;i<20480;i++){
                 Violet_Out;
                 } break;
     case 8:     for(i=0;i<20480;i++){
                 Gray_Out;
                 } break;
     case 9:     for(i=0;i<20480;i++){
                 White_Out;
                 } break;
     case 10:    for(i=0;i<20480;i++){
                 Magenta_Out;
                 } break;
     case 11:    for(i=0;i<20480;i++){
                 Lime_Out;
                 } break;
     case 12:    for(i=0;i<20480;i++){
                 Baby_Powder_Out;
                 } break;
     case 13:    for(i=0;i<20480;i++){
                 Cyan_Out;
                 } break;
     case 14:    for(i=0;i<20480;i++){
                 Lavenderblush_Out;
                 } break;
     case 15:    for(i=0;i<20480;i++){
                 Beige_Out;
                 } break;
     default:    for(i=0;i<20480;i++){
                 TFT_Write_Data_ST7735S(colour);
                 TFT_Write_Data_ST7735S(colour);
                 } break;
    }

    return Background_Colour;
}

void Draw_Box_Rand_Dot(){

     static unsigned int i;
     static unsigned int colour;
     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128    TOP HORITONTAL LINE
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(0); // Start Column Address
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(127);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128     TOP HORITONTAL LINE
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(32); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(32);   // End Row Address
     TFT_Write_Command_ST7735S(0x2C);  // 3 hours for this little shit

       for(i=0;i<256;i++){ //128x128  16384 per 2 bytes for 16 bit colour
        colour = Rand();
        TFT_Write_Data_ST7735S(colour);
        }

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128    BOTTOM HORITONTAL LINE
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(0); // Start Column Address
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(127);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128     BOTTOM HORITONTAL LINE
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(159); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(159);   // End Row Address
     TFT_Write_Command_ST7735S(0x2C);  // 3 hours for this little shit

        for(i=0;i<256;i++){ //128x128  16384 per 2 bytes for 16 bit colour
        colour = Rand();
        TFT_Write_Data_ST7735S(colour);
        }

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128   LEFT VERTICAL LINE
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(0); // Start Column Address
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(0);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128     LEFT VERTICAL LINE
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(33); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(158);   // End Row Address
     TFT_Write_Command_ST7735S(0x2C);  // 3 hours for this little shit

        for(i=0;i<254;i++){ //128x128  x 2 for 2 bytes per pixel
        colour = Rand();
        TFT_Write_Data_ST7735S(colour);
        }

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128   RIGHT VERTICAL LINE
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(127); // Start Column Address
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(127);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128     RIGHT VERTICAL LINE
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(33); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(158);   // End Row Address
     TFT_Write_Command_ST7735S(0x2C);  // 3 hours for this little shit

        for(i=0;i<254;i++){ //128x128  x 2 for 2 bytes per pixel
         colour = Rand();
         TFT_Write_Data_ST7735S(colour);
        }
}



void Draw_Box_Rand_Line(){

     static unsigned int i;
     static unsigned int colour;

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128   TOP HORITONTAL LINE
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(0); // Start Column Address
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(127);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128    TOP HORITONTAL LINE
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(32); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(32);   // End Row Address
     TFT_Write_Command_ST7735S(0x2C);  // 3 hours for this little shit

      colour = Rand();

      for(i=0;i<256;i++){ //128x128  16384 per 2 bytes for 16 bit colour
        TFT_Write_Data_ST7735S(colour);
       }

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128     BOTTOM HORITONTAL LINE
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(0); // Start Column Address
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(127);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(159); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(159);   // End Row Address
     TFT_Write_Command_ST7735S(0x2C);  // 3 hours for this little shit

     colour = Rand();

     for(i=0;i<256;i++){ //128x128  16384 per 2 bytes for 16 bit colour
      TFT_Write_Data_ST7735S(colour);
     }

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128       LEFT VERTICAL LINE
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(0); // Start Column Address
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(0);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128   LEFT VERTICAL LINE
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(33); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(158);   // End Row Address
     TFT_Write_Command_ST7735S(0x2C);  // 3 hours for this little shit

     colour = Rand();

     for(i=0;i<254;i++){ //128x128  x 2 for 2 bytes per Pixel
     TFT_Write_Data_ST7735S(colour);
     }

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128    RIGHT VERTICAL LINE
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(127); // Start Column Address
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(127);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128    RIGHT VERTICAL LINE
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(33); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(158);   // End Row Address
     TFT_Write_Command_ST7735S(0x2C);  // 3 hours for this little shit

     colour = Rand();

     for(i=0;i<254;i++){ //128x128  x 2 for 2 bytes per pixel
     TFT_Write_Data_ST7735S(colour);
     }
}

unsigned char Pixela;
unsigned char Pixelb;
unsigned char Pixelc;
unsigned char Pixeld;

void Pixel(){
 TFT_Write_Data_ST7735S(Pixela);
 TFT_Write_Data_ST7735S(Pixelb);
}

void Space(){
 TFT_Write_Data_ST7735S(Pixelc);
 TFT_Write_Data_ST7735S(Pixeld);
}

Get_Pixel_Colour(unsigned int Set_Colour){

    unsigned int colour = 0x00 | Set_Colour;

      switch (colour)  {

     case 0:     Pixela = 0b00000000;  Pixelb = 0b00000000;
                 break;
     case 2:     Pixela = 0b11110000;  Pixelb = 0b00000000;
                 break;
     case 3:     Pixela = 0b11110011;  Pixelb = 0b10000000;
                 break;
     case 4:     pixela = 0b11111111;  Pixelb = 0b11100000;
                 break;
     case 5:     pixela = 0b00000011;  pixelb = 0b00000000;
                 break;
     case 6:     pixela = 0b00000000;  pixelb = 0b00010111;
                 break;
     case 7:     pixela = 0b11110000;  pixelb = 0b00011111;
                 break;
     case 8:     pixela = 0b00111001;  pixelb = 0b11100011;
                 break;
     case 9:     pixela = 0b11111111;  pixelb = 0b11111111;
                 break;
     case 10:    pixela = 0b11111001;  pixelb = 0b00001101;
                 break;
     case 11:    pixela = 0b01100111;  pixelb = 0b11100000;
                 break;
     case 12:    pixela = 0b11101110;  pixelb = 0b10001111;
                 break;
     case 13:    pixela = 0b00000111;  pixelb = 0b11111111;
                 break;
     case 14:    pixela = 0b11111011;  pixelb = 0b11000111;
                 break;
     case 15:    pixela = 0b10111100;  pixelb = 0b00000000;
                 break;
     default:    pixela = 0b11111111;  pixelb = 0b11111111;
                 break;
    }

      switch (Background_colour)  {

     case 0:     Pixelc = 0b00000000;  Pixeld = 0b00000000;
                 break;
     case 2:     Pixelc = 0b11110000;  Pixeld = 0b00000000;
                 break;
     case 3:     Pixelc = 0b11110011;  Pixeld = 0b10000000;
                 break;
     case 4:     pixelc = 0b11111111;  Pixeld = 0b11100000;
                 break;
     case 5:     pixelc = 0b00000011;  pixeld = 0b00000000;
                 break;
     case 6:     pixelc = 0b00000000;  pixeld = 0b00010111;
                 break;
     case 7:     pixelc = 0b11110000;  pixeld = 0b00011111;
                 break;
     case 8:     pixelc = 0b00111001;  pixeld = 0b11100011;
                 break;
     case 9:     pixelc = 0b11111111;  pixeld = 0b11111111;
                 break;
     case 10:    pixelc = 0b11111001;  pixeld = 0b00001101;
                 break;
     case 11:    pixelc = 0b01100111;  pixeld = 0b11100000;
                 break;
     case 12:    pixelc = 0b11101110;  pixeld = 0b10001111;
                 break;
     case 13:    pixelc = 0b00000111;  pixeld = 0b11111111;
                 break;
     case 14:    pixelc = 0b11111011;  pixeld = 0b11000111;
                 break;
     case 15:    pixelc = 0b10111100;  pixeld = 0b00000000;
                 break;
     default:    pixelc = Background_Colour&0xff00>>8;  pixeld = Background_Colour&0xff;
                 break;
    }

    return colour;
    return Background_Colour;

}


void Write_Segment_Space(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned int y;
     static unsigned int i=1;
     static unsigned int Pixel_Colour = 0x00 | Colour;
     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Segment1416x22(X_Position,Y_Position);

     for (y=0; y<22; y++){
     for(i=0;i<16;i++){                    //16 X 22 SPACE
     TFT_Write_Data_ST7735S(Pixelc);
     TFT_Write_Data_ST7735S(Pixeld);  }}
}


void Write_Segment_Nine(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Segment1416x22(X_Position,Y_Position);

     for (jj=396; jj<440; jj++){

         for (x=0; x<8; x++){

         dataout = Segment1416x22[jj] &i;

         if (dataout >=1){                 //Number 9 Segment1416x22 396 to 440
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}



void Write_Segment_Eight(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Segment1416x22(X_Position,Y_Position);

     for (jj=352; jj<396; jj++){

         for (x=0; x<8; x++){

         dataout = Segment1416x22[jj] &i;

         if (dataout >=1){                 //Number 8 Segment1416x22 352 to  396
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Segment_Seven(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Segment1416x22(X_Position,Y_Position);

     for (jj=308; jj<352; jj++){

         for (x=0; x<8; x++){

         dataout = Segment1416x22[jj] &i;

         if (dataout >=1){                 //Number 7 Segment1416x22 308 to 352
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Segment_Six(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Segment1416x22(X_Position,Y_Position);

     for (jj=264; jj<308; jj++){

         for (x=0; x<8; x++){

         dataout = Segment1416x22[jj] &i;

         if (dataout >=1){                 //Number 6 Segment1416x22 264 to 308
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Segment_Five(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Segment1416x22(X_Position,Y_Position);

     for (jj=220; jj<264; jj++){

         for (x=0; x<8; x++){

         dataout = Segment1416x22[jj] &i;

         if (dataout >=1){                 //Number 5 Segment1416x22 220 to 264
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}



void Write_Segment_Four(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Segment1416x22(X_Position,Y_Position);

     for (jj=176; jj<220; jj++){

         for (x=0; x<8; x++){

         dataout = Segment1416x22[jj] &i;

         if (dataout >=1){                 //Number 4 Segment1416x22 176 to 220
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}

void Write_Segment_Three(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Segment1416x22(X_Position,Y_Position);

     for (jj=132; jj<176; jj++){

         for (x=0; x<8; x++){

         dataout = Segment1416x22[jj] &i;

         if (dataout >=1){                 //Number 3 Segment1416x22 3   132 to 176
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}

void Write_Segment_Two(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Segment1416x22(X_Position,Y_Position);

     for (jj=88; jj<132; jj++){

         for (x=0; x<8; x++){

         dataout = Segment1416x22[jj] &i;

         if (dataout >=1){                 //Number 2 Segment1416x22 88 to 132
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}



void Write_Segment_One(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Segment1416x22(X_Position,Y_Position);

     for (jj=44; jj<88; jj++){

         for (x=0; x<8; x++){

         dataout = Segment1416x22[jj] &i;

         if (dataout >=1){                 //Number 1 Segment1416x22 44 to 88
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Segment_Zero(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Segment1416x22(X_Position,Y_Position);

     for (jj=0; jj<44; jj++){

         for (x=0; x<8; x++){

         dataout = Segment1416x22[jj] &i;

         if (dataout >=1){                 //Number zero Segment1416x22 0 to 44
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_A(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=0; jj<42; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter A Tahoma15x21
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_B(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=42; jj<84; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter B Tahoma15x21
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}

void Write_Tahoma_D(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=126; jj<168; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter D Tahoma15x21   126 - 168
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_F(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=210; jj<252; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter F  Tahoma15x21
         Pixel();
         } else  { Space(); }
          i=i<<1;
          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_H_lc(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=1512; jj<1554; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter H LOWER CASE Tahoma15x21   1512  1554  H LOWER CASE
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_I(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=336; jj<378; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter I Tahoma15x21  336 - 378
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_J(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=378; jj<420; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter J  Tahoma15x21 J  378 - 420
         Pixel();
         } else  { Space(); }
          i=i<<1;
          if (i>=256){
               i=1;}
         }
     }
}

void Write_Tahoma_M(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=504; jj<546; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter M  Tahoma15x21 504 - 546
         Pixel();
         } else { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_N_lc(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=1638; jj<1680; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter N LOWER CASE Tahoma15x21  1638  1680  N
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_S(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=756; jj<798; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter S  Tahoma15x21   756 - 798
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_O(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=588; jj<630; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter O Capital Tahoma15x21
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_O_lc(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=1680; jj<1722; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter O lower case Tahoma15x21 O LOWER CASE 1680 1722
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}



void Write_Tahoma_N(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=546; jj<588; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter N  Tahoma15x21
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_T(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=798; jj<840; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter T  Tahoma15x21  T  798 - 840
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_U(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=840; jj<882; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter U  Tahoma15x21 U  840 - 882
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}

void Write_Tahoma_Y(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=1008; jj<1050; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter Y  Tahoma15x21  1008 - 1050
         Pixel();
         } else { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_Percent(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=0; jj<42; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21_Percent[jj] &i;

         if (dataout >=1){                 // Symbol % Percent Tahoma15x21
         Pixel();
         } else { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}

void Clear_Tahoma_Text(unsigned int Colour){

       static unsigned int i;
       Background_Colour = 0x00 | colour;
       TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128
       TFT_Write_Data_ST7735S(0x00);
       TFT_Write_Data_ST7735S(1);
       TFT_Write_Data_ST7735S(0x00);
       TFT_Write_Data_ST7735S(126);

       TFT_Write_Command_ST7735S(0x2B); //Set Row Address //159
       TFT_Write_Data_ST7735S(0);
       TFT_Write_Data_ST7735S(72);
       TFT_Write_Data_ST7735S(0);
       TFT_Write_Data_ST7735S(96);
       TFT_Write_Command_ST7735S(0x2C); //Write Memory Start

    switch (colour)  {

     case 0:     for(i=0;i<2688;i++){
                 Black_Out;
                 } break;
     case 2:     for(i=0;i<2688;i++){
                 Red_Out;
                 } break;
     case 3:     for(i=0;i<2688;i++){
                 Orange_Out;
                 } break;
     case 4:     for(i=0;i<2688;i++){
                 Yellow_Out;
                 } break;
     case 5:     for(i=0;i<2688;i++){
                 Green_Out;
                 } break;
     case 6:     for(i=0;i<2688;i++){
                 Blue_Out;
                 } break;
     case 7:     for(i=0;i<2688;i++){
                 Violet_Out;
                 } break;
     case 8:     for(i=0;i<2688;i++){
                 Gray_Out;
                 } break;
     case 9:     for(i=0;i<2688;i++){
                 White_Out;
                 } break;
     case 10:    for(i=0;i<2688;i++){
                 Magenta_Out;
                 } break;
     case 11:    for(i=0;i<2688;i++){
                 Lime_Out;
                 } break;
     case 12:    for(i=0;i<2688;i++){
                 Baby_Powder_Out;
                 } break;
     case 13:    for(i=0;i<2688;i++){
                 Cyan_Out;
                 } break;
     case 14:    for(i=0;i<2688;i++){
                 Lavenderblush_Out;
                 } break;
     case 15:    for(i=0;i<2688;i++){
                 Beige_Out;
                 } break;
     default:    for(i=0;i<2688;i++){
                 TFT_Write_Data_ST7735S(colour);
                 TFT_Write_Data_ST7735S(colour);
                 } break;
    }
}


void Write_Auto_Off_Red(){
 static unsigned char ypos = 72;
     Write_Tahoma_A(2,ypos,Red);
     Write_Tahoma_U(18,ypos,Red);
     Write_Tahoma_T(34,ypos,Red);
     Write_Tahoma_O(50,ypos,Red);

     Write_Tahoma_O(78,ypos,Red);
     Write_Tahoma_F(94,ypos,Red);
     Write_Tahoma_F(110,ypos,Red);

 }

void Write_Auto_Off_White(){
 static unsigned char ypos = 72;
     Write_Tahoma_A(2,ypos,White);
     Write_Tahoma_U(18,ypos,White);
     Write_Tahoma_T(34,ypos,White);
     Write_Tahoma_O(50,ypos,White);

     Write_Tahoma_O(78,ypos,White);
     Write_Tahoma_F(94,ypos,White);
     Write_Tahoma_F(110,ypos,White);

}

void Write_On(unsigned char X_Position, unsigned char Y_Position, unsigned char Colour){

      unsigned char set_start_column = 0x00 | X_Position;
      unsigned char Set_start_row = 0x00 | Y_position;

      Write_Tahoma_O(set_start_column,Set_start_row,Colour);
      Write_Tahoma_N(set_start_column+16,Set_start_row,Colour);
      Write_Segment_Space(set_start_column+32,Set_start_row,Colour);
}


void Write_Off(unsigned char X_Position, unsigned char Y_Position, unsigned char Colour){

      unsigned char set_start_column = 0x00 | X_Position;
      unsigned char Set_start_row = 0x00 | Y_position;

      Write_Tahoma_O(set_start_column,Set_start_row,Colour);
      Write_Tahoma_F(set_start_column+16,Set_start_row,Colour);
      Write_Tahoma_F(set_start_column+32,Set_start_row,Colour);


}

void Write_Number_Segment(unsigned long num,unsigned int X_Position,unsigned int Y_Position, unsigned char Font_Colour) {

   unsigned char Font_Width = 17; //including 1 for space
   unsigned char  valid9=1, valid8=1, valid7=1, valid6=0, valid5=0, valid4=0;
   unsigned int units_start;
   unsigned int tens_start;
   unsigned int hundreds_start;
   unsigned int thousands_start;
   unsigned int ten_thousands_start;
   unsigned int hundred_thousands_start;
   unsigned int million_start;
   unsigned int ten_million_start;
   unsigned int hundred_million_start;
   unsigned char done1 = 0;
   unsigned char done2 = 0;
   unsigned char done3 = 0;
   unsigned char done4 = 0;
   unsigned char done5 = 0;
   unsigned char done6 = 0;
   unsigned char done7 = 0;
   unsigned char done8 = 0;
   unsigned char Colour;
   static unsigned char numberstring[14];
   Colour = 0x00 | Font_Colour;

    if (num <=9){
        units_start = X_Position;   }

    if (num >=10 && num<=99){
       units_start = X_Position +Font_Width*1;
       tens_start= X_Position;
      }

    if (num >=100 && num<=999){
       units_start = X_Position + Font_Width *2;
       tens_start = X_Position + Font_Width*1;
       hundreds_start = X_Position;
      }

      if (num >=1000 && num<=9999){
       units_start = X_Position +Font_Width *3;
       tens_start = X_Position + Font_Width *2;
       hundreds_start = X_Position + Font_Width*1;
       thousands_start = X_Position;
       }

       if (num >=10000 && num<=99999){
       units_start = X_Position + Font_Width *4;
       tens_start = X_Position +Font_Width *3;
       hundreds_start = X_Position + Font_Width *2;
       thousands_start = X_Position + Font_Width*1;
       ten_thousands_start = X_Position;
       }

       if (num >=100000 && num<=999999){
       units_start = X_Position + Font_Width *5;
       tens_start = X_Position + Font_Width *4;
       hundreds_start = X_Position + Font_Width *3;
       thousands_start = X_Position+ Font_Width *2;
       ten_thousands_start = X_Position + Font_Width*1;
       hundred_thousands_start = X_Position;
       }

      /*if (num >=100000 && num<=999999){
       units_start = X_Position +90;
       tens_start = X_Position + Font_Width *4;
       hundreds_start = X_Position + Font_Width *3;
       thousands_start = X_Position+ Font_Width *2;
       ten_thousands_start = X_Position + Font_Width;
       hundred_thousands_start = X_Position;
       }*/

      /*if (num >=1000000){       // 1 million
       units_start = X_Position+ Font_Width *6;
       tens_start = X_Position + Font_Width *5;
       hundreds_start = X_Position +Font_Width *4;
       thousands_start = X_Position+ Font_Width *3;
       ten_thousands_start = X_Position+ Font_Width *2;
       hundred_thousands_start = X_Position+ Font_Width;
       million_start = X_Position;
       }*/

      /*if (num >=10000000){       //ten million
       units_start = X_Position+ Font_Width *7;
       tens_start = X_Position + Font_Width *6;
       hundreds_start = X_Position + Font_Width *5;
       thousands_start = X_Position+ Font_Width *4;
       ten_thousands_start = X_Position+ Font_Width *3;
       hundred_thousands_start = X_Position+ Font_Width *2;
       million_start = X_Position+ Font_Width;
       ten_million_start = X_position;
       }*/


       LongWordTostr(num,numberstring);     // Converts input unsigned long integer number to a string

       if (num<10 && done1 !=1){               //Clears The Tens Position Once
       Write_Segment_Space(X_Position + Font_Width,Y_Position, Colour);
       Done1 = 1;
       }

      if (num<100 && done2 !=1){             //Clears The Hundreds Position Once
        Write_Segment_Space(X_Position + Font_Width *2,Y_Position, Colour);
       Done2 = 1;
       }

       if (num<1000 && done3 !=1 && valid6){             //Clears The Thousands Position Once
    //    Write_Segment_Space(X_Position + Font_Width *3,Y_Position, Colour);
        Done3 = 1;
       }

         if (num<10000 && done4 !=1 && valid5){           //Clears The ten Thousands Position Once
     //    Write_Segment_Space(X_Position + Font_Width *4,Y_Position, Colour);
          done4 ==1;
         }

       if (num<100000 && Done5 !=1 && valid4){        //Clears The hundred Thousands Position Once
       //  Write_Segment_Space(X_Position + Font_Width *5,Y_Position, Colour);
         Done5 = 1;
        }

          if (num<1000000 && Done6 !=1){     //Clears The million Position Once
     //    Write_Segment_Space(X_Position + Font_Width *5,Y_Position, Colour);
        Done6 = 1;
       }


    if (valid9){
    switch (numberstring[9])  {  //units position

     case 48:    X_Position = units_start;
                 Write_Segment_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = units_start;
                 Write_Segment_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = units_start;
                 Write_Segment_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = units_start;
                 Write_Segment_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = units_start;
                 Write_Segment_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = units_start;
                 Write_Segment_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = units_start;
                 Write_Segment_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = units_start;
                 Write_Segment_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = units_start;
                 Write_Segment_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = units_start;
                 Write_Segment_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }}

     if (valid8){
     switch (numberstring[8])  { //tens position

     case 48:    X_Position = tens_start;
                 Write_Segment_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = tens_start;
                 Write_Segment_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = tens_start;
                 Write_Segment_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = tens_start;
                 Write_Segment_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = tens_start;
                 Write_Segment_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = tens_start;
                 Write_Segment_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = tens_start;
                 Write_Segment_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = tens_start;
                 Write_Segment_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = tens_start;
                 Write_Segment_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = tens_start;
                 Write_Segment_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }}


    if (valid7){
     switch (numberstring[7])  {   //hundreds position

     case 48:    X_Position = hundreds_start;
                 Write_Segment_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = hundreds_start;
                 Write_Segment_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = hundreds_start;
                 Write_Segment_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = hundreds_start;
                 Write_Segment_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = hundreds_start;
                 Write_Segment_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = hundreds_start;
                 Write_Segment_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = hundreds_start;
                 Write_Segment_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = hundreds_start;
                 Write_Segment_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = hundreds_start;
                 Write_Segment_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = hundreds_start;
                 Write_Segment_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    } }

    if (valid6){
     switch (numberstring[6])  {   //thousands position

     case 48:    X_Position = thousands_start;
                 Write_Segment_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = thousands_start;
                 Write_Segment_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = thousands_start;
                 Write_Segment_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = thousands_start;
                 Write_Segment_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = thousands_start;
                 Write_Segment_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = thousands_start;
                 Write_Segment_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = thousands_start;
                 Write_Segment_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = thousands_start;
                 Write_Segment_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = thousands_start;
                 Write_Segment_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = thousands_start;
                 Write_Segment_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }}


    if (valid5){
     switch (numberstring[5])  {   //ten thousands position

     case 48:    X_Position = ten_thousands_start;
                 Write_Segment_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = ten_thousands_start;
                 Write_Segment_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = ten_thousands_start;
                 Write_Segment_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = ten_thousands_start;
                 Write_Segment_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = ten_thousands_start;
                 Write_Segment_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = ten_thousands_start;
                 Write_Segment_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = ten_thousands_start;
                 Write_Segment_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = ten_thousands_start;
                 Write_Segment_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = ten_thousands_start;
                 Write_Segment_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = ten_thousands_start;
                 Write_Segment_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }}


    if (valid4){
     switch (numberstring[4])  {   //hundred thousands position

     case 48:    X_Position = hundred_thousands_start;
                 Write_Segment_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = hundred_thousands_start;
                 Write_Segment_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = hundred_thousands_start;
                 Write_Segment_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = hundred_thousands_start;
                 Write_Segment_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = hundred_thousands_start;
                 Write_Segment_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = hundred_thousands_start;
                 Write_Segment_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = hundred_thousands_start;
                 Write_Segment_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = hundred_thousands_start;
                 Write_Segment_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = hundred_thousands_start;
                 Write_Segment_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = hundred_thousands_start;
                 Write_Segment_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }}

}

unsigned char Flag = 0;
unsigned char xx=0;
unsigned int ww=0;
unsigned int Count=0;
unsigned int y=0;
void InitTimer0(){
  T0CON         = 0x83;
  TMR0H         = 0x3C;
  TMR0L         = 0xB0;
  GIE_bit         = 1;
  TMR0IE_bit         = 1;
}

void Interrupt(){
  if (TMR0IF_bit){
    TMR0IF_bit = 0;
    TMR0H         = 0x3C;
    TMR0L         = 0xB0;
    RC1_BIT = 1;
    Delay_us(450);
    for (y=0; y<Count; y++){

    }
    RC1_Bit = 0;
    ww++;
    xx++;

    if (xx>=7){
     Flag =~Flag;
     xx=0;
    }

  }
}


void main() {

           unsigned char on1 = 0;
           unsigned char on2 = 0;
           unsigned char on3 = 0;
           unsigned char once = 0;
           unsigned int j=0;
           unsigned int k=0;
           unsigned int x = 0;
           unsigned int Voltage_Read1 = 0;
           unsigned int Voltage_Read2 = 0;
           unsigned int Total = 0;
           unsigned int Total2 = 0;
           unsigned int Average_Voltage1 = 0;
           unsigned int Average_Voltage2 = 0;

           OSCCON =  0b01110000;
           OSCTUNE.PLLEN = 1;        //page 35

           TRISA = 0b00100000;   //RA5 = AN4
           TRISB = 0;
           TRISC = 0b00000100;   //RC2 = AN14
           TRISE = 0;
           PORTA = 0;
           PORTB = 0;
           PORTC = 0;      // SERVO RC1
           PORTE = 0;
           ANSELA.ANSA5 = 1;
           ANSELB = 0;
           ANSELC.ANSC2 = 1;
           TFT_WR = 1;
           TFT_RD = 1;

           Initialize_Display();
           InitTimer0();
           TFT_Clear_Screen_ST7735S(0);  //12 or 14
           Draw_Box_Rand_Line();

          /*Write_Tahoma_M(4,80,Yellow);
            Write_Tahoma_I(20,80,Red);
            Write_Tahoma_D(36,80,Lime);
            Write_Tahoma_A(52,80,Cyan);
            Write_Tahoma_S(68,80,Blue);*/

           Write_Tahoma_J(20,40,Lime);
           Write_Tahoma_O_lc(32,40,Baby_Powder);
           Write_Tahoma_H_lc(47,40,Red);
           Write_Tahoma_N_lc(60,40,Blue);
           Write_Tahoma_B(76,40,Yellow);

           Write_Tahoma_Percent(69,102,Cyan);

           //ROUTINE FOR CAPACITIVE TOUCH SWITCH

           CTMUCONH = 0x00; //CTMU is disabled
           CTMUCONL = 0x90;
           CTMUICON = 0b00010001; //  uA,  Adjustment page 325    bit 7-2 ITRIM<5:0>: Current Source Trim bits   bit 1-0 IRNG<1:0>: Current Source Range Select bits (see Table 27-4) page 432
           ADCON2.ADFM =  1; // Results format 1 = Right justified
           ADCON2.ACQT0 = 1; // Acquition time 7 = 20TAD 2 = 4TAD 1=2TAD
           ADCON2.ACQT1 = 0; // Acquition time 7 = 20TAD 2 = 4TAD 1=2TAD
           ADCON2.ACQT2 = 0; // Acquition time 7 = 20TAD 2 = 4TAD 1=2TAD

           ADCON2.ADCS0 = 0; // Clock conversion bits 010 = FOSC/32
           ADCON2.ADCS1 = 1; // Clock conversion bit
           ADCON2.ADCS2 = 0; // Clock conversion bit

           ADCON1.PVCFG0 = 0; // Vref+ = AVdd
           ADCON1.NVCFG1 =0; // Vref- = AVss

          // ADCON0.CHS4 bits 6,5,4,3,2; // Select ADC channel
         //  ADCON0 = 0b00010001;        //  bit 6-2 CHS<4:0>: Analog Channel Select bits  page 295     bit 0 =  ADON = 1; // Turn on ADC*/

           CTMUCONH.CTMUEN = 1;   // Enable the CTMU
           CTMUCONL.EDG1STAT = 0; // Set Edge status bits to zero
           CTMUCONL.EDG2STAT = 0;



  while(1){


              for(j=0;j<10;j++)     //  ROUTINE FOR CAPACITIVE TOUCH SWITCH
              {
              ADCON0 = 0b00010001;
              CTMUCONH.IDISSEN = 1; //drain charge on the circuit
              Delay_us(125); //wait 125us
              CTMUCONH.IDISSEN = 0; //end drain of circuit
              CTMUCONL.EDG1STAT = 1; //Begin charging the circuit
              //using CTMU current source
              Delay_us(125); //wait 125us //wait for 125us
              CTMUCONL.EDG1STAT = 0; //Stop charging circuit
              PIR1.ADIF = 0; //make sure A/D Int not set
              ADCON0.GO = 1; //and begin A/D conv.
              while(!PIR1.ADIF); //Wait for A/D convert complete
              Voltage_Read1 = ADRES;  //Get the value from the A/D
              PIR1.ADIF = 0; //Clear A/D Interrupt Flag
              Total = Total + Voltage_Read1;
              }
              Average_Voltage1 = Total/10;

           //   Write_Number_Segment(Average_Voltage1,8,40,Lime);

              Total = 0;

              for(k=0;k<10;k++){
              ADCON0 = 0b00111001;  //01110 = AN14
              CTMUCONH.IDISSEN = 1; //drain charge on the circuit
              Delay_us(125); //wait 125us
              CTMUCONH.IDISSEN = 0; //end drain of circuit
              CTMUCONL.EDG1STAT = 1; //Begin charging the circuit
              //using CTMU current source
              Delay_us(125); //wait 125us //wait for 125us
              CTMUCONL.EDG1STAT = 0; //Stop charging circuit
              PIR1.ADIF = 0; //make sure A/D Int not set
              ADCON0.GO = 1; //and begin A/D conv.
              while(!PIR1.ADIF); //Wait for A/D convert complete
              Voltage_Read2 = ADRES; //Get the value from the A/D
              PIR1.ADIF = 0; //Clear A/D Interrupt Flag
              Total2 = Total2 + Voltage_Read2;
              }
              Average_Voltage2 = Total2/10;

          //    Write_Number_Segment(Average_Voltage2,8,68,Yellow);
              Total2 = 0;


               if (Average_Voltage1 <600){

                 Write_On(8,130,Red);
                 Count +=200;

                 on1 = 1;
               } else {
                  on1 = 0;
                   Write_Off(8,130,Yellow);
                  }

                  if (Count >=4000){
                  Count = 4000; }


                if (Average_Voltage2 <600){
                 Write_On(64,130,Magenta);

                 on3 = 1;
                 on2 = 1;
               //  Count-=20;
               } else
                {
                 on2 = 0;
                 Write_Off(64,130,White);
                 }

                 if (Count <=20){
                  Count = 20;
                  on3 = 0;
                  }

           Write_Number_Segment((Count)/40,8,98,Cyan);

           if (on1 && on2){
            TFT_Clear_Screen_ST7735S(ww);  //12 or 14
             Draw_Box_Rand_Line();
           }


          if (on3){
               once = 1;
               do { Count-=20;
              }while  (Count <20);
           }

          if (on3 && Flag){
             Write_Auto_Off_Red();
           }

          if (on3 && Flag !=255){
            Write_Auto_Off_White();
           }

            if (on3 ==0 && once){
            Clear_Tahoma_Text(Background_Colour);
            once = 0;
            }

     }
}
