int sensorPin1 = A0;
int sensorPin2 = A1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcValue1 = analogRead(sensorPin1);
  int adcValue2 = analogRead(sensorPin2);

  float temp1 = (adcValue1 * 500.0) / 1023.0;
  float temp2 = (adcValue2 * 500.0) / 1023.0;

  // Gửi dữ liệu dạng CSV: temp1,temp2
  Serial.print(temp1);
  Serial.print(",");
  Serial.println(temp2);

  delay(1000);
}
