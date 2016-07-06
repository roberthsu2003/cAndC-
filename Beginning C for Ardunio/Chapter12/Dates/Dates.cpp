#include "Arduino.h"
#include "Dates.h"

/*****
  Purpose: Determine if a given year is a leap year. Algorithm 
           taken from C Programmer's Toolkit, Jack Purdum, Que 
           Corp., 1993, p.258.

  Parameters:
    int year		The year to test 

  Return value:
    int 		1 if the year is a leap year, 0 otherwise
*****/
int Dates::IsLeapYear(int year)
{
  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
    return 1;	// It is a leap year
  } else {
    return 0;	// not a leap year
  }
}

/*****
  Purpose: Determine the date for Easter for a given year. 
           Algorithm taken from Beginning Object Oriented 		
           Programming with C#, Jack Purdum, Wrox, 2012. 

  Parameters:
    struct easter *myData    Pointer to an easter structure

  Return value:
    void 		
    
  CAUTION: This function assumes that the year member of the structure holds the
           year being tested upon entry.	
*****/

void Dates::GetEaster(Dates *myData){ // This is line 44
  int offset;
  int leap;
  int day;
  int temp1, temp2, total;

  myData->myEaster.easterStr[0] = '0';    // Always a '0'
  myData->myEaster.easterStr[2] = '/';    // Always a '/'
  myData->myEaster.easterStr[3] = '0';    // Assume day is less than 10
  myData->myEaster.easterStr[10] = '\0';  // null char for End of string
  
  offset = myData->myEaster.year % 19;
  leap = myData->myEaster.year % 4;
  day = myData->myEaster.year % 7;
  temp1 = (19 * offset + 24) % 30;
  temp2 = (2 * leap + 4 * day + 6 * temp1 + 5) % 7;
  total = (22 + temp1 + temp2);
  if (total > 31) {
    myData->myEaster.easterStr[1] = '4';    // Must be in April
    myData->myEaster.month = 4;             // Save the month
    day = total - 31;
  } else {
    myData->myEaster.easterStr[1] = '3';    // Must be in March
    myData->myEaster.month = 3;             // Save the month
    day = total;
  }
  myData->myEaster.day = day;              // Save the day
  
  if (day < 10) {                 // One day char or two?
    myData->myEaster.easterStr[4] = (char) (day + ASCIIZERO);
  } else {
    itoa(day, myData->myEaster.easterStr + 3, 10);  // Convert day to ASCII and...
  }
  myData->myEaster.easterStr[5] = '/';     // Always a '/' and overwrites null from itoa()
  itoa(myData->myEaster.year, myData->myEaster.easterStr + 6, 10);    // Convert year to ASCII...
}
