#ifndef COMMON_H
#define COMMON_H

enum PadButtons{
    PAD_L1 = 4,
    PAD_R1 = 8,
    PAD_L2 = 1,
    PAD_R2 = 2,
    PAD_SELECT = 0x100,
    PAD_START = 0x800,
    PAD_UP = 0x1000,
    PAD_RIGHT = 0x2000,
    PAD_DOWN = 0x4000,
    PAD_LEFT = 0x8000,
    PAD_TRIANGLE = 0x10,
    PAD_CIRCLE = 0x20,
    PAD_CROSS = 0x40,
    PAD_SQUARE = 0x80
};

extern char GamepadNo;
extern int GamepadKey;
extern int Outfit_Player;
extern char ChosenChar;

extern char MDLLPlayerNo;
extern char MDLLCharNo;
extern int MDLLCostNo;

extern int DAT_8009eb0c;
extern int DAT_800d4518;
extern int DAT_8009f3e8; 
extern int* DAT_8009f3e0;


#endif
