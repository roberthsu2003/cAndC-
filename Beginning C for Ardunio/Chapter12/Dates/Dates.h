/*
  Dates.h - Library for finding is a year is a leap year
	     and the date for Easter for a given year.
  Created by: Jack Purdum, Sept. 10, 2012
  Released into the public domain.
*/
#ifndef Dates_h
  #define Dates_h

  #include "Arduino.h"
  
  class Dates
  {
    public:
    #define ASCIIZERO 48          // character for 0 in ASCII

    struct easter {
      int month;
      int day;
      int year;
      int leap;
      char easterStr[11];
    };
    struct easter myEaster;
                      	      // Function prototypes:
    int IsLeapYear(int year);
    void GetEaster(Dates *myEaster);
  };
#endif
