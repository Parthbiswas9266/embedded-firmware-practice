String tankName = "Roof Tank";
float waterLevel = 72.5;
float tankCapacity = 1000.00;
float minimumLevel = 20.00;
float maximumLevel = 90.00;
bool pumpRunning;


void setup() {

Serial.begin(9600);

  Serial.print("Tank: ");
  Serial.println(tankName);
  Serial.print("Water Level: ");
  Serial.print(waterLevel);
  Serial.println(" %");
  Serial.print("Capacity: ");
  Serial.print(tankCapacity);
  Serial.println(" L");
  Serial.print("Minimum Level: ");
  Serial.print(minimumLevel);
  Serial.println(" %");
   Serial.print("Maximum Level: ");
  Serial.print(maximumLevel);
  Serial.println(" %");

}

void loop() {
  
  if(waterLevel <= 20){
    pumpRunning = true;
  }else if(waterLevel >= 80 ){
    pumpRunning = false;
  }else{
    Serial.println("Pump: OFF");
    Serial.println("Status: Normal");
  }

  if(pumpRunning == true){
    Serial.println("Pump: ON");
    Serial.println("Status: Filling");
  }else{
    Serial.println("Pump: OFF");
    Serial.println("Status: Tank Full");
  }

 delay(5000);
}


