#pragma once

#define ENABLE_DEBUG
#define DEBUG_PORT Serial
#define DEBUG_BAUD 115200

#define WEMOS_D1_MINI

// VERSION CONFIG
#define DEAUTHER_VERSION "2.6.1"
#define DEAUTHER_VERSION_MAJOR 2
#define DEAUTHER_VERSION_MINOR 6
#define DEAUTHER_VERSION_REVISION 1

#define EEPROM_SIZE 4095
#define BOOT_COUNTER_ADDR 1
#define SETTINGS_ADDR 100

// ATTAK CONFIG
#define ATTACK_ALL_CH false
#define RANDOM_TX false
#define ATTACK_TIMEOUT 600
#define DEAUTH_REASON 1
#define DEAUTHS_PER_TARGET 30
#define BEACON_INTERVAL_100MS true
#define PROBE_FRAMES_PER_SSID 1

// SNIFFER 
#define CH_TIME 200
#define MIN_DEAUTH_FRAMES 3

// DISPLAY CONFIG
#define USE_DISPLAY true
#define DISPLAY_TIMEOUT 600
#define FLIP_DIPLAY false
#define DISPLAY_TEXT "Clone Version"
#define SSD1306_I2C
#define I2C_ADDR 0x3C
#define I2C_SDA 5
#define I2C_SCL 4

// CONFIG BUTTON
#define BUTTON_UP 14
#define BUTTON_DOWN 12
#define BUTTON_A 13
#define BUTTON_B 15
#define RESET_BUTTON 5

// ACCESS POINT CONFIG
#define AP_SSID "TP-Link_657370"
#define AP_PASSWD "657370"
#define AP_HIDDEN true
#define AP_IP_ADDR {192, 168, 4, 1}

// WEB CONFIG
#define WEB_ENABLED true
#define WEB_CAPTIVE_PORTAL false
#define WEB_USE_SPIFFS false
#define DEFAULT_LANG "en"
#define WEB_URL "esp.me"
#define WEB_IP_ADDR (192, 168, 4, 1)

#define LED_MODE_BRIGHTNESS 10

#define CLI_ENABLED false
#define CLI_ECHO false

#define USE_LED true
#define LED_MODE_OFF 0, 0, 0
#define LED_MODE_SCAN 0, 0, 255
#define LED_MODE_ATTACK 255, 0, 0
#define LED_MODE_IDLE 0, 255, 0

