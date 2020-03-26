#define LED 3
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  digitalWrite(LED,HIGH);
  Serial.println("open");
  delay(1000);
  digitalWrite(LED,LOW);
  Serial.println("close");
  delay(1000);
  
}
