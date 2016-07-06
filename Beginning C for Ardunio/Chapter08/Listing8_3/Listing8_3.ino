/*
  Purpose: Display a character array using array indexes
  Dr. Purdum, August 14, 2012
 */
  
void setup() {                
  // So we can communicate with the PC
  Serial.begin(9600);   
}


void loop() {
  char greet[6];
  int i;
  
  greet[0] = 'H';	// Initialize the array with some characters
  greet[1] = 'e';
  greet[2] = 'l';
  greet[3] = 'l';
  greet[4] = 'o';
  greet[5] = '\0';
 
  for (i = 0; i < 5; i++) {
    Serial.print(greet[i]);
  }
  Serial.flush();  // Make sure all the data is sent...
  exit(0);
}

