int beep = 8;
int flameVal = 0; 

void setup() {
  pinMode(beep, OUTPUT); 
}

void loop() {
  flameVal = analogRead(A0); 
  Serial.print(flameVal);
  if (flameVal >= 200)     //According to the serial data to adjust.
  { 
    digitalWrite(beep, HIGH);
  }
  else
  { 
    digitalWrite(beep, LOW);
  }
}
