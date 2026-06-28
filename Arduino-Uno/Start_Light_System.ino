void setup() {
  // Racing light countdown in Arduino
  // LED ALL (RED)
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  // BUTTON
  pinMode(2, INPUT_PULLUP);
  // PIEZO BUZZER
  pinMode(8, OUTPUT);

}

void loop() {
  if (digitalRead(2) == LOW) { // Press the button = 5 LED will light 1 by 1
    digitalWrite(9, HIGH);
    delay(1000);
    digitalWrite(10, HIGH);
    delay(1000);
    digitalWrite(11, HIGH);
    delay(1000);
    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(13, HIGH);
    delay(1000);

    delay(2000); // Wait for light to turn off

    // All lights went down = GO!
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);

    tone(8, 1500, 400); // Make sounds signal of GO!

    delay(2000); // Safety for pressing the button again

  }
}
