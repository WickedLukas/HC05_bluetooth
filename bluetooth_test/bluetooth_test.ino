String message; //string that stores the incoming message

void setup()
{
  // initialize serial communication
  Serial.begin(115200);
  while (!Serial); // wait for Leonardo eNUMeration, others continue immediately

  // initialize serial1 communication
  Serial1.begin(115200);
  while (!Serial1); // wait for Leonardo eNUMeration, others continue immediately
}

void loop()
{
  // while there is data available on the serial monitor
  while(Serial1.available()) {
    message+=char(Serial1.read());//store string from serial command
  }
  if(!Serial1.available()) {
    // if data is available
    if(message!="") {
      // show data
      Serial.println(message);
      // clear data
      message="";
    }
  }
  delay(1000); //delay
}
    
