#define VERDE      2
#define AMARILLO   3
#define ROJO       4

#define BOTON      10



void setup() {
  pinMode(VERDE, OUTPUT);
  pinMode(AMARILLO, OUTPUT);
  pinMode(ROJO, OUTPUT);
  pinMode(BOTON, INPUT_PULLUP);
  
  Serial.begin(9600);
}


void loop() {

  if (int estado = digitalRead(BOTON) == LOW) {
    Serial.println("Boton Encendido");
    digitalWrite(ROJO, LOW);
    digitalWrite(AMARILLO, LOW);
    
    delay(1000);
    digitalWrite(VERDE, LOW);
    delay(1000);
    digitalWrite(AMARILLO, HIGH);
    delay(1000);
    digitalWrite(AMARILLO, LOW);
    delay(1000);
    digitalWrite(ROJO, HIGH);
    delay(5000);
    digitalWrite(ROJO, LOW);
    delay(1000);
    digitalWrite(AMARILLO, HIGH);
    delay(1000);
    digitalWrite(AMARILLO, LOW);
    delay(1000);
    digitalWrite(VERDE, HIGH);   
  } else {
    digitalWrite(VERDE, HIGH);
    Serial.println("Boton Apagado");
  }
}
