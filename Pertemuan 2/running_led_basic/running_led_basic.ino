void setup() {
  //  Deklarasi mode pin OUTPUT/INPUT
  //  pinMode(Nomor pin, OUTPUT/INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  //  digitalWrite(Nomor pin, HIGH/LOW);   
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(200);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(200);
}
