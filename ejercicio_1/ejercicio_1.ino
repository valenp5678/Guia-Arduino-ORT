#define VERDE      12
#define AMARILLO   11
#define ROJO       10



void setup() {
  pinMode(VERDE, OUTPUT);
  pinMode(AMARILLO, OUTPUT);
  pinMode(ROJO, OUTPUT);
}


void loop() {

    
    digitalWrite(ROJO, HIGH);
    delay(1000);
    digitalWrite(ROJO, LOW);
    digitalWrite(AMARILLO, HIGH);
    delay(1000);
    digitalWrite(AMARILLO, LOW);
    digitalWrite(VERDE, HIGH);
    delay(1000);
    digitalWrite(VERDE, LOW);
    digitalWrite(AMARILLO, HIGH);
    delay(1000);
    digitalWrite(AMARILLO, LOW);
}
