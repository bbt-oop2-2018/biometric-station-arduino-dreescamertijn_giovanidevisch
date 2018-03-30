void setup() {
  Serial.begin(115200);
  Serial.println("Hello World");

}

void loop() {
  int pubg = 1234;
  double level = 12.44;
  
  Serial.print("[");
  Serial.print(level);
  Serial.print("|");
  Serial.print(pubg);
  Serial.println("]");

}
