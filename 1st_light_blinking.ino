void setup() {    // use 3 led 
  pinMode(10,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(10,LOW);
  delay(300);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(200);
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(6,LOW);
  delay(100);

}
