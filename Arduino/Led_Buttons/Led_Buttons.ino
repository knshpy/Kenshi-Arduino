void setup() {
  // BUTTON 1 = TURNS ON THE LED
  // BUTTON 2 = TURNS OFF THE LED
  // BUTTON 3 = MAKE LED BLINK

  // LED
  pinMode(13, OUTPUT);
  // BUTTONS
  pinMode(2, INPUT_PULLUP); // BUTTON 1
  pinMode(3, INPUT_PULLUP); // BUTTON 2
  pinMode(4, INPUT_PULLUP); // BUTTON 3 

}

void loop() {
  if(digitalRead(2) == LOW) {
    digitalWrite(13, HIGH);
  }

  if(digitalRead(3) == LOW) {
    digitalWrite(13, LOW);
  }
  if(digitalRead(4) == LOW){
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
    
  }
}