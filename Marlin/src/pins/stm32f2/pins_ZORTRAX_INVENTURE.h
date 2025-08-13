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
 * Zortrax MInventure (STM32F207ZCT6) board pin assignments
 */

#include "env_validate.h"

#define BOARD_INFO_NAME "Zortrax Inventure"

#define PC15 78

//
// Stepper Motors
//
#define X_STEP_PIN          PA7
#define X_DIR_PIN           PB2
#define X_ENABLE_PIN        PE10  // MOT_EN_Pin (shared)

#define Y_STEP_PIN          A6
#define Y_DIR_PIN           PB1
#define Y_ENABLE_PIN        PE10  // MOT_EN_Pin (shared)

#define Z_STEP_PIN          PB8   // Z_STP_Pin
#define Z_DIR_PIN           PE7   // Z_DIR_Pin
#define Z_ENABLE_PIN        PE10  // MOT_EN_Pin (shared)

#define E0_STEP_PIN         PB9   // E_STP_Pin
#define E0_DIR_PIN          PE8   // E_DIR_Pin
#define E0_ENABLE_PIN       PE10  // MOT_EN_Pin (shared)

//
// Endstops
//
#define X_MIN_PIN           PE11   // X_ENDSTOP_Pin
#define Y_MIN_PIN           PC15   // Y_ENDSTOP_Pin
// #define Z_MIN_PIN           PE15  // Z_SENSOR_Pin
#define Z_MAX_PIN           PE12   // Z_DOWN_ENDSTOP_Pin
#define Z_MIN_PROBE_PIN     PC13   // PLATFORM_ENDSTOP_Pin
// #define FILAMENT_RUNOUT_PIN PD15  // FILAMENT_ENDSTOP_Pin

//
// Heaters / Fans
//
#define HEATER_0_PIN        PA0   // HEATER_PWM_Pin
#define HEATER_BED_PIN      PC9   // PLATFORM_HEATER_Pin
#define FAN0_PIN            PE13  // FAN1_Pin
#define FAN1_PIN            PE14  // FAN2_Pin

//
// Temperature Sensors
//
#define TEMP_0_PIN          PC0
#define TEMP_1_PIN          PF8
#define TEMP_BED_PIN        PA4
// #define TEMP_CHAMBER_PIN
// PC1 - Chamber temperature Left
// PC2 - Chamber temperature Right
// PA4 - Chamber temperature Middle

//
// SD Card (SPI3)
//
#define SD_SS_PIN           PD0  // SD chip select
#define SD_SCK_PIN          PC10
#define SD_MISO_PIN         PC11
#define SD_MOSI_PIN         PC12
// #define SD_DETECT_PIN       PB2

//
// Display (SSD1322 256x64 4bpp grayscale OLED, SPI2)
//
#define DOGLCD_CS           PD1   // Chip select for SSD1322
#define DOGLCD_A0           PD2   // Data/Command for SSD1322
#define DOGLCD_MOSI         PC3
#define DOGLCD_SCK          PB13

#define LCD_RESET_PIN       PD4
#define OLED_PWR            PD3    // PWR pin for SSD1322

#define FORCE_SOFT_SPI

//
// Buttons
//
#define BTN_ENC             PD5
#define BTN_UP              PD7
#define BTN_DOWN            PD6

//
// Case Light RGB LED Strip
//
#define LED_PIN_R           PE3
#define LED_PIN_G           PE2
#define LED_PIN_B           PE4

//
// Debug UART
//
#define SERIAL_TX_PIN       PG14
#define SERIAL_RX_PIN       PG9

// Enable OLED
#define BOARD_PREINIT() { \
  OUT_WRITE(OLED_PWR, HIGH); \
}
