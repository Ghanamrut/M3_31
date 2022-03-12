

//Nimish
//********************************************************
#include "bicom.h"


const int encrypt1 = 1;
const int encrypt2 = 2;
const int encrypt3 = 3;
const int encrypt4 = 4;

void Delay(uint32_t ms);
void buttonSetup(void);
void ledSetup(void);
void ledOn(uint8_t led_no);
void ledOff(uint8_t led_no);
int encryption(int data);

int count;
void Delay(uint32_t ms)
{
	for (uint32_t i = 0; i < (ms * 100000); i++)
	{
		count++;
	}
}

void buttonSetup(void)
{

	uint32_t *pRccAhb1enr = (uint32_t *)0x40023830;
	*pRccAhb1enr |= (1 << 0);


	uint32_t *pGpiodModeReg = (uint32_t *)0x40020000;
	*pGpiodModeReg &= ~(1 << 0);
	*pGpiodModeReg &= ~(1 << 1);


	uint32_t *pGpioPuPdReg = (uint32_t *)0x4002000C;
	*pGpioPuPdReg |= (1 << 1);
}
void ledSetup(void)
{
	uint32_t *pRccAhb1enr = (uint32_t *)0x40023830;
	uint32_t *pGpiodModeReg = (uint32_t *)0x40020C00;

	*pRccAhb1enr |= (1 << 3);
	*pGpiodModeReg |= (1 << (2 * green));
	*pGpiodModeReg |= (1 << (2 * orange));
	*pGpiodModeReg |= (1 << (2 * red));
	*pGpiodModeReg |= (1 << (2 * blue));

	ledOff(green);
	ledOff(orange);
	ledOff(red);
	ledOff(blue);
}

//Ghanmrut
//***********************************************************

void ledOn(uint8_t led_no)
{
	uint32_t *pGpiodDataReg = (uint32_t *)0x40020C14;
	*pGpiodDataReg |= (1 << led_no);
}

void ledOff(uint8_t led_no)
{
	uint32_t *pGpiodDataReg = (uint32_t *)0x40020C14;
	*pGpiodDataReg &= ~(1 << led_no);
}

int buttonStatus(void){
	int count = 0;
	int n=10000000;
	uint32_t *pGpioaDataReg = (uint32_t *)0x40020010;
	while (n--)
	{
		if ((*pGpioaDataReg) & (1 << user_btn))
		{
			Delay(150);
			count++;
			if (count > 4)
				count = 0;
		}
	}
	return count;
}

int encryption(int data)
{

	if (data == encrypt1)
	{
		int dta = 32 + 42 ;
		return dta;
	}
	else if (data == encrypt2)
	{
		int dta = 33 + 43;
		return dta;
	}
	else if (data == encrypt3)
	{
		int dta = 34 + 44;
		return dta;
	}
	else if (data == encrypt4)
	{
		int dta = 35 + 45;

		return dta;
	}
 return 0;
}



