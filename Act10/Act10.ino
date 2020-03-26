void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
void loop() {
  int x = 0;
  for (x = 0; x <= 1023; x++) {
    analogWrite(3, x);
    analogWrite(5, x);
    analogWrite(6, x);
    analogWrite(9, x);
    analogWrite(10, x);
    analogWrite(11, x);
    delay(20);
    if (x == 1023) {
      for (x = 1023; x >= 0; x--) {
        analogWrite(3, x);
        analogWrite(5, x);
        analogWrite(6, x);
        analogWrite(9, x);
        analogWrite(10, x);
        analogWrite(11, x);
        delay(20);
      }
    }
  }
}
