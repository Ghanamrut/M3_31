// Ghanamrut
//*************************************************************
#include "MyStm32f407xx.h"

#define Buttonpressed ENABLE
#define HIGH          1
#define LOW           0

int counter = 0;

void one(int);
void two(int);
void three(int);
void four(int);

void delay(){
    for(int i=0; i<6000000; i++);
}

void main(){
    //LED Initialization
    GPIO_PeriClockControl(GPIOD, ENABLE);
    GPIO_Handle_t GpioLED1;
    GpioLED1.pGPIOx = GPIOD;
    GpioLED1.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
    GpioLED1.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GpioLED1.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GpioLED1.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
    GPIO_Init(&GpioLED1);

// Nimish
//*************************************************************
    GPIO_Handle_t GpioLED2;
    GpioLED2.pGPIOx = GPIOD;
    GpioLED2.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
    GpioLED2.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GpioLED2.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GpioLED2.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
    GPIO_Init(&GpioLED2);

	

    GPIO_Handle_t GpioLED3;
    GpioLED3.pGPIOx = GPIOD;
    GpioLED3.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
    GpioLED3.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GpioLED3.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GpioLED3.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
    GPIO_Init(&GpioLED3);


//Gaurav
//*************************************************************
    GPIO_Handle_t GpioLED4;
    GpioLED4.pGPIOx = GPIOD;
    GpioLED4.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
    GpioLED4.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GpioLED4.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GpioLED4.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
    GPIO_Init(&GpioLED4);

    //Switch Initialization
    GPIO_Handle_t Gpiobtn;
    Gpiobtn.pGPIOx = GPIOA;
    Gpiobtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
    Gpiobtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
    Gpiobtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    Gpiobtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
    GPIO_PeriClockControl(GPIOA, ENABLE);
    GPIO_Init(&Gpiobtn);

//Akshay
//*************************************************************
    while(1){
    if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == Buttonpressed)
    {
        delay();
        counter += 1;
    }

    if (counter == 1){
        delay(); 
        one(counter - 1);
    }

    if (counter == 5){
        delay(); 
        two(counter - 1);
    }

    if (counter == 10){
        delay(); 
        three(counter - 1);
    }

    if (counter == 13){
        delay(); 
        four(counter - 1);
    }

    }


}
//Window Status - Nimish
//*************************************************************
void one(int nums){
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, HIGH);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, HIGH);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, HIGH);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, HIGH);
}
//Alarm Status - Akshey
//*************************************************************
void two(int nums){
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, LOW);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, LOW);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, LOW);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, LOW);
}
//Battery Info - Ghanamrut
//*************************************************************
void three(int nums){
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
    delay();
    delay();
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
    delay();
    delay();
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
    delay();
    delay();
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
    delay();
    delay();
}
//Door Status  -  Gaurav
//*************************************************************
void four(int nums){
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
    delay();
    delay();
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
    delay();
    delay();
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
    delay();
    delay();
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
    delay();
    delay();
}

