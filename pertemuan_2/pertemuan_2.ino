int ini_int;
void setup() {
  Serial.begin(9600);
  
  ini_int = 5;
  
  Serial.println("Ini Setup");  

  perulangan1();
  perulangan1();  

  luaspersegi(5, 10);
  luaspersegi(50, 100);
       
}

void loop() {
    
//  Serial.println(ini_int);
//  ini_int = ini_int + 5;
//  delay(1000);

}

void perulangan1(){  
  for(int i=0; i<5; i++){
    Serial.println(i);
  }  
}

void perulangan2(){  
  while(ini_int<10){
    Serial.println(ini_int);
    ini_int++;
  }
}

void luaspersegi(int p, int l){
  int luas = p*l;
  Serial.println(luas);
}

void pengandaian(){
    if(ini_int > 10){
    Serial.println("Lebih Besar");
  }

  else if(ini_int < 10){
    Serial.println("Lebih Kecil");
  }
  
  else{
    Serial.println("Sama Dengan 10");
  }
}

