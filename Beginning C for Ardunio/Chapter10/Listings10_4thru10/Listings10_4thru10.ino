/*
 Purpose: To write data to EEPROM memory.
  Dr. Purdum, Aug. 27, 2012
 */
#include <EEPROM.h>
#define DEBUG 1				// We want to see debug print statements
					// Comment out these lines to avoid seeing print statements
const int MAXPEOPLE = 10;
struct servicePeople {			// Structure definition for servicePeople
  int ID;
  char Name[20];
  char PW[10];
  long Phone;
};

union servicePeopleUnion {			// A union definition for myUnion
  int testID;
  struct servicePeople testServicePeople;
} myUnion;
servicePeople myPeople[MAXPEOPLE] = {	// company data for testing
  {0x3737, "This is a dummy","admin",5555555},  // ID of dummy needs to be non-zero!
  {101,"Kack Lawn Service","Clowder",2345678},
  {222,"Jane's Plants","Noah",4202513},
  {333,"Terrys Pool Service","Billings",4301832}
};
// function declarations:
void DataDump(struct servicePeople temp);
int FindEepromTop();
int ReadIntFlag();
void ReadOneRecord(int index);
void WriteFirstRecord();

int loopCounter = 0;  		// Number of passes to make through loop
int initFlag = 0;     		// Has the EEPROM been initialized?
struct servicePeople temp;		// A temporary structure 

void setup()
{
  int eepromMax;
  int i;
  
  Serial.begin(9600);
  eepromMax = FindEepromTop();  	// How much EEPROM?
#ifdef DEBUG
  Serial.print("EepromMax = ");
  Serial.println(eepromMax);
#endif
  initFlag = ReadIntFlag();  // Initialized?
#ifdef DEBUG
  Serial.print("  flag = ");
  Serial.println(initFlag);
#endif
  for (i = 0; i < MAXPEOPLE; i++) {
      WriteOneRecord(i);
  }
}
/*****
  Purpose: Find out how much EEPROM this board has.
  Parameter list:
    void
  Return value:
    int          the EEPROM size       
    Free to use: econjack 
*****/
int FindEepromTop()
{
  return E2END + 1;
}
/*****
  Purpose: This function reads the first two bytes of EEPROM and
          returns the integer found there.
  Parameter list:
    void
  Return value:
    int          0 if no records in EEPROM, 1 if there are
*****/
int ReadIntFlag()
{
  int *ptr = &myUnion.testID;
  *ptr = EEPROM.read(0);
  return myUnion.testID;
}
/*****
  Purpose: This function writes one record from the myPeople[] array
        to EEPROM
  Parameter list:
    int index      The element of the myPeople[] array to write
  Return value:
    void
*****/
void WriteOneRecord(int index)
{
  byte *b;
  int i;
  int offset = index * sizeof(servicePeople);
  
  b = (byte *) &myPeople[index];    // Going to write this record
  for (i = 0; i < sizeof(servicePeople); i++)
    EEPROM.write(i + offset, *b++);
}
void loop()
{
  static int eepromIndex = 1;  // Assume there are records
  loopCounter++;
  if (initFlag > 0) {  // There are records to read
    ReadOneRecord(eepromIndex++);
    if (myUnion.testServicePeople.ID != 0) { // Read some real data
       DataDump(myUnion.testServicePeople);
    }
  } else {
    eepromIndex++;     // Make sure loop can end with no records
  }
  #ifdef DEBUG
    Serial.println("==========");
  #endif
  if (eepromIndex == MAXPEOPLE) {
       Serial.flush();
       exit(0);
  }
}
/*****
  Purpose: This function reads one servicePerson record from
        EEPROM
  Parameter list:
    int index    The element of the myPerson[] array to read
                from EEPROM

  Return value:
    void        
*****/
void ReadOneRecord(int index)
{
  byte *bPtr;
  int i;
  int offset;
  
  offset = index * sizeof(servicePeople);  // must offset from 0 in EEPROM
  bPtr = (byte *) &myUnion.testServicePeople;          // where to place the data read
  for (i = 0; i < sizeof(temp); i++) {  // Loop through the bytes...
    *bPtr = EEPROM.read(offset + i);
    bPtr++;
  }
}
/*****
  Purpose: Sends the data stored in parameter to the serial monitor
  Parameter list:
    struct servicePeople temp    // The data to be displayed
  Return value:
    void        
*****/
void DataDump(struct servicePeople temp)
{ 
  
    Serial.println();
    Serial.print("ID = ");
    Serial.print(temp.ID);
    Serial.print("  Name = ");
    Serial.println(temp.Name);
    Serial.print("  PW = ");
    Serial.print(temp.PW);
    Serial.print("  Phone = ");
    Serial.println(temp.Phone);
}



