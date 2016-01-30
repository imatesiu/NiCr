/*     Simple Stepper Motor Control Exaple Code
 *      
 *  by Dejan Nedelkovski, www.HowToMechatronics.com
 *  
 */

// defines pins numbers
const int stepPin = 54; 
const int dirPin = 55; 
const int enaPin = 38;
const int PIN_PSU_POWER = 12;
const int PIN_WIRE = 10;  // EXTRUDER 1 For RAMPS 1.4
const int PIN_TEMP = 13;  // ANALOG NUMBERING
int wire_temp = 0;
const int LED_PIN= 13;
 
void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  pinMode(enaPin,OUTPUT);
  pinMode(PIN_PSU_POWER, OUTPUT ); 
   pinMode(PIN_WIRE , OUTPUT);
  pinMode(LED_PIN  , OUTPUT);
}
void loop() {

if (millis() %1000 <500) 
    digitalWrite(LED_PIN, HIGH);
  else
    digitalWrite(LED_PIN, LOW);
    
  digitalWrite( PIN_PSU_POWER, LOW );
  digitalWrite( enaPin, LOW );
  digitalWrite(dirPin,true); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 200; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(500); 
  }
  delay(1000); // One second delay
  
  digitalWrite(dirPin,false); //Changes the rotations direction
  // Makes 400 pulses for making two full cycle rotation
  for(int x = 0; x < 400; x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(500);
  }
  delay(1000);
}
