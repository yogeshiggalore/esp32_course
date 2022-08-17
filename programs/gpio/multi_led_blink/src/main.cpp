/*******************************************************************************
* Project Name: multi_led_blink
*
* Version: 1.0
*
* Description:
* In this project, switches multi leds on/off using firmware delay. 
* RED 	LED pin 4
* GREEN LED pin 2
* BLUE 	LED pin 13
********************************************************************************
* Copyright (2022-23) , ESP32_Course
*******************************************************************************/

/* include arduino header */
#include <Arduino.h>

/* red led pin connected to pin 4 */
#define RED_LED_PIN		4

/* green led pin connected to pin 2 */
#define GREEN_LED_PIN		2

/* blue led pin connected to pin 13 */
#define BLUE_LED_PIN		13

#define DELAY_1000_MS	1000

void setup() {

	/* set red led pin as output */
	pinMode( RED_LED_PIN, OUTPUT );

	/* set green led pin as output */
	pinMode( GREEN_LED_PIN, OUTPUT );

	/* set blue led pin as output */
	pinMode( BLUE_LED_PIN, OUTPUT );

}

void loop() {

	/* turn on red led and turn off green and blue led*/
	digitalWrite( RED_LED_PIN, HIGH );
	digitalWrite( GREEN_LED_PIN, LOW );
	digitalWrite( BLUE_LED_PIN, LOW );

	/* 1000ms delay */
	delay( DELAY_1000_MS );

	/* turn on green led and turn off red and blue led*/
	digitalWrite( GREEN_LED_PIN, HIGH );
	digitalWrite( RED_LED_PIN, LOW );
	digitalWrite( BLUE_LED_PIN, LOW );

	/* 1000ms delay */
	delay( DELAY_1000_MS );

	/* turn on blue led and turn off red and green led*/
	digitalWrite( BLUE_LED_PIN, HIGH );
	digitalWrite( GREEN_LED_PIN, LOW );
	digitalWrite( RED_LED_PIN, LOW );
	
	/* 1000ms delay */
	delay( DELAY_1000_MS );
}