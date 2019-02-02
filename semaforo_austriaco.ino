  int ledR = 12;
int ledRbis = 9;
int ledG = 11;
int ledGbis = 7;
int ledV =10 ;
int ledVbis = 6;
int tempo = 200;
void fermi(void){
  digitalWrite (ledR, HIGH);
  digitalWrite (ledG, LOW);
  digitalWrite (ledV, LOW);
  digitalWrite (ledRbis, LOW);
  digitalWrite (ledGbis, LOW);
  digitalWrite (ledVbis, HIGH);
}
void quasi_verde(void){
  digitalWrite (ledR, HIGH);
  digitalWrite (ledG, HIGH);
  digitalWrite (ledV, LOW);
  digitalWrite (ledRbis, LOW);
  digitalWrite (ledGbis, HIGH);
  digitalWrite (ledVbis, LOW);
}
void verde(void){
  digitalWrite (ledR, LOW);
  digitalWrite (ledG, LOW);
  digitalWrite (ledV, HIGH);
  digitalWrite (ledRbis, HIGH);
  digitalWrite (ledGbis, LOW);
  digitalWrite (ledVbis, LOW);
}
void giallo(void){
  digitalWrite (ledR, LOW);
  digitalWrite (ledG, HIGH);
  digitalWrite (ledV, LOW);
  digitalWrite (ledRbis, HIGH);
  digitalWrite (ledGbis, HIGH);
  digitalWrite (ledVbis, LOW);
}
void pulse(void){
  digitalWrite (ledR, LOW);
  digitalWrite (ledG, LOW);
  digitalWrite (ledV, HIGH);
  digitalWrite (ledV, LOW);
  delay(tempo);
  digitalWrite (ledV, HIGH);
  delay(tempo);
  digitalWrite (ledV, LOW);
  delay(tempo);
  digitalWrite (ledV, HIGH);
  delay(tempo);
  digitalWrite (ledV, LOW);
  delay(tempo);
  digitalWrite (ledV, HIGH);
  delay(tempo);
  digitalWrite (ledV, LOW);
  delay(tempo);
  digitalWrite (ledV, HIGH);
  delay(tempo);
  digitalWrite (ledV, LOW);
  delay(tempo);
  
}
void pulsebis(void){
  digitalWrite (ledRbis, LOW);
  digitalWrite (ledGbis, LOW);
  digitalWrite (ledVbis, HIGH);
  digitalWrite (ledVbis, LOW);
  delay(tempo);
  digitalWrite (ledVbis, HIGH);
  delay(tempo);
  digitalWrite (ledVbis, LOW);
  delay(tempo);
  digitalWrite (ledVbis, HIGH);
  delay(tempo);
  digitalWrite (ledVbis, LOW);
  delay(tempo);
  digitalWrite (ledVbis, HIGH);
  delay(tempo);
  digitalWrite (ledVbis, LOW);
  delay(tempo);
  digitalWrite (ledVbis, HIGH);
  delay(tempo);
  digitalWrite (ledVbis, LOW);
  delay(tempo);

}
void setup() {
  // put your setup code here, to run once:
  pinMode(ledR, OUTPUT);
  pinMode(ledRbis, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledGbis, OUTPUT);
  pinMode(ledV, OUTPUT);
  pinMode(ledVbis, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
fermi();
delay(2000);
pulsebis();
quasi_verde();
delay(3000);
verde();
delay(2000);
pulse();

giallo();
delay(3000);
}
