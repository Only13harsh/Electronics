int pins[] = {2, 4, 5, 18, 19, 22, 23};
int data[3][7] = {
  {1, 1, 1, 0, 0, 0, 1},//L
  {0, 0, 1, 1, 0, 0, 0},//P
  {1, 0, 0, 0, 0, 0, 1}//U
};

void setup() {
  for (int x = 0; x < 7; x++) {
    pinMode(pins[x], OUTPUT);
  }
}

void loop() {
  for (int y = 0; y < 3; y++) {
    for (int x = 0; x < 7; x++) {
      digitalWrite(pins[x], data[y][x]);
    }
    delay(1000);
  }
}
