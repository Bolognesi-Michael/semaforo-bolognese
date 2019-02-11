int ledR = 3;
int ledRbis = 6;
int ledG = 2;
int ledGbis = 5;
int ledV =7 ;
int ledVbis = 4;
int lampeggi;
int rorde;
int dGiallo;
int dLampeggi;
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
  for(int i = 0; i<lampeggi;i++)
  {
    digitalWrite(ledV,LOW);
    delay(dLampeggi);
    digitalWrite(ledV,HIGH);
    delay(dLampeggi);
  }
  digitalWrite (ledRbis, HIGH);
  digitalWrite (ledGbis, LOW);
  digitalWrite (ledVbis, LOW);
}
void pulsebis(void){
  digitalWrite (ledRbis, LOW);
  digitalWrite (ledGbis, LOW);
  digitalWrite (ledVbis, HIGH);
  for(int i = 0; i < lampeggi;i++)
  {
    digitalWrite(ledVbis,LOW);
    delay(dLampeggi);
    digitalWrite(ledVbis,HIGH);
    delay(dLampeggi);
  }
  digitalWrite (ledR, HIGH);
  digitalWrite (ledG, LOW);
  digitalWrite (ledV, LOW);

}
void setup() {
  // put your setup code here, to run once:
  pinMode(ledR, OUTPUT);
  pinMode(ledRbis, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledGbis, OUTPUT);
  pinMode(ledV, OUTPUT);
  pinMode(ledVbis, OUTPUT); 
  Serial.begin(9600);
  Serial.println("inserire numero di lampeggi");
  while(Serial.available()==0){}
  int lampeggi = Serial.readString().toInt();
  Serial.println(lampeggi);
  Serial.println("inserire la durata dei lampeggi(in ms)");
  while(Serial.available()==0){}
  int dLampeggi = Serial.readString().toInt();
  Serial.println(dLampeggi);
  Serial.println("durata del colore giallo(in ms)");
  while(Serial.available()==0){}
  int dGiallo = Serial.readString().toInt();
  Serial.println(dGiallo);
  Serial.println("durata del colore verde/rosso(in ms)");
  while(Serial.available()==0){}
  int rorde = Serial.readString().toInt();
  Serial.println(rorde);
}

void loop() {
  // put your main code here, to run repeatedly:
    fermi();
    delay(rorde);
    pulsebis();
    quasi_verde();
    delay(dGiallo);
    verde();
    delay(rorde);
    pulse();
    giallo();
    delay(dGiallo);
}
