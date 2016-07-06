/**
  Program: find out is the user typed in a leap year. The code assumes
    the user is not an idiot and only types in numbers that are a valid
    year.
  
  Author: Dr. Purdum, Aug. 7, 2012
**/

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0) {
    int bufferCount;

    int year;
    char myData[20];

    bufferCount = ReadLine(myData);
    year = atoi(myData);               // Convert to int
    Serial.print("Year: ");
    Serial.print(year);
    if (IsLeapYear(year)) {
      Serial.print(" is ");
    } else {
      Serial.print(" is not ");
    }
    Serial.println("a leap year");
  }
}
/*****
  Purpose: Determine if a given year is a leap year

  Parameters:
    int yr		The year to test 

  Return value:
    int 		1 if the year is a leap year, 0 otherwise
*****/
int IsLeapYear(int yr)
{
  if (yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0) {
    return 1;	// It is a leap year
  } else {
    return 0;	// not a leap year
  }
}

/*****
  Purpose: Read data from serial port until a newline character is read ('\n')
  
  Parameters:
    char str[]   character array that will be treated as a nul-terminated string
    
  Return value:
    int          the number of characters read for the string
    
  CAUTION:  This method will sit here forever if no input is read from the serial
            port and no newline character is entered.
****/
int ReadLine(char str[])
{
  char c;
  int index = 0;
  
  while (true) {
    if (Serial.available() > 0) {
      c = Serial.read();
      if (c != '\n') {
        str[index++] = c;
      } else {
        str[index] = '\0';  // null termination character
        break;
      }
    }
  }
  return index;
} 

