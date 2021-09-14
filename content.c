// C++ code
//
#define BLUE_LED 4
#define GREEN_LED 7
#define RED_LED 13

void setup()
{
  Serial.begin(9600);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
}

void loop()
{
  if(Serial.available()>0){
    char inputValue = Serial.read();
    switch(inputValue){
      case '1':
      blink(1);
      break;
      
      case '2':
      blink(2);
      break;
      
      case '3':
      blink(3);
      break;
      
      default:
      break;
    }
  }
}

void blink(int num){
  for(int i=0;i<num; i+=1 ){
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
  
}
