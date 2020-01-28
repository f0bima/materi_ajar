void setup() {
//  pinMode(Nomor pin, OUTPUT/INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  ledmati();
}

void loop() {
//  digitalWrite(Nomor pin, HIGH/LOW);
  
  lednyala(2);
  lednyala(3);
  lednyala(4);
}

void ledmati(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void lednyala(int pin){
  digitalWrite(pin, HIGH);
  delay(200);
  ledmati();
}

