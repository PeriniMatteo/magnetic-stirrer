/*
  magneticstirrer
  
  This is a sketch for Attiny45.
  You have to upload it on the chip using the instruction here:
  https://github.com/PeriniMatteo/Arduino-shield-attiny45

  This sketch will read an analog signal on A3 pin and then it 
  will write a pwm signal on pin 0 

  This example code is in the public domain.
*/

// the setup routine runs once when you press reset:
void setup() {
  // setting A3 pin as input 
  pinMode(A3,INPUT);
  //setting 0 pin as output
  pinMode(0,OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin A3 and divide it by 4
  // this will adapt the readed value for the PWM
  int sensorValue = analogRead(A3)/4;
  // write out the value you read on pin 0 as PWM 
  analogWrite(0, sensorValue);
  // delay a bit in between reads
  delay(5);        
}
