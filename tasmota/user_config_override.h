
/*
  user_config_override.h - user configuration overrides my_user_config.h for Tasmota

  Copyright (C) 2021  Theo Arends

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// -- KC868-A16 Custom Build ---------------------------
// PCF8574 I/O Expander support
#ifndef USE_I2C
#define USE_I2C
#endif

#define USE_PCF8574
#define USE_PCF8574_SENSOR
#define USE_PCF8574_DISPLAYINPUT
#define USE_PCF8574_MQTTINPUT

// Ethernet support
#define USE_ETHERNET
#define ETH_TYPE    0
#define ETH_ADDR    0
#define ETH_CLKMODE 3

// Alexa / Hue emulation
#define USE_EMULATION
#define USE_EMULATION_HUE
#define USE_EMULATION_WEMO

#endif  // _USER_CONFIG_OVERRIDE_H_
