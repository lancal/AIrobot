
int sensores [] = {0,0,0,0,0,0,0,0};

void setup() {
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensores[0] = analogRead(A0); delay(10);
  sensores[1] = analogRead(A1); delay(10);
  sensores[2] = analogRead(A2); delay(10);
  sensores[3] = analogRead(A3); delay(10);
  sensores[4] = analogRead(A4); delay(10);
  sensores[5] = analogRead(A5); delay(10);
  //Serial.println(LOW);

  for(int i=0; i < 6; i++){
    String str_value = String(sensores[i]);
    str_value.concat("  ");
    Serial.print(str_value);
    }
 //delay(500);
 Serial.println();

}
