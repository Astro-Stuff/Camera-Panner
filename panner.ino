
int left = 0;
int right = 0;

int d1 = A2;
int d3 = A0;

int m1 = 9;
int m2 = 8;

int timeMoving = 50;
int timeStop = 0;

void setup()
{
  pinMode(d1, INPUT);
  pinMode(d3, INPUT);
  
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);

  Serial.begin(9600);
}
 
void loop()
{
   left = digitalRead(d1);
   if(left ==1){
      turn(m1, m2); 
   }else{
      right = digitalRead(d3);
      if(right ==1){
         turn(m2, m1);
      }  
    }
delay(10);
  
       
}

void turn(int motorHigh, int motorLow){
  Serial.println(motorHigh);
        digitalWrite(motorHigh, HIGH); //gray
        digitalWrite(motorLow, LOW); //white        
        delay(timeMoving);

        digitalWrite(motorHigh, LOW); //gray
        digitalWrite(motorLow, LOW); //white
        delay(timeStop);

}

