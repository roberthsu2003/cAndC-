/*
  Purpose: To illustrate the relationship between two-dimensional
    arrays and pointers.
    Dr. Purdum, August 21, 2012
  */
#define DAYSINWEEK 7
#define CHARSINDAY 10

static char days[DAYSINWEEK][CHARSINDAY] = 
     {"Sunday", "Monday", "Tuesday","Wednesday", 
      "Thursday", "Friday", "Saturday"};


void setup() {
  Serial.begin(9600);   // Serial link to PC
}

void loop() {
  int i, j;
  for (i = 0; i < DAYSINWEEK; i++) {
    Serial.print((int) &days[i][0]);  // Show the lvalue
    Serial.print(" ");
    for (j = 0; days[i][j]; j++) {
      Serial.print(days[i][j]);    // Show one char
    }
    Serial.println();
  }
  Serial.flush();
  exit(0);  
}

