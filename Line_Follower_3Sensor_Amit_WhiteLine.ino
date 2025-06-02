#define MS 12      // Middle Sensor
#define LS 13      // Left sensor
#define RS 11      // Right sensor

#define LM1 2       // Left motor
#define LM2 3
#define RM1 4       // Right motor
#define RM2 5

void setup()
{
  Serial.begin(9600);
  pinMode(MS, INPUT);
  pinMode(LS, INPUT);
  pinMode(RS, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
}

void loop()
{
  if(digitalRead(MS) == LOW)  // Middle sensor on white line
  {
    if(digitalRead(LS) == HIGH && digitalRead(RS) == HIGH)
    {
      Serial.println("Move Forward");
      digitalWrite(LM1, LOW);
      digitalWrite(LM2, HIGH);
      digitalWrite(RM1, LOW);
      digitalWrite(RM2, HIGH);
    }
    else if(digitalRead(LS) == LOW && digitalRead(RS) == HIGH)
    {
      Serial.println("Sharp Left");
      digitalWrite(LM1, LOW);
      digitalWrite(LM2, HIGH);
      digitalWrite(RM1, HIGH);
      digitalWrite(RM2, LOW);
    }
    else if(digitalRead(LS) == HIGH && digitalRead(RS) == LOW)
    {
      Serial.println("Sharp Right");
      digitalWrite(LM1, HIGH);
      digitalWrite(LM2, LOW);
      digitalWrite(RM1, LOW);
      digitalWrite(RM2, HIGH);
    }
    else if(digitalRead(LS) == LOW && digitalRead(RS) == LOW)
    {
      Serial.println("Stop (Junction)");
      digitalWrite(LM1, LOW);
      digitalWrite(LM2, LOW);
      digitalWrite(RM1, LOW);
      digitalWrite(RM2, LOW);
    }
  }
  else
  {
    if(digitalRead(LS) == LOW && digitalRead(RS) == HIGH)
    {
      Serial.println("Turn Left");
      digitalWrite(LM1, LOW);
      digitalWrite(LM2, HIGH);
      digitalWrite(RM1, LOW);
      digitalWrite(RM2, LOW);
    }
    else if(digitalRead(LS) == HIGH && digitalRead(RS) == LOW)
    {
      Serial.println("Turn Right");
      digitalWrite(LM1, LOW);
      digitalWrite(LM2, LOW);
      digitalWrite(RM1, LOW);
      digitalWrite(RM2, HIGH);
    }
    else if(digitalRead(LS) == HIGH && digitalRead(RS) == HIGH)
    {
      Serial.println("Stop (Lost)");
      digitalWrite(LM1, LOW);
      digitalWrite(LM2, LOW);
      digitalWrite(RM1, LOW);
      digitalWrite(RM2, LOW);
    }
  }

  delay(5);
}
