
int whiteLEDPin=7;
int blueLEDPin=5;

int whiteOnTime=400;
int whiteOffTime=400;

int blueOnTime=400;
int blueOffTime=400;

int numwhiteBlink=3;
int numblueBlink=3;

void setup() {
  Serial.begin(9600);
  pinMode(whiteLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);

}

void loop() {
  Serial.println("White LED is blinking!");  //Printing what's happening
  for (int j=1; j<=numwhiteBlink; j=j+1) {
  Serial.print("  You are on Blink # ");   //Printing character before j
  Serial.println(j);
  digitalWrite(whiteLEDPin, HIGH);
  delay(whiteOnTime);
  digitalWrite(whiteLEDPin, LOW);
  delay(whiteOffTime);
  }

  Serial.println(" ");   //Print blank line

  Serial.println("White BLUE is blinking!");
  for (int j=1; j<=numblueBlink; j=j+1) {
  Serial.print("  You are on Blink # ");
  Serial.println(j);
  digitalWrite(blueLEDPin, HIGH);
  delay(blueOnTime);
  digitalWrite(blueLEDPin, LOW);
  delay(blueOffTime);
  }
  Serial.println(" ");

}