/*
  Purpose: illustrate how you can use an array of pointers to 
    functions.
  Dr. Purdum, 8/22/2012
*/
enum temperatures {TOOCOLD, TOOHOT, JUSTRIGHT};
enum temperatures whichAction;

const int COLD = 235;
const int HOT = 260;

void setup() {
  Serial.begin(9600);         // Serial link to PC
  randomSeed(analogRead(0));  // Seed random number generator
}

void loop() {
  static void (*funcPtr[])() = {TurnUpTemp, TurnDownTemp, PourCandy};
  static int iterations = 0;
  int temp;
 
  temp = ReadVatTemp();
  whichAction = (enum temperatures) WhichOperation(temp);
  (*funcPtr[whichAction])();
  if (iterations++ > 10) {
    Serial.println("===================");
    Serial.flush();
    exit(0);
  }
}

/*****
  Purpose: decide whether to turn up heat, turn down heat, or if
    vat is ready. Pourable candy is between 235 and 260.
  Parameter list:
    int temp      the current vat temperature
  Return value:
    int           0 = temp too cold, 1 = temp too high, 2 = just right
*****/

int WhichOperation(int temp)
{
  Serial.print("temp is ");
  Serial.print(temp);
  if (temp < COLD) {
    return TOOCOLD;
  } else {
    if (temp > HOT) {
      return TOOHOT;
    } else 
      return JUSTRIGHT;
  }
}

/*****
  Purpose: simulate reading a vat's temperature. Values are 
    constrained between 100 and 325 degrees
  Parameter list:
    void
    
  Return value:
    int           the temperature
*****/
int ReadVatTemp()
{
  return random(100, 325);
}

void TurnUpTemp()
{
  Serial.println(" in TurnUpTemp()");
}

void TurnDownTemp()
{
  Serial.println(" in TurnDownTemp()");
}

void PourCandy()
{
  Serial.println(" in PourCandy()");
}

