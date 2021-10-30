#define Relay 14
int sensorValue;

int GasSensorPin = 0;   
int var;

void setup()

{

 Serial.begin(115200);      
 delay(60000);
 pinMode(Relay, OUTPUT);
 digitalWrite(Relay, HIGH);
}

void loop()

{
 sensorValue = analogRead(GasSensorPin);      

 Serial.println(sensorValue, DEC);  
 if(sensorValue<50 || sensorValue>300 )
 {
  Serial.println("Gas Detected");
  digitalWrite(Relay, LOW);
 }
 else
 {
  digitalWrite(Relay, HIGH);
 }

 delay(1000);                       

}
