
//Nimish
//*****************************************
#ifndef _BICOM_H_
#define _BICOM_H_


#include <stdint.h>


#define green 12
#define orange 13
#define red 14
#define blue 15
#define user_btn 0

void ledSetup(void);
void ledOn(uint8_t led_no);
void ledOff(uint8_t led_no);
void Delay(uint32_t ms);
void buttonSetup(void);

int buttonStatus(void);
int encryption(int data);

#endif

