/* Basic USB Joystick Example
   Teensy becomes a USB joystick

   You must select Joystick from the "Tools > USB Type" menu

   Pushbuttons should be connected to digital pins 0 and 1.
   Wire each button between the digital pin and ground.
   Potentiometers should be connected to analog inputs 0 to 1.

   This example code is in the public domain.
*/
/*
  Modified for the diy-rudder project
 */

const int rudderPin = 0;
const int leftBrakePin = 1;
const int rightBrakePin = 2;

void setup() {
  // configure the joystick to manual send mode.  This gives precise
  // control over when the computer receives updates, but it does
  // require you to manually call Joystick.send_now().
  Joystick.useManualSend(true);
}

void loop() {
  // read analog inputs and set XYZ position
  Joystick.X(analogRead(rudderPin));
  Joystick.Y(analogRead(leftBrakePin));
  Joystick.Z(analogRead(rightBrakePin));

  // Because setup configured the Joystick manual send,
  // the computer does not see any of the changes yet.
  // This send_now() transmits everything all at once.
  Joystick.send_now();
  
  // a brief delay, so this runs about 30 times per second
  delay(30);
}
