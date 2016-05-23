const int pin [13] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

const int potar = A0;

minx = 0;
maxx = 1000;
x = 100;

void setup() {
  for(int n = 0; n <= 13; n++) {
    pinMode(pin[n], OUTPUT);
  }
}

void loop() {
  for(int n = 0; n <= 13; n++) {
    if(n == 0) {digitalWrite(pin[13], LOW);}
    else {digitalWrite(pin[n-1], LOW);}
    digitalWrite(pin[n], HIGH);
    x = map(analogRead(potar), 0, 1023, minx, maxx);
    delay(x);
  }
}
