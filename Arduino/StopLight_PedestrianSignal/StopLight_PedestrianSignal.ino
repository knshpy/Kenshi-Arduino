void setup() {
  // Stoplight in Arduino
  // Light sequence below:
  // Car GO & people STOP - Car STOP & people GO

  // STOPLIGHT
  pinMode(9, OUTPUT); // Green L
  pinMode(10, OUTPUT); // Yellow L 
  pinMode(11, OUTPUT); // Red L
  // PEDESTRIAN SIGNAL LIGHT
  pinMode(12, OUTPUT); // Green L
  pinMode(13, OUTPUT); // Red L

}

void loop() {
  digitalWrite(9, HIGH);  digitalWrite(13, HIGH); // STOPLIGHT GREEN | PEDESTRIAN RED
  delay(5000); // 5 seconds           
  digitalWrite(9, LOW);   

  digitalWrite(10, HIGH); // YELLOW LIGHT STOPLIGHT
  delay(1500); // 1.5 seconds            
  digitalWrite(10, LOW);  digitalWrite(13, LOW);

  digitalWrite(11, HIGH); digitalWrite(12, HIGH); // STOPLIGHT RED | PEDESTRIAN GREEN
  delay(5000); // 5 seconds            
  digitalWrite(10, HIGH); // YELLOW LIGHT STOPLIGHT
  delay(1000); // 1 seconds
  digitalWrite(11, LOW);  digitalWrite(12, LOW);          
  digitalWrite(10, LOW);

  // AND THEN REPEAT

}