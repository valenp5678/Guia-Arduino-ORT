#define L1   2

#define B1   11

int estado;
int contador;

void setup() {

  pinMode(L1, OUTPUT);
  pinMode(B1, INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {

  Serial.println(contador);
  estado = digitalRead(B1);
  if (estado == LOW) {
    delay(100);
    while(!digitalRead(B1));
    contador = contador + 1;

  }

  if (contador == 3) {
    digitalWrite(L1, HIGH);
  }
  if (contador == 4) {
    digitalWrite(L1, LOW);
    contador = 0;
  }

}
