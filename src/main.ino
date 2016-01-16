/*
 * esp-relay - Simple ESP8266 relay program
 *
 * Copyright (C) 2016 Piers Finlayson
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of  MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <Arduino.h>

#define GPIO_RELAY 2
#define TIMER 5000

#define LOG Serial.println

void setup(void)
{
  Serial.begin(115200);
  pinMode(GPIO_RELAY, OUTPUT);
  LOG("Initialized");
}

void loop(void)
{
  int next = LOW;
  while (1)
  {
    if (next == HIGH)
    {
      LOG("Turn relay on");
    }
    else
    {
      LOG("Turn relay off");
    }
    digitalWrite(GPIO_RELAY, next);
    delay(TIMER);
    next = (next == LOW) ? HIGH : LOW;
  }
}
    


