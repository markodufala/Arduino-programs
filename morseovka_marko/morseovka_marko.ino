int ledPin = 13;

void setup() {
// nastavíme ledPin (pin číslo 13) ako výstupný
pinMode(ledPin, OUTPUT);
}
//m
void loop() {
  for(int i=0; i<2; i++){
    digitalWrite (ledPin, HIGH);
    delay(550);
    digitalWrite (ledPin, LOW);
    delay (550);
}
delay (1000);
//a
for(int i=0; i<1; i++) {
  digitalWrite (ledPin, HIGH);
  delay (220);
  digitalWrite (ledPin, LOW);
  delay(220);
  digitalWrite (ledPin, HIGH);
  delay (550);
  digitalWrite (ledPin, LOW);
  //delay(550);
  
}
delay (1000);
//r
for(int i=0; i<1; i++) {
  digitalWrite (ledPin, HIGH);
  delay (220);
  digitalWrite (ledPin, LOW);
  delay(220);
  digitalWrite (ledPin, HIGH);
  delay (550);
  digitalWrite (ledPin, LOW);
  delay (550);
  digitalWrite (ledPin, HIGH);
  delay(220);
  digitalWrite (ledPin, LOW);
  //delay (220)
  
}
delay (1000);
//k
for(int i=0; i<1; i++) {
  digitalWrite (ledPin, HIGH);
  delay (550);
  digitalWrite (ledPin, LOW);
  delay(550);
  digitalWrite (ledPin, HIGH);
  delay (220);
  digitalWrite (ledPin, LOW);
  delay (220);  
  digitalWrite (ledPin, HIGH);
  delay (550);
  digitalWrite (ledPin, LOW);
  //delay(550);
}

delay (1000);
//o
for(int i=0; i<3; i++) {
  digitalWrite (ledPin, HIGH);
  delay (550);
  digitalWrite (ledPin, LOW);
  delay (550);
}
delay (5000);
}
