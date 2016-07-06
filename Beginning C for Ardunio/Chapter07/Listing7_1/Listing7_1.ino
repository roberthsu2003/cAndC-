/**
  Program: Demonstrate the concept of local scope
  
  Author: Dr. Purdum, Aug. 9, 2012
**/
#define MAXVAL 1000

int k = 0;

void setup()
{
  Serial.begin(9600);
}


void loop()
{
  int x = 5;
  
  if (x < MAXVAL) {
   int temp;

   temp = x * 100;
  }
  Serial.print("The value of temp is: ");
  Serial.println(temp);
  if (k++ > 10)
     exit(0);
}

