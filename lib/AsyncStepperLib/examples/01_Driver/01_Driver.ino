/***************************************************
Copyright (c) 2021 Luis Llamas
(www.luisllamas.es)

This program is free software: you can redistribute it and/or modify it under the terms of the GNU Affero General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License for more details.

You should have received a copy of the GNU Affero General Public License along with this program.  If not, see <http://www.gnu.org/licenses
****************************************************/

#include <AsyncStepper.hpp>

const int stepper_dir_pin = 8;
const int stepper_step_pin = 9;

const int stepper_steps = 200;

AsyncStepper stepper1(stepper_steps, stepper_dir_pin, stepper_step_pin);

void setup()
{
	Serial.begin(115200);

	stepper1.SetSpeedRpm(10);
	stepper1.RotateContinuous(AsyncStepper::CCW);
}

void loop()
{
	stepper1.Update();
}
