void ramps_setup(){
    pinMode(PIN_PSU_POWER, OUTPUT); 
 
  pinMode(PIN_WIRE , OUTPUT);

  pinMode(LED_PIN  , OUTPUT);
  
  pinMode(PIN_MA_ENB,OUTPUT); 
  pinMode(PIN_MB_ENB,OUTPUT); 
  pinMode(PIN_MC_ENB,OUTPUT); 
  pinMode(PIN_MD_ENB,OUTPUT); 
  
  pinMode(PIN_MA_STEP,OUTPUT); 
  pinMode(PIN_MB_STEP,OUTPUT); 
  pinMode(PIN_MC_STEP,OUTPUT); 
  pinMode(PIN_MD_STEP,OUTPUT); 
  
  pinMode(PIN_MA_DIR,OUTPUT); 
  pinMode(PIN_MB_DIR,OUTPUT); 
  pinMode(PIN_MC_DIR,OUTPUT); 
  pinMode(PIN_MD_DIR,OUTPUT); 
  
    // Enable:
  digitalWrite( PIN_MA_ENB, LOW );
  digitalWrite( PIN_MB_ENB, LOW );
  digitalWrite( PIN_MC_ENB, LOW );
  digitalWrite( PIN_MD_ENB, LOW );
}

int read_temp()
{
   int current_celsius = 0;
  if(PIN_TEMP>0){
    int rawtemp = analogRead(PIN_TEMP);
    Serial.println( "RAW:" +String(rawtemp));
    double Temp;
    Temp = log(10000.0*((1024.0/rawtemp-1))); 
    Temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * Temp * Temp ))* Temp );
    Temp = Temp - 273.15;          
    current_celsius = (int)Temp;
  
  }
   return current_celsius;
}

void set_temp(int wire_temp){
  if(wire_temp>0){
         digitalWrite(PIN_WIRE, HIGH);
        }else{
         digitalWrite(PIN_WIRE, LOW);
        }
        Serial.print( "Wire temperature set to: " );
        Serial.println( wire_temp );

}

