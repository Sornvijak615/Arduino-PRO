void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
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
int Id = 6 + 1 + 0 + 8 + 0 + 5 + 0 + 1 + 6 + 1 + 5;
void loop() {
  for (int i = 1; i <= 1000; i++) {
    if (i % Id == 0) {
      Serial.println(i);
    }
  }
}
