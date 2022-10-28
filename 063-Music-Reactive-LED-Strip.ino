#define REDPIN 5
#define GREENPIN 6
#define BLUEPIN 3
#define soundSensor 7

void setup() 
{
  pinMode (soundSensor, INPUT); //define Sound Sensor as input
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
}

void loop()
{
  int statusSensor = digitalRead (soundSensor);   //define variable of the Sound Sensor status
                                                  //and read value of the Sensor's
  
  if (statusSensor == 0)        //When the Sensor detects a signal
  {
    analogWrite(REDPIN, 255);    //LED Strip will be active
  }
  
  else                          //If no signal is detected
  {
    analogWrite(GREENPIN, 255);     //The status of the LED strip is deactivated
  }
  
}
