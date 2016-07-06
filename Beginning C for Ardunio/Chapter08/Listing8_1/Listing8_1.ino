/*
  Purpose: Simple program to demonstrate using a pointer
  
  Dr. Purdum, August 13, 2012
 */
#include <stdio.h>
int counter = 0;
void setup() {                
  // So we can communicate with the PC
  Serial.begin(9600);   
}


void loop() {
  int number = 5;
  int *ptrNumber;

  Serial.print("The lvalue for ptrNumber is: ");  
  Serial.print((long) &ptrNumber, DEC);
  Serial.print(" and the rvalue is ");
  Serial.println((long) ptrNumber, DEC);

  //=== Put new statements here!
  Serial.print("The lvalue for number is: ");  
  Serial.print((long) &number, DEC);
  Serial.print(" and has an rvalue of ");
  Serial.println((int) number, DEC);
  counter++;
  if (counter > 10) {
    Serial.flush();
    exit(0);
  }
}

