String message; //string that stores the incoming message

void setup()
{
  // initialize serial communication
  Serial.begin(115200);
  while (!Serial); // wait for Leonardo eNUMeration, others continue immediately

  // // initialize serial1 communication
  Serial1.begin(115200);
  while (!Serial1); // wait for Leonardo eNUMeration, others continue immediately
}

void loop()
{
  while(Serial1.available())
  {//while there is data available on the serial monitor
    message+=char(Serial1.read());//store string from serial command
  }
  if(!Serial1.available())
  {
    if(message!="")
    {//if data is available
      Serial.println(message); //show the data
      message=""; //clear the data
    }
  }
  delay(1000); //delay
}
    
