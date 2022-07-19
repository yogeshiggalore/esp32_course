/*******************************************************************************
* Project Name: i2c_oled_display_name
*
* Version: 1.0
*
* Description:
* In this project, esp32 module display name on oled
*
********************************************************************************
* Copyright (2022-23) , ESP32_Course
*******************************************************************************/

/* include headers */
#include<Arduino.h>
#include<main.h>

/* I2C display header */
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_Sensor.h>
 

/* Declaration for an SSD1306 display connected to I2C (SDA, SCL pins) */
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() 
{

	delay(1000);

 	Start_Serial_Peripheral();

	Start_I2C_Peripheral();

	Start_OLED_Module();

	OLED_Display_Name("test");
}

void loop() 
{

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

	Serial.println( "\n project: i2c display name demo\n" );
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
void Start_OLED_Module( void )
{
	uint8_t status=0;

	status = display.begin( SSD1306_SWITCHCAPVCC, OLED_ADDRESS );

	if( status == 0 ) 
	{
    	Serial.println( "SSD1306 allocation failed" );
    	while( 1 )
		{
			Serial.println( "oled display not working\n" );
			delay(1000);
		}
 	}
}

/*
 *****************************************************************************************
 * See header file for function definition.
 *****************************************************************************************
 */
void OLED_Display_Name( String name )
{
	display.clearDisplay();
  	display.setTextColor(WHITE);
	display.setTextSize(3);
	display.setCursor(0,0);
	display.println(name);
	display.display();
}