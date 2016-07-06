/*
  Heads or Tails
  Turns on an LED which represents head or tails. The LED 
  remains on for about 3 seconds and the cycle repeats.
 
   Dr. Purdum, July 12, 2012
 */
 
// define the pins to be used.
// give it a name:

#define HEADIOPIN 13	// Which I/O pins are we using?
#define TAILIOPIN 12

#define PAUSE 3000	// How long to delay?
#define REST 2000

int head = HEADIOPIN;
int tail = TAILIOPIN;
long randomNumber = 0L;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize each of the digital pins as an output.
  pinMode(head, OUTPUT);     
  pinMode(tail, OUTPUT);
  randomSeed(analogRead(0)); // This seeds the random number generator
}

// the loop routine runs over and over again forever:
void loop() {

  randomNumber = generateRandomNumber();
  digitalWrite(head, LOW);      // Turn both LED's off
  digitalWrite(tail, LOW);
  delay(PAUSE - REST);          // Let them see both are off for a time slice
  if (randomNumber % 2 == 1) {  // Treat odd numbers as a head
    digitalWrite(head, HIGH);
  } else {
    digitalWrite(tail, HIGH);  // Even numbers are a tail
  }
  delay(PAUSE);                  // Pause for 3 seconds
}

long generateRandomNumber()
{
  return random(0, 1000000);		// Generate random numbers between 0 and one million
}

