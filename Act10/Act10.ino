void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}
bool click = true;
int a = 0;
int b = 255;
void loop() {
  if (digitalRead(2) == 0) {
    click = !click;
    if (click == true) {
      for (int i = 0; i <= 255; i++) {
        a++;
        analogWrite(3, a);
        analogWrite(5, a);
        analogWrite(6, a);
        analogWrite(9, a);
        analogWrite(10, a);
        analogWrite(11, a);
        delay(7);
      }
      a = 0;
      for (int j = 0; j <= 255; j++) {
        b--;
        analogWrite(3, b);
        analogWrite(5, b);
        analogWrite(6, b);
        analogWrite(9, b);
        analogWrite(10, b);
        analogWrite(11, b);
        delay(7);
      }
      b = 255;
    } else if (click == false) {
      analogWrite(3, 0);
      analogWrite(5, 0);
      analogWrite(6, 0);
      analogWrite(9, 0);
      analogWrite(10, 0);
      analogWrite(11, 0);
    }
  }
  /*for (int a = 0; a <= 255; a++) {
    analogWrite(3, a);
    analogWrite(5, a);
    analogWrite(6, a);
    analogWrite(9, a);
    analogWrite(10, a);
    analogWrite(11, a);
    delay(7);
  }
  for (int a = 255; a >= 0; a--) {
    analogWrite(3, a);
    analogWrite(5, a);
    analogWrite(6, a);
    analogWrite(9, a);
    analogWrite(10, a);
    analogWrite(11, a);
    delay(7);
  }*/
}
