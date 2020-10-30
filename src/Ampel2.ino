const int sensorPin = AO;
const float baselineTamp = 20.0;
void setup(){
  Serial.begin(9600); // öffnet die serielle Schnittstelle
  for(int pinNumber = 2; pinNumber<5; pinNumber ++) {
    pinMode(piNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
}
void loop() {
  int sensorVal = analogRead(sensorPin);
  Serial.print("Sensor Value: ")
  Serial.print(sensorVal);
  // zeichne den gelesenen ADC-Wert in Spannung um
  float vaoltage = (sensorVal/1024.0) * 5.0;
  Serial.print(", Volts: ");
  Serial.print(voltage)
  Serial.print(", degrees C: ");
  // rechne die Spannung in Temperatur in Grad um
  float temperature = (voltage - .5) * 100;
  Serial.print(temperature);
  if (temperature < baselineTemp) {
    digitalWrite(2, LOW);
    digitalWrite(3,LOW)
    digitalWrite(4, LOW);
  }else if (temperature >= baselineTemp + 2 &&
  temperature < baselineTemp + 4){
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }else if (temperature >= baselineTemp + 4 &&
  temperature < baselineTemp + 6){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }else if (temperature >= baselineTemp + 6) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
  delay(1)
}
