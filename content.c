// C++ code
//
class Student{
};


void setup()
{
  Serial.begin(9600);
  int englishScore = 60;
  Serial.println("input english score:");
  
  while(true){
    if(Serial.available()>0){
      englishScore = Serial.parseInt();
      break;
    }
  }

  Serial.print("Hello! your english is:");
  Serial.println(englishScore);
}

void loop()
{
  
}
