/*
  Purpose: Illustrate pointer arithmetic
  Dr. Purdum, August 20, 2012
 */
#include <string.h>
void setup() {                
  Serial.begin(9600);   
}


void loop() {
  char buffer[50];
  char *ptr;
  int i;
  int length;
  
  strcpy(buffer, "When in the course of human events");
  ptr = buffer;
  length = strlen(buffer);
  Serial.print("The lvalue for ptr is: ");
  Serial.print((unsigned int)&ptr);
  Serial.print(" and the rvalue is ");
  Serial.println((unsigned int)ptr);
  while (*ptr) {
    Serial.print(*ptr++);
  }

  Serial.flush();  // Make sure all the data is sent...
  exit(0);
 
}

