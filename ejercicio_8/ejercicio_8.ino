#define L1 2
#define B1 10
#define B2 11

int wait = 200;

void setup() {

  pinMode(L1, OUTPUT);
  pinMode(B1, INPUT_PULLUP);
  pinMode(B2, INPUT_PULLUP);
  Serial.begin(115200);

}

void loop() {

  Serial.println(wait);
  if(digitalRead(B1) == 0){
    wait = wait + 10;
  }
  if(digitalRead(B2) == 0){
    wait = wait - 10;
  }
  if(wait < 20){
    wait = 20;
  }
  digitalWrite(L1, HIGH);
  delay(wait);
  digitalWrite(L1, LOW);
  delay(wait);

}
