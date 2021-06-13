// Merah 1000ms - Kuning, Hijau off
// Kuning 200ms - Meah, Hijau off
// Hijau 2000ms - Merah, Kuning off

int redPin = 10;
int yellowPin = 9;
int greenPin = 8;
void setup()
{
 pinMode(redPin, OUTPUT);
 pinMode(yellowPin, OUTPUT);
 pinMode(greenPin, OUTPUT);
}
void loop()
{
 digitalWrite(redPin, HIGH); //Set pin Merah menjadi on
 delay(1000); //Jeda 1 detik
 digitalWrite(yellowPin, HIGH); //Set pin Kuning menjadi on
 digitalWrite(redPin, LOW); //Set pin Merah menjadi off
 delay(200); //Jeda 0.2 detik
 digitalWrite(greenPin, HIGH); //Set pin Hijau menjadi on 
 digitalWrite(yellowPin, LOW); //Set pin Kuning menjadi off
 delay(2000); //Jeda 2 detik
 digitalWrite(yellowPin, HIGH); //Set pin Kuning menjadi on
 digitalWrite(greenPin, LOW); //Set pin Hijau menjadi off
 delay(200); //Jeda 0.2 detik
 digitalWrite(yellowPin, LOW); //Set pin Kuning menjadi on
}
