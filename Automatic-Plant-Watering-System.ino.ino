const int sensorPin = A0; //soil moisture sensor.
const int relay = 7;

void setup() {
  Serial.begin(9600);
  pinMode(relay, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(sensorPin);//reading sensor value

  Serial.print("Soil Moisture Value = ");
  Serial.println(sensorValue);  //printing sensor value in serial monitor.

  if (sensorValue > 950) {
    digitalWrite(relay,LOW);
    Serial.println("Soil is DRY - Relay ON");
  }
  else {
    digitalWrite(relay,HIGH);
    Serial.println("soil is medium -relay on");
  }
  
  Serial.println("--------------------");
  delay(500);
}