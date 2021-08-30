<a href="https://107-systems.org/"><img align="right" src="https://raw.githubusercontent.com/107-systems/.github/main/logo/107-systems.png" width="15%"></a>
`107-Arduino-BoostUnits`
====================
[![Arduino Library Badge](https://www.ardu-badge.com/badge/107-Arduino-BoostUnits.svg?)](https://www.ardu-badge.com/107-Arduino-BoostUnits)
[![Compile Examples](https://github.com/107-systems/107-Arduino-BoostUnits/workflows/Compile%20Examples/badge.svg)](https://github.com/107-systems/107-Arduino-BoostUnits/actions?workflow=Compile+Examples)
[![Arduino Lint](https://github.com/107-systems/107-Arduino-BoostUnits/workflows/Arduino%20Lint/badge.svg)](https://github.com/107-systems/107-Arduino-BoostUnits/actions?workflow=Arduino+Lint)
[![keywords.txt Checks](https://github.com/107-systems/107-Arduino-BoostUnits/workflows/Extra%20Library%20Checks/badge.svg)](https://github.com/107-systems/107-Arduino-BoostUnits/actions?workflow=Extra+Library+Checks)
[![General Formatting Checks](https://github.com/107-systems/107-Arduino-BoostUnits/workflows/General%20Formatting%20Checks/badge.svg)](https://github.com/107-systems/107-Arduino-BoostUnits/actions?workflow=General+Formatting+Checks)
[![Spell Check](https://github.com/107-systems/107-Arduino-BoostUnits/workflows/Spell%20Check/badge.svg)](https://github.com/107-systems/107-Arduino-BoostUnits/actions?workflow=Spell+Check)

<p align="center">
  <a href="https://github.com/107-systems/107-Arduino-DroneCore"><img src="https://github.com/107-systems/.github/raw/main/logo/viper.jpg" width="40%"></a>
</p>

Arduino library for providing `boost::units` for the Arduino platform.

This library works for
* [ArduinoCore-samd](https://github.com/arduino/ArduinoCore-samd): [`Arduino Zero`](https://store.arduino.cc/arduino-zero), [`MKR 1000`](https://store.arduino.cc/arduino-mkr1000-wifi), [`MKR WiFi 1010`](https://store.arduino.cc/arduino-mkr-wifi-1010), [`Nano 33 IoT`](https://store.arduino.cc/arduino-nano-33-iot), [`MKR GSM 1400`](https://store.arduino.cc/arduino-mkr-gsm-1400-1415), [`MKR NB 1500`](https://store.arduino.cc/arduino-mkr-nb-1500-1413), [`MKR WAN 1300/1310`](https://store.arduino.cc/mkr-wan-1310) :heavy_check_mark:
* [ArduinoCore-mbed](https://github.com/arduino/ArduinoCore-mbed): [`Portenta H7`](https://store.arduino.cc/portenta-h7), [`Nano 33 BLE`](https://store.arduino.cc/arduino-nano-33-ble), [`Nano RP2040 Connect`](https://store.arduino.cc/nano-rp2040-connect), [`Edge Control`](https://store.arduino.cc/edge-control) :heavy_check_mark:
* [arduino-esp32](https://github.com/espressif/arduino-esp32): `ESP32 Dev Module`, `ESP32 Wrover Module`, ... :heavy_check_mark:
* [arduino-pico](https://github.com/earlephilhower/arduino-pico): [`Raspberry Pi Pico`](https://www.raspberrypi.org/products/raspberry-pi-pico), `Adafruit Feather RP2040`, ... :heavy_check_mark:

## Example
```C++
#include "Arduino-BoostUnits.h"
using namespace drone::unit;

#define DBG_ENABLE_INFO
#include <ArduinoDebug.hpp>
/* ... */
DEBUG_INSTANCE(80, Serial);
/* ... */
void setup()
{
  Serial.begin(9600);
  while (!Serial) { }

  Length const l1 = 2.0 * meters;
  Length const l2 = 4.0 * meters;
  Time   const t  = 0.5 * seconds;
  DBG_INFO("l1 = %.2f, b = %.2f, t = %.2f", l1.value(), l2.value(), t.value());

  Length const l3 = (l1 + l2);
  DBG_INFO("l1 + l2 = %.2f", l3.value());

  Area const area = l1 * l2;
  DBG_INFO("l1 * l2 = %.2f", area.value());

  Velocity const velocity = l1 / t;
  DBG_INFO("l1 / t = %.2f", velocity.value());

  Acceleration const acceleration = velocity / t;
  DBG_INFO("velocity / t = %.2f", acceleration.value());
}

void loop()
{

}
```
