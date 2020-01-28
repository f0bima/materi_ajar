int ini_int = 5;

void setup() {
  //  Banyaknya perulangan diketahui
  for(int i=0; i<5; i++){
    Serial.println(i);
  }  

  //  Banyaknya perulangan tidak diketahui
  while(ini_int<10){
    Serial.println(ini_int);
    ini_int++;
  }

}

void loop() {
  
}
