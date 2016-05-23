x = 100;

void setup() {
  for(int n = 0; n <= 13; n++) {
    pinMode(n, OUTPUT);
  }
}

void loop() {
  for(int n = 0; n <= 13; n++) {
    if(n == 0) {digitalWrite(13, LOW);}
    else {digitalWrite(n-1, LOW);}
    digitalWrite(n, HIGH);
    delay(x);
  }
}
