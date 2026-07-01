unsigned long startTime = 0; // RECORDS THE TIME WHEN BUTTON IS PRESSED
unsigned long currentTime = 0; // CONTINUEOSLY COUNT THE DURATION OF PRESS ON THE BUTTON
bool isPressed = false; // SWITCH OFF

void setup() {
  pinMode(13, OUTPUT); // LED
  pinMode(12, OUTPUT); // LED
  pinMode(2, INPUT_PULLUP); // BUTTON

}

void loop() {
  if(digitalRead(2) == LOW && isPressed == false) {
    startTime = millis(); // START WEH BUTTON IS PRESSED
    isPressed = true; // PRESSED BUTTON
  }

  currentTime = millis(); // COUNTS THE SECONDS 

  // HOLD THE BUTTON = TURN ON
  if (isPressed == true && (currentTime - startTime >= 1)) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
  }

  // LET GO OF THE BUTTON = TURN OFF
  if(digitalRead(2) == HIGH) { 
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    isPressed = false; // SWITCH OFF
  }
}
