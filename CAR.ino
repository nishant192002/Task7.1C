 // Starting of Program
int m1a = 12;
int m1b = 11;
int m2a = 10;
int m2b = 9;
int buzz = 8;
char val;

void setup() 
{  
pinMode(m1a, OUTPUT);  // Digital pin 5 set as output Pin
pinMode(m1b, OUTPUT);  // Digital pin 4 set as output Pin
pinMode(m2a, OUTPUT);  // Digital pin 6 set as output Pin
pinMode(m2b, OUTPUT);  // Digital pin 7 set as output Pin
pinMode(buzz, OUTPUT); // Digital pin for buzzer
Serial.begin(9600);
}

void loop()
{
  while (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }

 if( val == 'V') // Horn on
    { 
      digitalWrite(buzz, HIGH);    
    }
 if( val == 'v') // Horn off
    {
     digitalWrite(buzz, LOW); 
    }
  if( val == 'F') // Forward
    {
      digitalWrite(m1a, LOW);
      digitalWrite(m1b, HIGH);
      digitalWrite(m2a, HIGH);
      digitalWrite(m2b, LOW);  
    }
  else if(val == 'B') // Backward
    {
      digitalWrite(m1a, HIGH);
      digitalWrite(m1b, LOW);
      digitalWrite(m2a, LOW);
      digitalWrite(m2b, HIGH);
    }
  
    else if(val == 'L') //Left
    {
      digitalWrite(m1a, HIGH);
      digitalWrite(m1b, LOW);
      digitalWrite(m2a, HIGH);
      digitalWrite(m2b, LOW);
    }
    else if(val == 'R') //Right
    {
      digitalWrite(m1a, LOW);
      digitalWrite(m1b, HIGH);
      digitalWrite(m2a, LOW);
      digitalWrite(m2b, HIGH);  
    }
    else if(val == 'S') //Stop
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW); 
    }
}
