int val = 0;  

void setup()  
{  
  Serial.begin(9600); // sensor buart rate  
  pinMode(14, OUTPUT);  // Red led Pin Connected To D1 Pin   
  pinMode(12, OUTPUT);  // Green Led Pin Connected To D2 Pin   
  pinMode(13, OUTPUT);  // Yellow Led Connected To D3 Pin    
  pinMode(5, OUTPUT);  // Buzzer Pin Connected To D2 Pin  
}  

void loop()   
{  
  int s1 = analogRead(A0); // Water Level Sensor output pin connected A0  
  Serial.println(s1);  // See the Value In Serial Monitor     
  delay(100);      // for timer  

  if (s1 > 130)  
  {   
    digitalWrite(14, HIGH);   // Red led ON   
  }   
  else   
  {   
    digitalWrite(14, LOW);    // Red led OFF  
  }   

  if (s1 > 180)   
  {   
    digitalWrite(12, HIGH);   // Green led ON   
  }  
  else   
  {   
    digitalWrite(12, LOW);   // Green led OFF   
  }   

  if (s1 > 220)   
  {  
    digitalWrite(13, HIGH);  // Yellow led ON   
  }  
  else  
  {  
    digitalWrite(13, LOW);  // Yellow led OFF   
  }  

  if (s1 > 235)   
  {  
    digitalWrite(5, HIGH);  // Buzzer ON   
  }  
  else  
  {  
    digitalWrite(5, LOW);  // Buzzer OFF   
  }  
}
