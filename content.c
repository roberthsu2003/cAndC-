// C++ code
//

#define RED_LED 13

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
      digitalWrite(RED_LED, HIGH);
    }else if(inputValue == '0'){
      digitalWrite(RED_LED, LOW);
    }
  }
 
}


