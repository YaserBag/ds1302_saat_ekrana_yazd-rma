
#include <MyRealTimeClock.h>   //Kütüphanemizi programa ekliyoruz

MyRealTimeClock myRTC(6, 7, 8); //Kullanacağımız pinleri belirtiyoruz

 

void setup()  {
Serial.begin(9600);

//Saati Ayarlıyoruz

myRTC.setDS1302Time(00, 06, 22, 6, 21, 04 , 2018);

//Saati Ayarlıyoruz

}

void loop()  {

myRTC.updateTime(); //Saati okuyoruz

//Okunan saati monitöre yazdırıyoruz.
Serial.print(myRTC.dayofmonth); // Gün
Serial.print("/");
Serial.print(myRTC.month); // Ay
Serial.print("/");
Serial.print(myRTC.year); // Yıl
Serial.print(" ");
Serial.print(myRTC.hours); // Saat
Serial.print(":");
Serial.print(myRTC.minutes); // Dakika
Serial.print(":");
Serial.println(myRTC.seconds); // Saniye
delay( 5000);
}
