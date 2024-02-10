int a = 2;
void setup() {
pinMode(2, OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(13, OUTPUT);
pinMode(8, INPUT_PULLUP);
pinMode(9, INPUT_PULLUP);
pinMode(10, INPUT_PULLUP);
pinMode(11, INPUT_PULLUP);
Serial.begin(9600);}
void loop() {
knopka();}
void knopka () {
digitalWrite(a, HIGH);
delay(1000);
digitalWrite(a, LOW);
int b = digitalRead(8);
int c = digitalRead(9);
int d = digitalRead(10);
int e = digitalRead(11);
digitalWrite(a, LOW);
if (a == 2 and  b == 0){
  a = random(2,6);}
else if (a == 3 and c == 0){
  a = random(2,6);}
else if (a == 4 and d == 1){
  a = random(2,6);}
else if (a == 5 and e == 1){
  a = random(2,6);}
else {digitalWrite(13, HIGH);}
Serial.println(a);
}
