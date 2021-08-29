#define L1 2
#define L2 3
#define L3 4
#define L4 5
#define L5 6
#define L6 7
#define L7 8
#define L8 9
#define B1 10
#define B2 11

int LED = 2;
int lectura_boton;
int lectura_boton2;

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


}

void loop() {

  digitalWrite(LED, HIGH);

  if (digitalRead(B1) == 0) {
    delay(200);
    clean();
    LED += 1;
  }


  if (digitalRead(B2) == 0) {
    delay(200);
    clean();
    LED -= 1;
  }

  if(LED > 9){
    LED = 9;
  }
  if(LED < 2){
    LED = 2;
  }

}


void clean() {

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);

}
