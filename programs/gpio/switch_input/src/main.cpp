/*******************************************************************************
* Project Name: switch_input
*
* Version: 1.0
*
* Description:
* This project, LED turn on when switch pressed 
* 
* GREEN LED pin 2
* SWITCH1 pin 34
*
********************************************************************************
* Copyright (2022-23) , ESP32_Course
*******************************************************************************/

#include <Arduino.h>

/* define LED1 and switch pins */
#define GREEN_LED_PIN	2
#define SWITCH_PIN		34

void setup(){

	/* set LED1 pin as output */
	pinMode(GREEN_LED_PIN, OUTPUT);

	/* set switch pin as input */
	pinMode(SWITCH_PIN, INPUT);
}

void loop() {

	/* read switch input and control led */
	if(digitalRead(SWITCH_PIN)){
		/* turn off LED */
		digitalWrite(GREEN_LED_PIN, LOW);
	}else{
		/* turn on LED */
		digitalWrite(GREEN_LED_PIN, HIGH);
	}
}
