/*******************************************************************************
 * Project Name: adc_pot_read
 *
 * Version: 1.0
 *
 * Description:
 * In this project esp32, adc read
 *
 *
 ********************************************************************************
 * Copyright (2022-23) , ESP32 course
 *******************************************************************************/

/* include header files */
#include <Arduino.h>

// Potentiometer is connected to GPIO 32
const int potPin = 32;

// variable for storing the potentiometer value
int potValue = 0;

void setup()
{
	Serial.begin(115200);
	delay(1000);
}

void loop()
{
	// Reading potentiometer value
	potValue = analogRead(potPin);
	Serial.println(potValue);
	delay(500);
}