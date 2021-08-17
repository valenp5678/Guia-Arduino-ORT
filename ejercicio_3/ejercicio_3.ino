#define L1   2
#define L2   3
#define L3   4
#define L4   5
#define L5   6
#define L6   7
#define L7   8
#define L8   9

#define B1   10
#define B2   11

int estado;
int pressedB1;
int pressedB2;



void setup() {
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(L5, OUTPUT);
  pinMode(L6, OUTPUT);
  pinMode(L7, OUTPUT);
  pinMode(L8, OUTPUT);
  pinMode(B1, INPUT_PULLUP);
  pinMode(B2, INPUT_PULLUP);
  Serial.begin(9600);
  estado = 0;
}


void loop() {

  Serial.println(estado);
  Serial.println(pressedB1);
  clean();
  pressedB1 = digitalRead(B1);
  pressedB2 = digitalRead(B2);

  if (pressedB1 == LOW) {
    estado = 2;
  } else if (pressedB2 == LOW) {
    estado = 3;
  } else if (pressedB1 && pressedB2 == HIGH) {
    estado = 1;
  }


  switch (estado) {
    case 1:

      Serial.println("case: 1");
      clean();

      break;

    case 2:
      Serial.println("case: 2");



      digitalWrite(L1, LOW);
      digitalWrite(L5, HIGH);

      digitalWrite(L2, HIGH);
      digitalWrite(L6, LOW);

      digitalWrite(L3, HIGH);
      digitalWrite(L7, LOW);

      digitalWrite(L4, LOW);
      digitalWrite(L8, HIGH);

      delay(1000);

      digitalWrite(L1, HIGH);
      digitalWrite(L5, LOW);

      digitalWrite(L2, LOW);
      digitalWrite(L6, HIGH);

      digitalWrite(L3, LOW);
      digitalWrite(L7, HIGH);

      digitalWrite(L4, HIGH);
      digitalWrite(L8, LOW);


      delay(1000);

      break;

    case 3:
      Serial.println("case: 3");


      digitalWrite(L1, HIGH);
      digitalWrite(L2, HIGH);

      digitalWrite(L5, LOW);
      digitalWrite(L6, LOW);

      digitalWrite(L3, LOW);
      digitalWrite(L4, LOW);

      digitalWrite(L7, HIGH);
      digitalWrite(L8, HIGH);

      delay(1000);

      digitalWrite(L1, LOW);
      digitalWrite(L2, LOW);

      digitalWrite(L5, HIGH);
      digitalWrite(L6, HIGH);

      digitalWrite(L3, HIGH);
      digitalWrite(L4, HIGH);

      digitalWrite(L7, LOW);
      digitalWrite(L8, LOW);

      delay(1000);

      break;

  }

}

void clean() {

  digitalWrite(L1, LOW);
  digitalWrite(L2, LOW);
  digitalWrite(L3, LOW);
  digitalWrite(L4, LOW);
  digitalWrite(L5, LOW);
  digitalWrite(L6, LOW);
  digitalWrite(L7, LOW);
  digitalWrite(L8, LOW);

}
