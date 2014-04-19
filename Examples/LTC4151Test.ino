/*
 * LTC4151 Library Example
 * Kerry D. Wong
 * http://www.kerrywong.com
 * 4/2014
 */

#include <Wire.h>
#include <LTC4151.h>
LTC4151 sensor;

void setup()
{   
    Serial.begin(9600);
    Wire.begin();
    
    sensor.init(LTC4151::L, LTC4151::L);
}

void loop()
{
    Serial.print(sensor.getLoadCurrent(0.1));
    Serial.print(" ");
    Serial.print(sensor.getSnapshotLoadCurrent(0.1));
    Serial.print(" ");    
    Serial.print(sensor.getInputVoltage());    
    Serial.print(" ");
    Serial.print(sensor.getSnapshotInputVoltage());    
    Serial.print(" ");
    Serial.print(sensor.getADCInVoltage());
    Serial.print(" ");
    Serial.print(sensor.getSnapshotADCInVoltage());
    Serial.print(" ");
    Serial.println();
}
