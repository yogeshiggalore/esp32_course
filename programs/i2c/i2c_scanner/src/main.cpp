/*******************************************************************************
* Project Name: i2c_scanner
*
* Version: 1.0
*
* Description:
* In this project, esp32 module scan i2c device present in i2c-0 port
*
********************************************************************************
* Copyright (2022-23) , ESP32_Course
*******************************************************************************/

/* include headers */
#include <Arduino.h>
#include <main.h>
#include <Wire.h>

void setup() {

	Start_Serial_Peripheral();

	Start_I2C_Peripheral();

	Scan_I2C_Devices();

}

void loop() {

}

/*
 *****************************************************************************************
 * See header file for function definition.
 *****************************************************************************************
 */
void Start_Serial_Peripheral( void )
{
	/* start serial 0 with baudrate 9600 */
	Serial.begin( 9600 );

	Serial.println( "\n project: i2c scanner demo\n" );
}

/*
 *****************************************************************************************
 * See header file for function definition.
 *****************************************************************************************
 */
void Start_I2C_Peripheral( void )
{
	/* start i2c 0 with clock 100KHz */
	Wire.begin();
}

/*
 *****************************************************************************************
 * See header file for function definition.
 *****************************************************************************************
 */
void Scan_I2C_Devices( void )
{
	uint8_t address_cntr=0;
	uint8_t i2c_err;

	Serial.print("started scanning i2c devices\n\n");
	Serial.print("    00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F\n00:    ");
	
	/* loop through all 127 possible address to check device presence */
	for( address_cntr=1; address_cntr<127; address_cntr++ )
	{
		if( ( address_cntr % 0x10 ) == 0 )	
		{
			Serial.printf( "\n%02X: ",address_cntr );
		}

		/* begin transmission if ack from device then device present */
		Wire.beginTransmission( address_cntr );
		i2c_err = Wire.endTransmission();
		if( i2c_err == 0 )
		{
			Serial.printf( "%02X ", address_cntr );
		}
		else
		{
			Serial.print("-- ");
		}

		/* 100ms delay */
		delay( 100 );
	}

	Serial.print("\n\nstopped scanning i2c devices\n");
}
