const int Flame_sensor = 4;
const int LED_1 = 8;
const int LED_2 = 10;
const int buzzer = 12;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Fire detection test");
  pinMode(Flame_sensor, INPUT);
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int fire = digitalRead(Flame_sensor); 

  if (fire == LOW) {
      digitalWrite(LED_1, HIGH);
      digitalWrite(LED_2, LOW);
      tone(buzzer, 1000);
      Serial.println("FIRE DETECTED");
    }

  else{
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, HIGH);
    noTone(buzzer);
    Serial.println("NO FIRE DETECTED");
    
    }
  delay(200);
}
