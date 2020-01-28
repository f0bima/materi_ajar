
void setup() {  
  //  pemanggilan fungsi tanpa parameter
  namaku();
  
  //  pemanggilan fungsi dengan parameter
  luaspersegi(5, 8); // menghitung luas persgi 5 x 8
  luaspersegi(7, 9); // menghitung luas persgi 7 x 9
}

void loop() {
  
}

void namaku(){
  //  Fungsi tanpa parameter
  Serial.println("Namaku : .........");
}

void luaspersegi(int p, int l){
  //  Fungsi dengan parameter
  int luas = p*l;
  Serial.println(luas);
}

