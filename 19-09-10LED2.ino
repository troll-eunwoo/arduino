void setup() {
  pinMode(9,OUTPUT);  //red
  pinMode(10,OUTPUT); //green
  pinMode(11,OUTPUT); //blue
  }

void loop() {
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(9,LOW);
  delay(1000);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(9,LOW);
  delay(1000);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(10,LOW); 






}
