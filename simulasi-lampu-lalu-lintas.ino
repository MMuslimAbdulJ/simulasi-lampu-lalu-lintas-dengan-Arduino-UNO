int pinArray[4][3] = {
    {2,3,4},{5,6,7},{8,9,10},{11,12,13}
  };
int waktu = 500;
void setup()
{
  for(int i=0; i<4; i++){
    for(int j=0; j<3;j++){
      pinMode(pinArray[i][j], OUTPUT);
    }
  }
  
}

//prototype
void lalin1();
void lalin2();
void lalin3();
void lalin4();

void loop()
{
  //menyalakan lampu Lalin breadboard 1
  lalin1();
  
  //menyalakan lampu Lalin breadboard 2
  lalin2();
  
  //menyalakan lampu Lalin breadboard 3
  lalin3();

  //menyalakan lampu Lalin breadboard 4
  lalin4();
}

//void func
void lalin1(){
  //lampu hijau menyala di BB1 selama 30 detik
  digitalWrite(pinArray[0][0], HIGH); //BB1 Hijau nyala
  digitalWrite(pinArray[1][2], HIGH); //BB2 Merah nyala
  digitalWrite(pinArray[2][2], HIGH); //BB3 Merah nyala
  digitalWrite(pinArray[3][2], HIGH); //BB4 Merah nyala
  delay(3000);
  digitalWrite(pinArray[0][0], LOW);
  delay(500);
  digitalWrite(pinArray[0][1], HIGH);//lampu warna kuning di BB1 menyala selama 5 detik
  delay(2000);
  digitalWrite(pinArray[0][1], LOW);
  delay(500);

  //semua lampu merah mati
  digitalWrite(pinArray[1][2], LOW);
  digitalWrite(pinArray[2][2], LOW);
  digitalWrite(pinArray[3][2], LOW);
  //delay(500);
}

void lalin2(){
  //lampu hijau menyala di BB1 selama 30 detik
  digitalWrite(pinArray[1][0], HIGH); //BB1 Hijau nyala
  digitalWrite(pinArray[0][2], HIGH); //BB2 Merah nyala
  digitalWrite(pinArray[2][2], HIGH); //BB3 Merah nyala
  digitalWrite(pinArray[3][2], HIGH); //BB4 Merah nyala
  delay(3000);
  digitalWrite(pinArray[1][0], LOW);
  delay(500);
  digitalWrite(pinArray[1][1], HIGH);//lampu warna kuning di BB2 menyala selama 5 detik
  delay(2000);
  digitalWrite(pinArray[1][1], LOW);
  delay(500);

  //semua lampu merah mati
  digitalWrite(pinArray[0][2], LOW);
  digitalWrite(pinArray[2][2], LOW);
  digitalWrite(pinArray[3][2], LOW);
  //delay(500);
}

void lalin3(){
  //lampu hijau menyala di BB1 selama 30 detik
  digitalWrite(pinArray[2][0], HIGH); //BB1 Hijau nyala
  digitalWrite(pinArray[1][2], HIGH); //BB2 Merah nyala
  digitalWrite(pinArray[0][2], HIGH); //BB3 Merah nyala
  digitalWrite(pinArray[3][2], HIGH); //BB4 Merah nyala
  delay(3000);
  digitalWrite(pinArray[2][0], LOW);
  delay(500);
  digitalWrite(pinArray[2][1], HIGH);//lampu warna kuning di BB3 menyala selama 5 detik
  delay(2000);
  digitalWrite(pinArray[2][1], LOW);
  delay(500);

  //semua lampu merah mati
  digitalWrite(pinArray[1][2], LOW);
  digitalWrite(pinArray[0][2], LOW);
  digitalWrite(pinArray[3][2], LOW);
  //delay(500);
}

void lalin4(){
  //lampu hijau menyala di BB1 selama 30 detik
  digitalWrite(pinArray[3][0], HIGH); //BB1 Hijau nyala
  digitalWrite(pinArray[2][2], HIGH); //BB2 Merah nyala
  digitalWrite(pinArray[1][2], HIGH); //BB3 Merah nyala
  digitalWrite(pinArray[0][2], HIGH); //BB4 Merah nyala
  delay(3000);
  digitalWrite(pinArray[3][0], LOW);
  delay(500);
  digitalWrite(pinArray[3][1], HIGH);//lampu warna kuning di BB4 menyala selama 5 detik
  delay(2000);
  digitalWrite(pinArray[3][1], LOW);
  delay(500);

  //semua lampu merah mati
  digitalWrite(pinArray[2][2], LOW);
  digitalWrite(pinArray[1][2], LOW);
  digitalWrite(pinArray[0][2], LOW);
  //delay(500);
}
