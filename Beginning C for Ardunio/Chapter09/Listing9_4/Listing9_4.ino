/*
  Purpose: Show how to use a pointer to function
    Dr. Purdum, August 21, 2012
  */

void setup() {
  Serial.begin(9600);   // Serial link to PC
}

void loop() {
  int number = 50;
  int (*funcPtr)(int n);  // This defines a pointer to function

  funcPtr = DisplayValue;  // This copies the lvalue of DisplayValue
  number = (*funcPtr)(number);
  Serial.print("After return from function, number = ");
  Serial.println(number);
  Serial.flush();
  exit(0);
}

int DisplayValue(int val)
{
  Serial.print("In function, val = ");
  Serial.println(val);
  return val * val;
}

