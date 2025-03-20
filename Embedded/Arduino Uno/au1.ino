#define LED_PIN 13 // pin 13

void setup()
{
    pinMode(LED_PIN, OUTPUT); // configuram pin 13 ca iesire
}

void loop()
{
    digitalWrite(LED_PIN, HIGH); // aprindem led-ul
    delay(1000); // pauza 1s (1000ms)
    digitalWrite(LED_PIN, LOW); // stingem led-ul
    delay(1000);
}