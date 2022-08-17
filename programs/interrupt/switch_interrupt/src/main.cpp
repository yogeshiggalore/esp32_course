/*******************************************************************************
* Project Name: switch_interrupt
*
* Version: 1.0
*
* Description:
* This project, change led state on switch press 
* 
*
*
********************************************************************************
* Copyright (2022-23) , ESP32_Course
*******************************************************************************/
#include <Arduino.h>

#define SWITCH_1_PIN	34
#define GREEN_LED_PIN	2

bool bLEDState=false;

void IRAM_ATTR isr_switch_1_press(void);

void setup() {
	/* set SWITCH_1_PIN as input */
	pinMode(SWITCH_1_PIN, INPUT);

	/*set GREEN_LED_PIN as output */
	pinMode(GREEN_LED_PIN, OUTPUT);

	/* turn off led at begin */
	digitalWrite(GREEN_LED_PIN,LOW);
	
	bLEDState = false;

	attachInterrupt(SWITCH_1_PIN, isr_switch_1_press, FALLING);
}

void loop() {
	
}

/* isr callback function */
void IRAM_ATTR isr_switch_1_press(void){
	if(bLEDState){
		digitalWrite(GREEN_LED_PIN,LOW);
		bLEDState = false;
	}else{
		digitalWrite(GREEN_LED_PIN,HIGH);
		bLEDState = true;
	}
}