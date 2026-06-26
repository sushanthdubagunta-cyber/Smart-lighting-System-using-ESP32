// SMART LIGHTING SYSTEM USING LDR AND ARDUINO UNO

// Pin Definitions
const int ldrPin = A0;      // LDR connected to Analog Pin A0
const int ledPin = 13;      // LED connected to Digital Pin 13

//Threshold Value 
int threshold = 500;

// Setup Function
void setup()
{
    // Initialize Serial Monitor
    Serial.begin(9600);

    // Configure LED Pin as Output
    pinMode(ledPin, OUTPUT);
}
// Main Loop Function
void loop()
{
    // Read Light Intensity from LDR
    int lightValue = analogRead(ldrPin);

    // Display Sensor Value on Serial Monitor
    Serial.print("Light Value: ");
    Serial.println(lightValue);

    // Check Light Intensity
    if (lightValue < threshold)
    {
        // Low Light Condition
        digitalWrite(ledPin, HIGH);

        Serial.println("LED ON - Low Light Detected");
    }
    else
    {
        // Bright Light Condition
        digitalWrite(ledPin, LOW);

        Serial.println("LED OFF - Sufficient Light Available");
    }
    // Delay for Stability
    delay(1000);
}

