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
int count = 0;
void loop() {
  for (int i = 0; i < count; i++) {
  }
}
void light_LED() {
  int p = 2;
  for (int i = 2; i <= p && i <= 13; i++) {
    digitalWrite(p, 1);
    p++;
    if (p > 13) {
      break;
    }
  }
}
