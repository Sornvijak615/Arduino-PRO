void setup() {
  Serial.begin(9600);
  int x = 0;
  int Id = 6 + 1 + 0 + 8 + 0 + 5 + 0 + 1 + 6 + 1 + 5;
  while (x <= 1000) {
    x++;
    if (x % Id == 0) {
      Serial.println(x);
    }
  }
}
void loop() {}
