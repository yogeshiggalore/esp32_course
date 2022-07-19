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
* @brief scan i2c devices
* @details this api scan i2c device connected to i2c port 
* @return None         
*/
void Scan_I2C_Devices( void );
