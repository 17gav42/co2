int smokeS = A1; 
int data = 0;
int green = 13;
int red = 12;

void setup() {
  Serial.begin(9600);
  pinMode(smokeS, INPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  int data = analogRead(smokeS);
  if(data < 500) {
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
  } else {
    digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
  }
  delay(100);
}
