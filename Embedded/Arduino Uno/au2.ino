#define LED_PIN 13

void setup()
{
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    for (int i = 0; i < 3; i++) {
        digitalWrite(LED_PIN, HIGH);
        delay(200);
        digitalWrite(LED_PIN, LOW);
        delay(200);
    }
    delay(800);
}