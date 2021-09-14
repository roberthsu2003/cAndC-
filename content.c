#define BLUE_LED 4
#define GREEN_LED 7
#define RED_LED 13

void setup()
{
  pinMode(BLUE_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
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
  
  digitalWrite(GREEN_LED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(GREEN_LED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(BLUE_LED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(BLUE_LED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
