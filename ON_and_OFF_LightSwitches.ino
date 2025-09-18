const int DOut=2;//declaring the output pin number and assigning it to LED
const int DA=3;//declaring the first input pin number and assigning it to LED
const int DB=4;//declaring the second input pin number and assigning it to LED
const int ex=5;//setting the led on pin number 5 and assigning it to LED
const int SA=7;//declaring the pin number of switch A
const int SB=8;//declaring the pin number of switch B

void setup() {
  // put your setup code here, to run once:
pinMode(DOut,OUTPUT);//SETTING OUTPUT USING pinMODE
pinMode(DA,OUTPUT);//setting first output using pinMode
pinMode(DB,OUTPUT);//setting second output using pinMode

pinMode(SA,INPUT);//setting first input using pinMode
pinMode(SB,INPUT);//setting first input using pinMode
digitalWrite(ex,LOW);//since we are not using 4th LED we are assigning it as low hence off
}

void loop()
{
    // put your main code here, to run repeatedly:
  boolean pinAState=digitalRead(SA);//Reading the state of pin A
  boolean pinBState=digitalRead(SB);//Reading the state of pin B

  if(pinAState == HIGH)//if the state of pin A is High then the following condition is executed
  {
    digitalWrite(DA,HIGH);
  }
  else //if the state of pin A is low then the else condition is executed
  {
      digitalWrite(DA,LOW);
  }
      
  if(pinBState == HIGH)//if the state of pin A is High then the following condition is executed
  {
    digitalWrite(DB,HIGH);
  }
  else //if the state of pin B is low then the else condition is executed
  {
    digitalWrite(DB,LOW);
  }

  boolean pinOutState;//declaring the state of output
  //AND
  pinOutState=pinAState && pinBState; //ANDing input pin A with input pin B for obtaining the desired output
  digitalWrite(DOut,pinOutState);//displays digital output pin number in combination with its output state


}
