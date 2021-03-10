int R = 2;
int G = 1;
int B = 0;
int tempo = 300;

void setup() {
    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    digitalWrite(3, LOW);
}

void loop(){
    brilharBranco();
    delay(tempo);
    brilharVermelho();
    delay(tempo);
    brilharVerde();
    delay(tempo);
    brilharAzul();
    delay(tempo);
    brilharVioleta();
    delay(tempo);
    brilharAnis();
    delay(tempo);
    brilharAmarelo();
    delay(tempo);
}

void brilharBranco() {
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
}

void brilharVermelho() {
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
}

void brilharVerde() {
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
}

void brilharAzul() {
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
}

void brilharAmarelo() {
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
}

void brilharAnis() {
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
}

void brilharVioleta() {
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
}

