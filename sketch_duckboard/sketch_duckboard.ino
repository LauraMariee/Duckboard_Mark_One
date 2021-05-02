const int buttonPin = 8;
const int outPin =  7;

int buttonState = 0;

void setup() {
  pinMode(outPin, OUTPUT);
  digitalWrite(outPin, HIGH);
  
  pinMode(buttonPin, INPUT);

  Serial.begin(9600);
  Serial.println("\n\noh hi\n\n");
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    Serial.println("YEET");
  } else {
    Serial.println("----");
  }
  delay(500);
}
