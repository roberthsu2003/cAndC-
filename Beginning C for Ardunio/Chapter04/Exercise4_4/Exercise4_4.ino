/*
  Heads or Tails
  Turns on an LED which represents head or tails. The LED 
  remains on for about 3 seconds and the cycle repeats.
   Dr. Purdum, July 12, 2012
 */
 
// define the pins to be used.
#define SENDMESSAGEAFTERTHISMANYTOSSES 100
#define TESTSTORUN 50000
#define HEADIOPIN  13
#define TAILIOPIN  12

int head = HEADIOPIN;
int tail = TAILIOPIN;
long randomNumber = 0L;
long headCount = 0L;
long tailCount = 0L;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize each of the digital pins as an output.
  Serial.begin(9600);
  pinMode(head, OUTPUT);     
  pinMode(tail, OUTPUT);
  randomSeed(analogRead(0)); // This seeds the random number generator
}

// the loop routine runs over and over again forever:
void loop() {
  randomNumber = generateRandomNumber();
  digitalWrite(head, LOW);      // Turn both LEDs off
  digitalWrite(tail, LOW);

  if (randomNumber % 2 == 1) {  // Treat odd numbers as a head
    digitalWrite(head, HIGH);
    headCount++;
  } else {
     digitalWrite(tail, HIGH);  // Even numbers are a tail
     tailCount++;
  }
 
  if ( (headCount + tailCount) % SENDMESSAGEAFTERTHISMANYTOSSES == 0) {
    Serial.print("Heads = ");
    Serial.print(headCount);
    Serial.print("   tails = ");
    Serial.println(tailCount);
  }
  if (headCount + tailCount > TESTSTORUN) {
    Serial.flush();
    exit(0);
   }
}

long generateRandomNumber()
{
  return random(0, 1000000);     // Generate random numbers between 0 and one million
}

