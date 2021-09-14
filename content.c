// C++ code
//

#define RED_LED 13

void setup()
{
  pinMode(RED_LED, OUTPUT);
}

void loop()
{
  blink();
}

void blink(){
  digitalWrite(RED_LED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(RED_LED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
