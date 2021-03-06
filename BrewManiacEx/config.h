#ifndef CONFIG_H
#define CONFIG_H
/**************************************************************************************/
/*  Configuration: 																	  */
/*  Only one setting: the serial used to connect to.                                  */
/*   if SoftwareSerial is used. RX/TX PIN must be defined.                            */
/*   else, UART0(Serial) is used.                                                     */
/**************************************************************************************/

//1. I2C LCD only. check the address
//#define LCD_I2C_ADDR 0x3F


#define NODEMCU_PIN_A0 17	// Analog 
#define NODEMCU_PIN_D0 16	// No interrupt, do not use for rotary encoder
#define NODEMCU_PIN_D1 5	// I2C
#define NODEMCU_PIN_D2 4	// I2C
#define NODEMCU_PIN_D3 0
#define NODEMCU_PIN_D4 2    // Also controls the LED on the ESP8266 module
#define NODEMCU_PIN_D5 14
#define NODEMCU_PIN_D6 12
#define NODEMCU_PIN_D7 13
#define NODEMCU_PIN_D8 15

/**** PIN setup ******/
/*
*   PIN setup is in pins.h
*   for the usage of some PINs may involve I2C IO expander
*/

#define LCD_USE_SSD1306 false
#define MaximumNumberOfSensors 1
// maximum is 5
#if MaximumNumberOfSensors > 5
#error "MaximumNumberOfSensors should not exceed 5"
#endif


/**************************************************************************************/
/*  BrewManiac Related settings                                                       */
/**************************************************************************************/

// manual control over pump during mash
// !!! NOT really options. 
#define SwapSerial false
// changes the UART pins to use GPIO13 and GPIO15 as RX and TX. 
//- See more at: http://www.esp8266.com/viewtopic.php?f=23&t=6394#sthash.5cMDbhuW.dpuf
#define SerialDebug false
#define DebugPort Serial
#define SpargeHeaterSupport true
#define MANUAL_PUMP_MASH true
// DELAY start
#define NoDelayStart false
#define SupportAutoModeRecovery true
#define SupportManualModeCountDown true
#define NoWhirlpool false

#define EnablePidAutoTune true
#define EnableBrewLog true

#define TemperatureChartPeriod 60000

#define  PidAutoTuneStartValue 127.5
#define  PidAutoTuneNoise  0.2
#define  PidAutoTuneStep   127.5
#define  PidAutoTuneLookBack  30

#define MinimumTemperatureReadGap 500

//debug setting
#define FakeHeating false
#define DEVELOP_SETTING_VALUE false

// *************************
//*  Button timeing setting
// *************************
#define ButtonPressedDetectMinTime 125 // in ms
#define ButtonLongPressedDetectMinTime 1000 // in ms
#define ButtonContinuousPressedDetectMinTime 1000 // in ms
#define ButtonContinuousPressedTrigerTime 150 // in ms
#define ButtonFatFingerTolerance 50  // in ms

/**************************************************************************************/
/*  Wireless related settings														  */
/*   URLs .										  									  */
/**************************************************************************************/

// this will be used as hostname, accessed as "bm.local", as well as SSID to configurate 
// Wireless network
// serving page will be like http://bm.local/

#define ONLINE_UPDATE_PATH "/update"
// this is the path to check online update.
// like http://bm.local/update

// for web interface update
#define UPDATE_SERVER_PORT 8008
#define FILE_MANAGEMENT_PATH "/filemanager"
// direct access to file system
// http://bm.local:8008/filemenager
// upload firmware by browser


// http://bm.local:8008/update 
#define SYSTEM_UPDATE_PATH "/systemupdate"
#define Default_USERNAME "brewmaniac"
#define Default_PASSWORD "rdwhahb"
#define Default_HOSTNAME "bm"

/**************************************************************************************/
/*  Some other Configuration:  														  */
/*  Don't touch them if you don't know what they are.								  */
/**************************************************************************************/

#define BME8266_VERSION "0.2.1"

#define FIRMWARE_UPDATE_URL "http://brew.vito.tw/bmeupdate.php?info"
#define JS_UPDATE_URL  "http://brew.vito.tw/bmejsupdate.php?v="

// request status report period
#define DEFAULT_REPORT_PERIOD 6000


#define UseWebSocket false
#define UseServerSideEvent true


#endif





