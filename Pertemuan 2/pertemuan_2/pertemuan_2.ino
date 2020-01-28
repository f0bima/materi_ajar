// https://github.com/f0bima/materi_ajar

int ini_int;
void setup() {
  Serial.begin(9600);
  
  ini_int = 5;
  
  Serial.println("Ini Setup");  

//Contoh pemanggilan fungsi
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
//  Contoh perulangan dengan for
  for(int i=0; i<5; i++){
    Serial.println(i);
  }  
}

void perulangan2(){  
//  Contoh perulangan dengan while
  while(ini_int<10){
    Serial.println(ini_int);
    ini_int++;
  }
}

//  Contoh fungsi
void luaspersegi(int p, int l){
  int luas = p*l;
  Serial.println(luas);
}

void pengandaian(){
//  Contoh Pengandaian dengan if
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

