#include <common.h>

void NoCostume();
void ThirdCostume();
int * LoadModelNo();
void LoopbackF();
void FUN_8004b8d0();
 
unsigned short costume_map[] = { 0x274, 0x0, 0x0, 0x0, 0x0,
				 0x0, 0x0, 0x0, 0x0, 0x0};  

unsigned int CostumeNo;

void ModCostumeFunc()
{
      int KeyLocal = *(int *)((int)&GamepadKey + (char)GamepadNo);

      if ((KeyLocal & PAD_SQUARE) != 0)
      {
	*(int *)((int)&Outfit_Player + (char)GamepadNo) = 2;
      }
      else 
      {
        if ((KeyLocal & PAD_R1) != 0)
	{
		int CharNo = *(int *)((int)&ChosenChar + (char)GamepadNo);
		if ((int)costume_map[CharNo] != 0)		
		{
			*(int *)((int)&Outfit_Player + (char)GamepadNo) = 3;
		}
		else
		{
		        //Get back from here
        		NoCostume();
		}
	}
	else
	{


	        //Get back from here
        	NoCostume();
	}
      }

}

void ModCModelFunc()
{
        asm volatile ("sw $a3, %0" : "=m" (CostumeNo));
	
	if (CostumeNo == 3)
	{
	        asm volatile ("la $a3, 0x0000");
	}

	LoadModelNo();
}
void ModCModelFuncB()
{
	FUN_8004b8d0();
	//------------
	if (CostumeNo == 3)
	{
		//Get character for player
     	        int iVar1 = (char)MDLLPlayerNo * 0x2ea * 2;
	        int tCharaA = (&MDLLCharNo)[iVar1]; 
		int tCharaB = (tCharaA / 2);
		//Get model from list
		MDLLCostNo = (costume_map[tCharaB]);
	}
}

