int pin0;
int output;
void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop() {  
  pin0 = analogRead(0);
  //       map(nilai input, nilai_min_input, nilai_max_input, nilai_min_output, nilai_max_output)
  output = map(pin0, 0 , 1023, 0, 255);
  
  analogWrite(3, output);
  
  delay(200);
}

