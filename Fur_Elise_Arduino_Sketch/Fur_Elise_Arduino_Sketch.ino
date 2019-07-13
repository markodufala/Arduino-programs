 // číslo pinu pre LED
int ledPin = 13;
// číslo pinu pre tlačítko
int buttonPin = 7;
// číslo pinu pre piezo
int piezoPin = 8;
// premenná uchovávajuca stav tlačítka
int buttonState = 0;
void setup() {
// nastavenie pinu pre LEDku ako výstupný
pinMode(ledPin, OUTPUT);
// nastavenie pinu pre piezo ako výstupný
pinMode(piezoPin, OUTPUT);
// nastavenie pinu pre tlačítko ako vstupný
pinMode(buttonPin, INPUT);
}
void loop(){
// načítame stav tlačítka
buttonState = digitalRead(buttonPin);
// skontrolujeme či je tlačitko stlačené
// ak je, tzn. premenná buttonState má hodnotu HIGH
if (buttonState == HIGH) {
digitalWrite(ledPin, HIGH); // zapneme LEDku
// play e4
  delay(600);
  tone(piezoPin, 329.63, 300);
  delay(350);
  // play d4# 
  tone(piezoPin, 311.13, 300);
  delay(350);
  // play e4
  tone(piezoPin, 329.63, 300);
  delay(350);
  // play d4# 
  tone( piezoPin,311.13, 300);
  delay(350);
  // play e4
  tone(piezoPin, 329.63, 300);
  delay(350);
  // play b3
  tone( piezoPin, 246.94, 300);
  delay(400);
  // play d4
  tone(piezoPin, 293.66,300);
  delay(400);
  // play c4
  tone(piezoPin, 261.63,300);
  delay(400);
  // play a3
  tone(piezoPin, 220, 900);
  delay(1000);
  // play d3
  tone(piezoPin,146.83, 300);
  delay(350);
  //play f3
  tone(piezoPin, 174.61, 300);
  delay(400);
  //play a3
  tone(piezoPin, 220, 300);
  delay(400);
  // play b3
  tone(piezoPin, 246.94, 900);
  delay(1000);
  // play f3
  tone(piezoPin, 174.61, 300);
  delay(400);
  // play a3#
  tone(piezoPin, 233.08, 300);
  delay(400);
  // play b3
  tone(piezoPin, 246.94, 300);
  delay(400);
  // play c4
  tone(piezoPin, 261.63, 900);
  delay(1000);
  delay(300);
  // play e4
  tone(piezoPin, 329.63, 300);
  delay(400);
  // play d4#
  tone(piezoPin, 311.13, 300);
  delay(400);
  // play e4
  tone(piezoPin, 329.63, 300);
  delay(400);
  // play d4#
  tone(piezoPin, 311.13, 300);
  delay(400);
  // play e4
  tone(piezoPin , 329.63, 300);
  delay(400);
  // play b3
  tone(piezoPin, 246.94, 300);
  delay(400);
  // play d4
  tone(piezoPin, 293.66, 300);
  delay(400);
  // play c4
  tone(piezoPin, 261.63, 300);
  delay(400);
  // play a3
  tone(piezoPin, 220, 900);
  delay(1000);
  // play d3
  tone(piezoPin, 146.83, 300);
  delay(400);
  // play f3
  tone(piezoPin, 174.61, 300);
  delay(400);
  // play a3
  tone(piezoPin, 220, 300);
  delay(400);
  // play b3
  tone(piezoPin, 246.94, 900);
  delay(1000);
  // play f3
  tone(piezoPin, 174.61, 300);
  delay(400);
  // play c4
  tone(piezoPin, 261.63, 300);
  delay(400);
  // play b3
  tone(piezoPin, 246.94, 300);
  delay(400);
  // play a3
  tone(piezoPin, 220, 900);
  delay(1000);
  // play b3
  tone(piezoPin,246.94, 300);
  delay(400);
   // play c4
  tone(piezoPin, 261.63, 300);
  delay(400);
  // play d4
  tone(piezoPin, 293.66, 300);
  delay(400);
  // play e4
  tone(piezoPin, 329.63, 900);
  delay(1000);
  // play g3
  tone(piezoPin, 196, 300);
  delay(400);
  // play f4
  tone(piezoPin, 349.23, 300);
  delay(400);
  //play e4
  tone(piezoPin, 329.23, 300);
  delay(400);
  // play d4
  tone(piezoPin, 293.63, 900);
  delay(1000);
  // play e3
  tone(piezoPin,164.81, 300);
  delay(400);
  // play e4
  tone(piezoPin, 329.63, 300);
  delay(400);
  // play d4
  tone(piezoPin, 293.63, 300);
  delay(400);
  // play c4
  tone(piezoPin, 261.63, 900);
  delay(1000);
  // play d3
  tone(piezoPin, 146.83, 300);
  delay(400);
    // play d4
  tone(piezoPin, 293.63, 300);
  delay(400);
  // play c4
  tone(piezoPin, 261.63, 300);
  delay(400);
  // play b3
  tone(piezoPin, 246.94, 900);
  delay(1000);
  delay(400);
  // play e4
  tone(piezoPin, 329.63, 300);
  delay(400);
  // play d4# 
  tone(piezoPin, 311.13, 300);
  delay(350);
  // play e4
  tone( piezoPin, 329.63, 300);
  delay(350);
  // play d4# 
  tone( piezoPin,311.13, 300);
  delay(350);
  // play e4
  tone(piezoPin, 329.63, 300);
  delay(350);
  // play b3
  tone(piezoPin, 246.94, 300);
  delay(400);
  // play d4
  tone(piezoPin, 293.66,300);
  delay(400);
  // play c4
  tone(piezoPin, 261.63,300);
  delay(400);
  // play a3
  tone(piezoPin, 220, 900);
  delay(1000);
  // play d3
  tone(piezoPin,146.83, 300);
  delay(350);
  //play f3
  tone(piezoPin, 174.61, 300);
  delay(400);
  //play a3
  tone(piezoPin, 220, 300);
  delay(400);
  // play b3
  tone(piezoPin, 246.94, 900);
  delay(1000);
  // play f3
  tone(piezoPin, 174.61, 300);
  delay(400);
  // play a3
  tone(piezoPin, 233.08, 300);
  delay(400);
  // play b3
  tone(piezoPin, 246.94, 300);
  delay(400);
  // play c4
  tone(piezoPin, 261.63, 900);
  delay(1000);
  delay(300);
  // play e4
  tone(piezoPin, 329.63, 300);
  delay(400);
  // play d4#
  tone(10, 311.13, 300);
  delay(400);
  // play e4
  tone(piezoPin, 329.63, 300);
  delay(400);
  // play d4#
  tone(piezoPin, 311.13, 300);
  delay(400);
  // play e4
  tone(piezoPin, 329.63, 300);
  delay(400);
  // play b3
  tone(piezoPin, 246.94, 300);
  delay(400);
  // play d4
  tone(piezoPin, 293.66, 300);
  delay(400);
  // play c4
  tone(piezoPin, 261.63, 300);
  delay(400);
  // play a3
  tone(piezoPin, 220, 900);
  delay(1000);
  // play d3
  tone(piezoPin, 146.83, 300);
  delay(400);
  // play f3
  tone(piezoPin, 174.61, 300);
  delay(400);
  // play a3
  tone(piezoPin, 220, 300);
  delay(400);
  // play b3
  tone(piezoPin, 246.94, 900);
  delay(1000);
  // play f3
  tone(piezoPin, 174.61, 300);
  delay(400);
  // play c4
  tone(piezoPin, 261.63, 300);
  delay(400);
  // play b3
  tone(piezoPin, 246.94, 300);
  delay(400);
  // play a3
  tone(piezoPin, 220, 900);
  delay(1000);
  
  delay(5000);

 


} else { // ak nie je, tzn. premenná buttonState má hodnotu LOW
digitalWrite(ledPin, LOW); // vypneme LEDku
noTone(piezoPin); // vypneme generovanie tónu
}
}
