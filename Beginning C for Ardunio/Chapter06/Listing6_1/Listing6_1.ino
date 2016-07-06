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

