#pragma once

// I2C for OLED display
#define I2C_SDA 6
#define I2C_SCL 7

// Buttons
#define BUTTON_PIN 0         // BUTTON 1 (boot)

// SPI (shared by LoRa and SD)
#define SPI_MOSI 10
#define SPI_SCK 9
#define SPI_MISO 11
#define SPI_CS 8

// LoRa Radio - SX1262 with 1W PA
#define USE_SX1262
#define LORA_SCK SPI_SCK
#define LORA_MISO SPI_MISO
#define LORA_MOSI SPI_MOSI
#define LORA_CS SPI_CS
#define LORA_RESET 12
#define LORA_DIO1 1
#define LORA_BUSY 13

#if defined(USE_SX1262)
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_BUSY
#define SX126X_RESET LORA_RESET

#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_RXEN 4
#define SX126X_TXEN 5

// TCXO voltage - required for radio init
#define SX126X_DIO3_TCXO_VOLTAGE 1.8

#define SX126X_MAX_POWER 22
#endif

// LED
#define LED_TX 48
#if not defined(P_LORA_TX_LED)
#define P_LORA_TX_LED LED_TX
#endif

// Display - SSD1306 OLED (128x64)
#define USE_SSD1306
#define OLED_WIDTH 128
#define OLED_HEIGHT 64
