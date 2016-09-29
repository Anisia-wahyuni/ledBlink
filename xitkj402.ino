
/* 
  Blink
  Menyalakan LED pada pin 3 selama 4 detik dan Mematikanya selama 4 detik.

   Ini contoh kode Programnya.
 */

 int led = 3;//Output pada Digital Pin adalah sebuah LED yang terkoneksi/terhubung dengan Digital pin 3.
  
void setup() 
{
  pinMode(led, OUTPUT);// Mengatur Digital Pin sebagai Output.

}

void loop() {
  digitalWrite(led, HIGH);          // Mengatur LED agar Menyala.
  delay(2000);                      // Tunggu sampai 4 detik.
  digitalWrite(led ,LOW);           // Mengatur LED agar Mati.
  delay(2000);                      // Tunggu sampai 4 detik. 
}
