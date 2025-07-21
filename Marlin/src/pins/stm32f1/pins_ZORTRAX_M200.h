/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Zortrax M200/M300 (STM32F103VCT6) board pin assignments
 */

#include "env_validate.h"

#define BOARD_INFO_NAME "Zortrax M200/M300"

//
// Stepper Motors
//
#define X_STEP_PIN          PB3   // X_STP_Pin
#define X_DIR_PIN           PD9   // X_DIR_Pin
#define X_ENABLE_PIN        PD14  // MOT_EN_Pin (shared)
#define X_MS1_PIN           PB10  // X_MS1_Pin
#define X_MS2_PIN           PB11  // X_MS2_Pin
#define X_MS3_PIN           PD8   // X_MS3_Pin

#define Y_STEP_PIN          PB4   // Y_STP_Pin
#define Y_DIR_PIN           PD13  // Y_DIR_Pin
#define Y_ENABLE_PIN        PD14  // MOT_EN_Pin (shared)
#define Y_MS1_PIN           PD10  // Y_MS1_Pin
#define Y_MS2_PIN           PD11  // Y_MS2_Pin
#define Y_MS3_PIN           PD12  // Y_MS3_Pin

#define Z_STEP_PIN          PB7   // Z_STP_Pin
#define Z_DIR_PIN           PC12  // Z_DIR_Pin
#define Z_ENABLE_PIN        PD14  // MOT_EN_Pin (shared)
#define Z_MS1_PIN           PA15  // Z_MS1_Pin
#define Z_MS2_PIN           PC10  // Z_MS2_Pin
#define Z_MS3_PIN           PC11  // Z_MS3_Pin

#define E0_STEP_PIN         PA0   // E_STP_Pin
#define E0_DIR_PIN          PD0   // E_DIR_Pin
#define E0_ENABLE_PIN       PD14  // MOT_EN_Pin (shared)

//
// Endstops
//
#define X_MIN_PIN           PE12   // X_ENDSTOP_Pin
#define Y_MIN_PIN           PC6   // Y_ENDSTOP_Pin
// #define Z_MIN_PIN           PE15  // Z_SENSOR_Pin
// #define Z_MAX_PIN           PA8   // Z_DOWN_ENDSTOP_Pin
#define Z_MIN_PROBE_PIN         PC7   // PLATFORM_ENDSTOP_Pin
// #define FILAMENT_RUNOUT_PIN PD15  // FILAMENT_ENDSTOP_Pin

//
// Heaters / Fans
//
#define HEATER_0_PIN        PC8   // HEATER_PWM_Pin
#define HEATER_BED_PIN      PC9   // PLATFORM_HEATER_Pin
#define FAN0_PIN            PE13  // FAN1_Pin
#define FAN1_PIN            PE14  // FAN2_Pin

//
// Temperature Sensors
//
#define TEMP_0_PIN          PB1   // EXT_TEMP_Pin (ADC1_CHANNEL_9)
#define TEMP_BED_PIN        PB0   // PLATFORM_TEMP_Pin (ADC1_CHANNEL_8)

//
// SD Card (SPI1)
//
#define SD_SS_PIN           PA4  // SD chip select
// #define SD_SCK_PIN          PA5
// #define SD_MISO_PIN         PA6
// #define SD_MOSI_PIN         PA7
// #define SD_DETECT_PIN       PB2

//
// Display (SSD1322 256x64 4bpp grayscale OLED, SPI2)
//
#define DOGLCD_CS           PB12   // Chip select for SSD1322
#define DOGLCD_A0           PB14   // Data/Command for SSD1322
#define DOGLCD_MOSI         PB15
#define DOGLCD_SCK          PB13

#define LCD_RESET_PIN       PE10
#define OLED_PWR            PE9    // PWR pin for SSD1322

#define FORCE_SOFT_SPI

//
// Buzzer
//
#define BEEPER_PIN          PC4   // BUZZER_Pin (for display beeper)

//
// Rotary Encoder
//
#define BTN_ENC             PC5   // Encoder click
#define BTN_EN1             PE7   // Encoder EN1
#define BTN_EN2             PE8   // Encoder EN2

//
// Case Light RGB LED Strip
//
#define LED_PIN_R           PD7   // R_LED_PIN
#define LED_PIN_G           PB5   // G_LED_PIN
#define LED_PIN_B           PD6   // B_LED_PIN

//
// Debug UART
//
#define SERIAL_TX_PIN       PA9   // DEBUG_UART_TX_Pin
#define SERIAL_RX_PIN       PA10  // DEBUG_UART_RX_Pin

// Enable OLED
#define BOARD_PREINIT() { \
  OUT_WRITE(OLED_PWR, HIGH); \
}
