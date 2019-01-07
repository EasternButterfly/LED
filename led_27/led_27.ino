
int whiteLEDPin=7;
int blueLEDPin=5;                        // Working with string

int whiteOnTime=400;
int whiteOffTime=400;

int blueOnTime=400;
int blueOffTime=400;

int numwhiteBlink;
int numblueBlink;

String whiteMessage="White LED is blinking!";   //Declaring string variable
String blueMessage="Blue LED is blinking!";


void setup() {
  Serial.begin(9600);
  pinMode(whiteLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
  
  Serial.println("How many times white");
  while (Serial.available()==0){ }
  numwhiteBlink = Serial.parseInt();
  
  
  
}

void loop() {
  
  Serial.println(whiteMessage);  //Printing what's happening
  for (int j=1; j<=numwhiteBlink; j=j+1) {
  Serial.print("  You are on Blink # ");   //Printing character before j
  Serial.println(j);
  digitalWrite(whiteLEDPin, HIGH);
  delay(whiteOnTime);
  digitalWrite(whiteLEDPin, LOW);
  delay(whiteOffTime);
  }

  Serial.println(" ");   //Print blank line

  Serial.println(blueMessage);
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
