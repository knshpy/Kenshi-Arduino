void setup() {
  // CarSignal V1 in Arduino 
  // LEDs
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  // BUTTONS
  pinMode(2, INPUT_PULLUP); // RIGHT LIGHT
  pinMode(3, INPUT_PULLUP); // HAZARD LIGHT
  pinMode(4, INPUT_PULLUP); // LEFT LIGHT
  pinMode(5, INPUT_PULLUP); // EJECT BUTTON

}

void loop() {

  // LEFT SIGNAL
  if (digitalRead(2) == LOW) { 
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    delay(400);
    digitalWrite(13, LOW);
    delay(400); 
    digitalWrite(13, HIGH);
    delay(400);
    digitalWrite(13, LOW);
    delay(400);
    digitalWrite(13, HIGH);
    delay(400);
    digitalWrite(13, LOW);
    delay(400); 
    digitalWrite(13, HIGH);
  }

  // HAZARD SIGNAL
  if (digitalRead(3) == LOW) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    delay(400);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    delay(400); 
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    delay(400);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    delay(400);
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    delay(400);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    delay(400); 
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
  }

  // RIGHT SIGNAL
  if (digitalRead(4) == LOW) {
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(400);
    digitalWrite(12, LOW);
    delay(400); 
    digitalWrite(12, HIGH);
    delay(400);
    digitalWrite(12, LOW);
    delay(400);
    digitalWrite(12, HIGH);
    delay(400);
    digitalWrite(12, LOW);
    delay(400); 
    digitalWrite(12, HIGH);
  }

  // TURN OFF SIGNAL LIGHTS (EJECT)
  if (digitalRead(5) == LOW) {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
  }
}