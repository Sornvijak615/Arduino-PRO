void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}
void loop() {
  digitalWrite(2, 0);
  analogWrite(3, 16);
  analogWrite(5, 32);
  analogWrite(6, 64);
  digitalWrite(7, 1);
}
