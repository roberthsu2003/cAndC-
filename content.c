// C++ code
//

#define RED_LED 13

class LED{
  public:
  static void blinkOne();
  static void blinkTwo();
};

void LED::blinkOne(){
  digitalWrite(RED_LED, HIGH);
  delay(1000);
  digitalWrite(RED_LED, LOW);
  delay(1000);
}

void LED::blinkTwo(){
  digitalWrite(RED_LED, HIGH);
  delay(1000);
  digitalWrite(RED_LED, LOW);
  delay(1000);
  
  digitalWrite(RED_LED, HIGH);
  delay(1000);
  digitalWrite(RED_LED, LOW);
  delay(1000);
}

void setup()
{
  pinMode(RED_LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available() > 0){
    char inputValue = Serial.read();
    if(inputValue == '1'){
      LED::blinkOne();
    }else if(inputValue == '0'){
      LED::blinkTwo();
    }
  }
 
}


