#DIY Rudder Pedal Project

A simple project to build and connect a rudder pedal to Flight Gear using an Arduino.

## Arduino

Load the sketch onto an arduino.

##Flight Gear

Copy the flightgear files to where flightgear is installed to be able to use the files. Run flight gear with the following command:

fgfs --generic=serial,in,30,/dev/ttyACM0,9600,rudder-custom

Replace /dev/tty0 with your com port as appropriate for your system.
