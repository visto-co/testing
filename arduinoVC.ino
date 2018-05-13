void setup() {
}
//----------------------------------------------------------
void loop() {
  analogWrite(9,analogRead(A0)/4);
  delay(1000);
}
