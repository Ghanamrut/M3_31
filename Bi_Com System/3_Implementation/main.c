

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
#warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include "bicom.h"
#include <stdio.h>

//Akshay Eknathe
//***********************************
static void windowStatus(void)
{
	ledOn(orange);
	ledOn(green);
	ledOn(red);
	ledOn(blue);
}

static void alarmStatus(void)
{
	ledOff(orange);
	ledOff(green);
	ledOff(red);
	ledOff(blue);
}

static void carBatteryInfo(void)
{

	ledOn(green);
	Delay(350);
	ledOff(green);
	ledOn(orange);
	Delay(350);
	ledOff(orange);
	ledOn(red);
	Delay(350);
	ledOff(red);
	ledOn(blue);
	Delay(350);
	ledOff(blue);
	ledOn(green);
	Delay(350);
	ledOff(green);
}

static void doorStatus(void){

	ledOn(green);
	Delay(350);
	ledOff(green);
	ledOn(blue);
	Delay(350);
	ledOff(blue);
	ledOn(red);
	Delay(350);
	ledOff(red);
	ledOn(orange);
	Delay(350);
	ledOff(orange);
	ledOn(green);
	Delay(350);
	ledOff(green);
}


//Gaurav
//***********************************
int main(void)
{

	ledSetup();
	buttonSetup();

	while (1)
	{
		int btncnt = buttonStatus();
		volatile int encrypredData = encryption(btncnt);
		if (encrypredData == 74)
		{
			windowStatus();
			btncnt = 0;
		}
		else if (encrypredData == 76)
		{
			alarmStatus();
			btncnt = 0;
		}
		else if (encrypredData == 78)
		{
			carBatteryInfo(();

			btncnt = 0;
		}
		else if (encrypredData == 80)
		{
			doorStatus();
			btncnt = 0;
		}
	}
}

