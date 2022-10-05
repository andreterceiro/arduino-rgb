int delayTime = 250;

void setup() {
  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  writeRGB(HIGH, LOW, LOW);
  delay(delayTime);  
  writeRGB(LOW, HIGH, LOW);  
  delay(delayTime);
  writeRGB(LOW, LOW, HIGH);
  delay(delayTime);
  writeRGB(HIGH, HIGH, LOW);
  delay(delayTime);
  writeRGB(HIGH, LOW, HIGH);
  delay(delayTime);
  writeRGB(LOW, HIGH, HIGH);
  delay(delayTime);
  writeRGB(HIGH, HIGH, HIGH);
  delay(delayTime);
  

}

void writeRGB(int a, int b, int c) {
  digitalWrite(3, a);
  digitalWrite(4, b);
  digitalWrite(5, c);
}
  
