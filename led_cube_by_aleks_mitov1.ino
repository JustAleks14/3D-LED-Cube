int i=0, n=0;

void setup() 
{
  for ( n = 0; n < 12; n++)
  {  
    pinMode(n, OUTPUT);
  };
}

void loop() 
{
  for(int i=0;i<3;i++)
  {
    digitalWrite(i,HIGH);
    digitalWrite(i-1,LOW);
    digitalWrite(i-2,LOW);
	for ( n = 3; n < 12; n++)
    { 
      digitalWrite(n, LOW);  
    }
    
       delay(600);
    
  }
  digitalWrite(2,LOW);
  
      delay(600);
  
  for ( n = 3; n < 12; n++)
  { 
  	digitalWrite(n, HIGH);  
  } 
  for ( n = 0; n < 3; n++)
  {
    digitalWrite(n, HIGH);  
  }
  for ( n = 3; n < 6; n++)
  {
    digitalWrite(n, LOW);  
  }
  
  		delay(600);
  
  for ( n = 3; n < 6; n++)
  {
    digitalWrite(n, HIGH);  
  }
  for ( n = 6; n < 9; n++)
  {
    digitalWrite(n, LOW);  
  }
  
       delay(600);
  
  for ( n = 6; n < 9; n++)
  {
    digitalWrite(n, HIGH);  
  }
  for ( n = 9; n < 12; n++)
  {
    digitalWrite(n, LOW);  
  }
  
       delay(600);
  
  for ( n = 9; n < 12; n++)
  {
    digitalWrite(n, HIGH);  
  }  
  for ( n = 0; n < 3; n++)
  {
    digitalWrite(n, LOW);  
  }
  
       delay(600);
  
  for(int t = 0; t <30; t++)
  {
  	for ( n = 0; n < 3; n++)
  	{
      switch(n)
      {
        case 0:      
        digitalWrite(1,LOW);
        digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
        digitalWrite(6,LOW);
        digitalWrite(7,HIGH);
        digitalWrite(8,LOW);
        digitalWrite(9,HIGH);
        digitalWrite(10,LOW);
        digitalWrite(11,HIGH);
	    digitalWrite(n, HIGH);
        delay(10);
        break;
        
        case 1:
        digitalWrite(0,LOW);
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,HIGH);
        digitalWrite(5,LOW);
        digitalWrite(6,HIGH);
        digitalWrite(7,LOW);
        digitalWrite(8,HIGH);
        digitalWrite(9,LOW);
        digitalWrite(10,HIGH);
        digitalWrite(11,LOW);
        digitalWrite(n, HIGH);
        delay(10);
        break;
        
        case 2:
        digitalWrite(1,LOW);
        digitalWrite(0,LOW);
        digitalWrite(3,HIGH);
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
        digitalWrite(6,LOW);
        digitalWrite(7,HIGH);
        digitalWrite(8,LOW);
        digitalWrite(9,HIGH);
        digitalWrite(10,LOW);
        digitalWrite(11,HIGH);
        digitalWrite(n, HIGH);
        delay(10);
        break; 
      }
  	}
  }
}