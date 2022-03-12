//Akshay
//****************************************************************

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
#warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include "rke.h"
#include <stdio.h>



static void lock(void)
{
	ledOn(orange);
	ledOn(green);
	ledOn(red);
	ledOn(blue);
}

static void unlock(void)
{
	ledOff(orange);
	ledOff(green);
	ledOff(red);
	ledOff(blue);
}

static void alram(void)
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

static void approchLight(void){

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
//********************************************************************

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
			lock();
			btncnt = 0;
		}
		else if (encrypredData == 76)
		{
			unlock();
			btncnt = 0;
		}
		else if (encrypredData == 78)
		{
			alram();

			btncnt = 0;
		}
		else if (encrypredData == 80)
		{
			approchLight();
			btncnt = 0;
		}
	}
}

