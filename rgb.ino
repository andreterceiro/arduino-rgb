float s;
const int seletor = A3; 
const int Bar_G = 8;
const int Bar_Y1 = 7;
const int Bar_Y2 = A5;
const int Bar_R = A4;
const int intervalo = 1000;

float ler_sensor() {
  return analogRead(A1);
}

void setup() {
  pinMode(Bar_R, OUTPUT);
  pinMode(Bar_G, OUTPUT);
  pinMode(Bar_Y1, OUTPUT);
  pinMode(Bar_Y2, OUTPUT);
  pinMode(seletor, OUTPUT);
  digitalWrite(seletor, HIGH);
}

void loop() {
  s = ler_sensor();
  
  if (s > 10) {
    digitalWrite(Bar_R, HIGH);
    digitalWrite(Bar_Y2, LOW);
    delay(intervalo);
  } else {
    digitalWrite(Bar_Y2, HIGH);
    digitalWrite(Bar_R, LOW);
    delay(intervalo);
  }
}
