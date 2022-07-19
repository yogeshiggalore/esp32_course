/*******************************************************************************
* Project Name: i2c_real_time_clock
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
 
/* RTC header */
#include <RTClib.h>

/* Declaration for an SSD1306 display connected to I2C (SDA, SCL pins) */
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

/* rtc instance */
RTC_DS3231 rtc;

char daysOfTheWeek[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

void setup() 
{

	delay(1000);

 	Start_Serial_Peripheral();

	Start_I2C_Peripheral();

	Start_OLED_Module();

	Start_RTC_Module();
}

void loop() 
{
	Display_Time();
	delay(500);
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

	Serial.println( "\n project: i2c real time clock demo\n" );
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

	display.display();
	delay(2);
 	display.clearDisplay();
 
	display.clearDisplay();
	display.setTextColor(WHITE);
	display.setTextSize(2);
	display.setCursor(0,5);
	display.print("  Clock ");
	display.display();
}

/*
 *****************************************************************************************
 * See header file for function definition.
 *****************************************************************************************
 */
void Start_RTC_Module( void )
{
	uint8_t status;

	status = rtc.begin();

	if ( status == 0 ) 
	{
		Serial.println( "Couldn't find RTC" );
		while (1)
		{
			delay( 1000 );
			Serial.println( "Couldn't find RTC" );
		}
	}

	/* adjust time */
	//rtc.adjust(DateTime(__DATE__, __TIME__));
}

/*
 *****************************************************************************************
 * See header file for function definition.
 *****************************************************************************************
 */
void Display_Time( void )
{
	DateTime now = rtc.now();
 
	display.clearDisplay();
	display.setTextSize(2);
	display.setCursor(75,0);
	display.println(now.second(), DEC);
	
	display.setTextSize(2);
	display.setCursor(25,0);
	display.println(":");
	
	display.setTextSize(2);
	display.setCursor(65,0);
	display.println(":");
	
	display.setTextSize(2);
	display.setCursor(40,0);
	display.println(now.minute(), DEC);
	
	display.setTextSize(2);
	display.setCursor(0,0);
	display.println(now.hour(), DEC);
	
	display.setTextSize(2);
	display.setCursor(0,20);
	display.println(now.day(), DEC);
	
	display.setTextSize(2);
	display.setCursor(25,20);
	display.println("-");
	
	display.setTextSize(2);
	display.setCursor(40,20);
	display.println(now.month(), DEC);
	
	display.setTextSize(2);
	display.setCursor(55,20);
	display.println("-");
	
	display.setTextSize(2);
	display.setCursor(70,20);
	display.println(now.year(), DEC);
	
	display.setTextSize(2);
	display.setCursor(0,40);
	display.print(daysOfTheWeek[now.dayOfTheWeek()]);
	
	display.display();
}