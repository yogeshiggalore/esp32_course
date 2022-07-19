/*******************************************************************************
* Project Name: led_blink
*
* Version: 1.0
*
* Description:
* In this project, switches led on/off using firmware delay. RED LED pin 4
*
********************************************************************************
* Copyright (2022-23) , ESP32_Course
*******************************************************************************/

/* include arduino header */
#include <Arduino.h>

/* red led pin connected to pin 4 */
#define RED_LED_PIN		4

#define DELAY_1000_MS	1000

void setup() {

	/* set red led pin as output */
	pinMode( RED_LED_PIN, OUTPUT );

}

void loop() {

	/* turn on red led */
	digitalWrite( RED_LED_PIN, HIGH );

	/* 1000ms delay */
	delay( DELAY_1000_MS );

	/* turn off red led */
	digitalWrite( RED_LED_PIN, LOW );

	/* 1000ms delay */
	delay( DELAY_1000_MS );
}