/*
  Purpose: Display an int array using array indexes
  Dr. Purdum, August 13, 2012
 */
  
void setup() {                
  // So we can communicate with the PC
  Serial.begin(9600);   
}

void loop() {
  int greet[6];		// Notice this is an int now
  int *ptr;		// ...as is this
  int i;
  
  greet[0] = 0;	// Numbers now...
  greet[1] = 1;
  greet[2] = 2;
  greet[3] = 3;
  greet[4] = 4;
  greet[5] = 5;
 
  ptr = greet;
  for (i = 0; i < 5; i++) {
    Serial.print(greet[i]);
  }
  Serial.flush();  // Make sure all the data is sent...
  exit(0);
}

