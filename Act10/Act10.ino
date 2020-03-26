void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}
int a = 0;
int b = 255;
bool click = true;
void loop() {
  if (digitalRead(2) == 1) {
    while (digitalRead(2) == 1) {
      do {
        a++;
        analogWrite(3, a);
        analogWrite(5, a);
        analogWrite(6, a);
        analogWrite(9, a);
        analogWrite(10, a);
        analogWrite(11, a);
        delay(7);
      } while (a <= 255);
      do {
        b--;
        analogWrite(3, b);
        analogWrite(5, b);
        analogWrite(6, b);
        analogWrite(9, b);
        analogWrite(10, b);
        analogWrite(11, b);
        delay(7);
      } while (a > 255 && b > 0);
    }
    if (a <= 255) {
      analogWrite(3, a);
      analogWrite(5, a);
      analogWrite(6, a);
      analogWrite(9, a);
      analogWrite(10, a);
      analogWrite(11, a);
    } else if (a > 255 && b > 0) {
      analogWrite(3, b);
      analogWrite(5, b);
      analogWrite(6, b);
      analogWrite(9, b);
      analogWrite(10, b);
      analogWrite(11, b);
    }
    a = 0;
    b = 255;
  }
}
