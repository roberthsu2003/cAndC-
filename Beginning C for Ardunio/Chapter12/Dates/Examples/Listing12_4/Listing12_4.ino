#include <Dates.h>

Dates myDates;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int i;
  
  for (i = 2000; i < 2013; i++) {
    Serial.print(i);
    Serial.print(" is ");
    if (myDates.IsLeapYear(i) == 0)
      Serial.print("not ");
    Serial.print("a leap year and Easter is on ");
    myDates.myEaster.year = i;
    myDates.GetEaster(&myDates);
    Serial.print(myDates.myEaster.easterStr);
    Serial.print("  ");
    Serial.print(myDates.myEaster.month);
    Serial.print("  ");
    Serial.print(myDates.myEaster.day);
    Serial.print(" ");
    Serial.println(myDates.myEaster.year);
  }
  Serial.flush();
  exit(0);
}

