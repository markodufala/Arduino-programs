int ledPin = 13;

void setup() {
// nastavíme ledPin (pin číslo 13) ako výstupný
pinMode(ledPin, OUTPUT);
}

void loop() {
// 3 krátke '...' v morseovej abecede písmeno 'S'
for(int i=0; i<3; i++){
digitalWrite(ledPin, HIGH);
delay(220);
digitalWrite(ledPin, LOW);
delay(220);
}

delay(150); //čakáme 100 milisekúnd
// 3 dlhé '---' v morseovej abecede písmeno 'O'
for(int i=0; i<3; i++){
digitalWrite(ledPin, HIGH);
delay(550);
digitalWrite(ledPin, LOW);
delay(550);
}

  delay(150);//zase čakáme 100 milisekúnd
//a zase 3 krátke '...' teda 'S'
for(int i=0; i<3; i++){
digitalWrite(ledPin, HIGH);
delay(220);
digitalWrite(ledPin, LOW);
delay(220);
}
delay(5000);//celý cyklus sa spustí znova po 5 sekundách
}
