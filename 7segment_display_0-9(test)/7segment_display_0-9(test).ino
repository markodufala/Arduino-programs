// čísla pinov segmentov
byte segmentPins[] = {2/*A*/,3/*B*/,4/*C*/,5/*D*/,6/*E*/,7/*F*/,8/*G*/,9/*BODKA*/};
// Pole aktívnych segmentov pre jednotlivé číslice, LOW = svieti, HIGH = nesvieti
byte segmentDigits[10][8] = {
//{ A , B , C , D , E , F , G , BODKA }
{LOW, LOW, LOW, LOW, LOW, LOW, HIGH, HIGH}, // číslica 0
{HIGH, LOW, LOW, HIGH, HIGH, HIGH, HIGH, HIGH}, // číslica 1
{LOW, LOW, HIGH, LOW, LOW, HIGH, LOW, HIGH}, // číslica 2
{LOW, LOW, LOW, LOW, HIGH, HIGH, LOW, HIGH}, // číslica 3
{HIGH, LOW, LOW, HIGH, HIGH, LOW, LOW, HIGH}, // číslica 4
{LOW, HIGH, LOW, LOW, HIGH, LOW, LOW, HIGH}, // číslica 5
{LOW, HIGH, LOW, LOW, LOW, LOW, LOW, HIGH}, // číslica 6
{LOW, LOW, LOW, HIGH, HIGH, HIGH, HIGH, HIGH}, // číslica 7
{LOW, LOW, LOW, LOW, LOW, LOW, LOW, HIGH}, // číslica 8
{LOW, LOW, LOW, LOW, HIGH, LOW, LOW, HIGH} // číslica 9
};
/* Metóda pre zobrazenie číslice */
void segmentDisplay(int digit);
void setup(){
// nastavíme porty ako vystupne
for(int i=0;i<8;i++){
pinMode(segmentPins[i], OUTPUT);
}
// nastavíme počiatočné hodnoty, nesvieti žiadna číslica
for(int i=0;i<8;i++){
digitalWrite(segmentPins[i], HIGH);
}
}
void loop(){
// Postupne zobrazíme čísla od 0 po 9
for(int n=0; n<10; n++){
segmentDisplay(n);
delay(500);
}
// Opačný postup, zobrazíme čísla od 9 po 0
for(int m=9; m>=0; m--){
segmentDisplay(m);
delay(500);
}
}
void segmentDisplay(int digit){
for(int s=0; s<8; s++){
digitalWrite(segmentPins[s], segmentDigits[digit][s]);
}
}  
