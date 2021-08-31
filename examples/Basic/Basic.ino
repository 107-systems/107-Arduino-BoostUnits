/**
 * @brief  This example demonstrates basic usage of 107-Arduino-BoostUnits.
 * @author Alexander Entinger, MSc / LXRobotics GmbH
 */

/**************************************************************************************
 * INCLUDE
 **************************************************************************************/

#include <107-Arduino-BoostUnits.h>
using namespace drone::unit;

#define DBG_ENABLE_INFO
#include <ArduinoDebug.hpp>

/**************************************************************************************
 * GLOBAL VARIABLES
 **************************************************************************************/

DEBUG_INSTANCE(80, Serial);

/**************************************************************************************
 * SETUP/LOOP
 **************************************************************************************/

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
