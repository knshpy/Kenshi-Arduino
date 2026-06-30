int LED1 = 13;
int LED2 = 12;
int LED3 = 11;

void setup() {
  // HIGH FOR ON / LOW FOR OFF
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {

  // THIS IS ARDUINO LED CONTROLLING MAKING WAVE AND BLINKING LED
  // LED WAVE

  // 1 Wave - Left to Right (ON) 
  digitalWrite(13, HIGH);
  delay(300);
  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(11, HIGH);
  delay(300);

  // 1 Wave - Left to Right (OFF)
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(12, LOW);
  delay(100);
  digitalWrite(11, LOW);
  delay(200);

  // 2 Wave - Right to Left (ON)
  digitalWrite(11, HIGH);
  delay(300);
  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(13, HIGH);
  delay(300);

  // 2 Wave - Right to Left (OFF)
  digitalWrite(11, LOW);
  delay(100);
  digitalWrite(12, LOW);
  delay(100);
  digitalWrite(13, LOW);
  delay(200);

  // 3 Wave - Left to Right (ON) 
  digitalWrite(13, HIGH);
  delay(300);
  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(11, HIGH);
  delay(300);

  // 3 Wave - Left to Right (ON) 
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(12, LOW);
  delay(100);
  digitalWrite(11, LOW);
  delay(200);

  // 4 Wave - Right to Left (ON)
  digitalWrite(11, HIGH);
  delay(300);
  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(13, HIGH);
  delay(300);

  // 4 Wave - Right to Left (ON)
  digitalWrite(11, LOW);
  delay(100);
  digitalWrite(12, LOW);
  delay(100);
  digitalWrite(13, LOW);
  delay(200);

  // 5 Wave - Left to Right (OFF)
  digitalWrite(13, HIGH);
  delay(300);
  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(11, HIGH);
  delay(300);

  // 5 Wave - Left to Right (OFF)
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(12, LOW);
  delay(100);
  digitalWrite(11, LOW);
  delay(200);

  // 6 Wave - Right to Left (ON)
  digitalWrite(11, HIGH);
  delay(300);
  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(13, HIGH);
  delay(300);

  // 6 Wave - Right to Left (ON)
  digitalWrite(11, LOW);
  delay(100);
  digitalWrite(12, LOW);
  delay(100);
  digitalWrite(13, LOW);
  delay(400);
  
  // The end of LED Wave and the beginning of LED Blink

  // LED BLINK

  // 1st Blink
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(400);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);

  delay(1000);
 
  // 2nd Blink
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(400);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);

  delay(1000);

  // 3rd Blink
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(400);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);

  delay(1000);

  // 4th Blink
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(400);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);

  delay(1000);

}