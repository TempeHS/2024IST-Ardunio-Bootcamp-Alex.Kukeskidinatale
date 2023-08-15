/*
  Author: Alex Kukeski
  Learning Intention: The students will learn how to wire a variable resistor as a pseudo sensor and read analogue data from that PIN.
  Success Criteria:
    1. I can wire a variable resistor in TINKERCAD
    2. I know how to read analogue data from a specific PIN
    3. I know the range of analogue data
    4. I can organise output data so it correctly plots on the serial monitor
    5. I can apply this knowledge to the Light, Sound and Rotary Potentiometer in the sensor kit

  Student Notes: 

  Documentation: 
    https://www.arduino.cc/reference/en/language/functions/analog-io/analogread/
  Schematic:
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/05.serialRead/Bootcamp-serialRead.png
*/

unsigned static int myPOT = A0;
unsigned static int lightSensor = A1;
unsigned static int soundSensor = A2;

void setup() {
Serial.begin(9600);
//Serial.println("Serial monitor configured to 9600");
//Serial.println("------------------------------");
}

void loop() {
 unsigned int POTval = analogRead(myPOT);
   unsigned int LITval = analogRead(lightSensor);
    unsigned int SNDval = analogRead(soundSensor);
Serial.print("myPOT:");
Serial.print(POTval);
Serial.print(",");
Serial.print("lightSensor:");
Serial.print(LITval);
Serial.print(",");
Serial.print("soundSensor:");
Serial.print(SNDval);
Serial.println();
}
