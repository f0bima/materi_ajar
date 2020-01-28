int ini_int;

void setup() {  
  Serial.begin(9600);
  
  ini_int = 5;
  
  if(ini_int > 10){
    //  Jika ini_int lebih dari 10 
    Serial.println("Lebih Besar");
  }
  
  else if(ini_int < 10){
    //  Jika ini_int kurang dari 10 
    Serial.println("Lebih Kecil");
  }
  
  else{
    //  Jika semua syarat tidak terpenuhi
    Serial.println("Sama Dengan 10");
  }
}

void loop() {  

}
