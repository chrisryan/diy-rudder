/*
 * DIY Rudder Pedal Input
 *
 * MIT License 2015 Chris Ryan
 */

// Input pin configurations
int rudderPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(getRudderInput());

  delay(30); // 30 will give us about 30 updates per second
}

/*
 * Get the Rudder input value and conver to a range of -127 to +127.
 *
 * The input range was determined manually for my device.
 * TODO: Update to make this configurable
 */
int getRudderInput() {
  int sensorValue = analogRead(rudderPin);
  int rudderValue = map(sensorValue, 400, 678, -127, 127);
  return constrain(rudderValue, -127, 127);
}
