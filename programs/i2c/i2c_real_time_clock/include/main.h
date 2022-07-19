/*******************************************************************************
* header: main.h
*
* Version: 1.0
*
* Description:
* header for main.c source file
*
********************************************************************************
* Copyright (2022-23) , ESP32_Course
*******************************************************************************/

/* include arduino header */
#include <Arduino.h>

/* OLED display width, in pixels */
#define SCREEN_WIDTH 128 

/* OLED display height, in pixels */
#define SCREEN_HEIGHT 64

/* OLED i2c address */
#define OLED_ADDRESS 0x3C

/**
* @brief start serial periperals
* @details this api starts serial peripherals
* @return None         
*/
void Start_Serial_Peripheral( void );

/**
* @brief start i2c periperals
* @details this api starts i2c peripherals
* @return None         
*/
void Start_I2C_Peripheral( void );

/**
* @brief start oled module
* @details this api starts oled module
* @return None         
*/
void Start_OLED_Module( void );

/**
* @brief start rtc module
* @details this api starts rtc module
* @return None         
*/
void Start_RTC_Module( void );

/**
* @brief oled display name
* @details this api display name in oled
* @param name string to display on oled
* @return None         
*/
void Display_Time( void );