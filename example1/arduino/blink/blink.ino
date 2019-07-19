int potPin = A3; // select the input pin for the potentiometer
int ledPin = 9; // select the pin for the LED

void setup() {
  Serial.begin(115200);
}

void loop() {
  int sensorValue = analogRead(potPin);
  Serial.println(sensorValue, DEC);
  
  sensorValue = sensorValue/4; // convert from 0-1024 to 0-255
  analogWrite(ledPin, sensorValue);
  delay(150);
}
