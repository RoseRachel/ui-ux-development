void pin();{
  
  
if (choice == "pin"){
while(Serial.available()==0){}
pin=Serial.parseInt();
Serial.println("Access Granted");
else{
Serial.println("Access Denied")
  
  }
  
  }
