#define L1 2
#define B1 11

int estado;
int pulsaciones;

void setup() {

  pinMode(L1, OUTPUT);
  pinMode(B1, INPUT_PULLUP);
  Serial.begin(9600);



}

void loop() {

  if (pulsaciones <= 1) {
    if (digitalRead(B1) == LOW)
    {
      while (digitalRead(B1) == LOW) {}
      pulsaciones++;
    }
  }
  if (pulsaciones == 1) {
    digitalWrite(L1, HIGH);
    delay(1000);
    digitalWrite(L1, LOW);
    delay(1000);
  }else{
    digitalWrite(L1, LOW);
  }
  if (pulsaciones > 1) {
    pulsaciones = 0;

  }

  Serial.println(pulsaciones);

}
