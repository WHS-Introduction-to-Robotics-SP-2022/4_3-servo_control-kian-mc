// Servo - Version: Latest 
#include <Servo.h>

/*
my servo values
45/120/5
*/
Servo ser;
void setup() {

ser.attach(9);
//calibrates position
ser.write(0);
}

void loop() {

ser.write(45);
delay(1000);
ser.write(120);
delay(1000);
ser.write(5);
delay(1000);
}
