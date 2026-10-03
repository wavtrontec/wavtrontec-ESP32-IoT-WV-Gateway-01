// ESP32-S3-WROOM-1U LED Blink
// LED1 -> GPIO5, LED2 -> GPIO7 (active HIGH)

#define LED1_PIN 5
#define LED2_PIN 7

void setup() {
  Serial.begin(115200);
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  digitalWrite(LED1_PIN, LOW);
  digitalWrite(LED2_PIN, LOW);
  Serial.println("LED blink started");
}

void loop() {
  // LED1 on, LED2 off
  digitalWrite(LED1_PIN, HIGH);
  digitalWrite(LED2_PIN, LOW);
  delay(1500);

  // LED1 off, LED2 on
  digitalWrite(LED1_PIN, LOW);
  digitalWrite(LED2_PIN, HIGH);
  delay(500);
}