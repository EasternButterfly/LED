
int whiteLEDPin=7;
int blueLEDPin=5;

int whiteOnTime=500;
int whiteOffTime=500;

int blueOnTime=500;
int blueOffTime=500;

void setup() {
  pinMode(blueLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);

}

void loop() {
  digitalWrite(blueLEDPin, HIGH);
  delay(blueOnTime);
  digitalWrite(blueLEDPin, LOW);
  delay(blueOffTime);

}
