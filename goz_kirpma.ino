/*
Göz Kırpa  (Blink)
Furkan Esmeyar
 */



void setup() {

  pinMode(13, OUTPUT);  
  //  13 nolu pinin giriş olup olmadığını belitriyoruz. Örn: OUTPUT = Çıkış , INPUT = Giriş .
}


void loop() {
  digitalWrite(13, HIGH);   // 13. Pine Güç Veriyoruz.
  delay(1000);              // 1 Saniye Bekleme 1000 = 1 saniyeye eşittir.
  digitalWrite(13, LOW);    // 13. Pine giden gücü kesiyoruz.
  delay(1000);              // 1 Saniye Bekleme
// Dongü loop pun başına geçerek sonsuza kadar dönüyor.
}
