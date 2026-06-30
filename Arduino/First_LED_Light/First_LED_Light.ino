// My first time lightning a LED with microcontrollers
// First Hello World! in embedded

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  // LED HIGH = TURN ON
  digitalWrite(13, HIGH);
  delay(500);

  digitalWrite(12, HIGH);
  delay(500);

  digitalWrite(11, HIGH);
  delay(500);

  // LED LOW = TURN OFF
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);

  delay(1000);

}
