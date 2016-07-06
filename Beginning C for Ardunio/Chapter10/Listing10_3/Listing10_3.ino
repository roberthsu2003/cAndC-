/* 
  Purpose: To show the use of pointers to structures
  Dr. Purdum, Aug. 25, 2012
*/


struct servicePeople {
  int ID;
  char Name[20];
  char PW[10];
  long Phone;
} myServicePeople, yourServicePeople;
void SetPhoneNumber(struct servicePeople *temp);	// New signature declaration
void setup() {
  Serial.begin(9600);
  Serial.print("myServicePeople lvalue: ");
  Serial.print((int) &myServicePeople);
  Serial.print("  yourServicePeople lvalue: ");
  Serial.println((int) &yourServicePeople);
  yourServicePeople.ID = 205;
  Serial.print("myServicePeople.ID rvalue: ");
  Serial.print(myServicePeople.ID);
  Serial.print("  yourServicePeople.ID rvalue: ");
  Serial.println(yourServicePeople.ID);
  SetPhoneNumber(&myServicePeople);                    // Pass the lvalue
  Serial.println("After assignment:");
  Serial.print("myServicePeople.ID rvalue: ");
  Serial.print(myServicePeople.ID);
  Serial.print("  yourServicePeople.ID rvalue: ");
  Serial.println(yourServicePeople.ID);
  Serial.print("A servicePerson structure takes ");
  Serial.print(sizeof(servicePeople));
  Serial.println(" bytes of storage.");
  Serial.print("myServicePeople.Phone rvalue: ");  // New
  Serial.println(myServicePeople.Phone);             // New 
  Serial.print("yourServicePeople.Phone rvalue: ");  
  Serial.println(yourServicePeople.Phone);             
} 
void loop(){

}

// Lines below are changed
void SetPhoneNumber(struct servicePeople *temp)
{
  (*temp).Phone = 2345678;
}

