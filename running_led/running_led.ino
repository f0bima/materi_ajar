void setup() {
//  pinMode(Nomor pin, OUTPUT/INPUT);
  pinMode(2, OUTPUT);
  ledmati();
}

void loop() {
//  digitalWrite(Nomor pin, HIGH/LOW);
  
  digitalWrite(2, HIGH);
  delay(200);
  ledmati();
  digitalWrite(3, HIGH);
  delay(200);
  ledmati();
  digitalWrite(4, HIGH);
  delay(200);
  ledmati();
}

void ledmati(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

