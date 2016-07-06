// define the pins to be used.
#define MAX 5000L
#define MIN 0L
#define TARGETVALUE 2500L

#define MAXRECYCLES 5
#define FOUNDITIOPIN  13
#define RECYCLEIOPIN  12
#define PAUSE 1000


int foundIt = FOUNDITIOPIN;
int recycle = RECYCLEIOPIN;
long targetValue = TARGETVALUE;
long randomNumber;
int recycleCounter = 0;
int counter = 0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize each of the digital pins as an output.
  Serial.begin(9600);
  pinMode(foundIt, OUTPUT);     
  pinMode(recycle, OUTPUT);
  randomSeed(analogRead(0)); // This seeds the random number generator

}

// the loop routine runs over and over again forever:
void loop() {

  while (counter != -1) {      // Check for negative values
    randomNumber = generateRandomNumber();
    if (randomNumber == TARGETVALUE) {
      Serial.print("Counter = ");
      Serial.print(counter, DEC);
      Serial.print("  recycleCounter = ");
      Serial.println(recycleCounter, DEC);
      digitalWrite(foundIt, HIGH);
      delay(PAUSE);
      digitalWrite(foundIt, LOW);
    }
    counter++;
    if (counter < 0) {        // We've overflowed an int
      counter = 0;
      recycleCounter++;
      Serial.print("recycleCounter = ");
      Serial.println(recycleCounter, DEC);
      digitalWrite(recycle, HIGH);
      delay(PAUSE);
      digitalWrite(recycle, LOW);
    }

    if (recycleCounter > MAXRECYCLES)
      exit(0);                    // End program
  }
}

long generateRandomNumber()
{
  return random(MIN, MAX);     // Generate random numbers between 0 and one million
}

