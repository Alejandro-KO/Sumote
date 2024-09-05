#include <Servo.h>

long LS1=0;
int LS2=0;
int LS3=0;
int LS4=0;
int LS5=0;
int LARR=0;

int S1=A1;
int S2=A2;
int S3=A3;
int S4=A4;
int S5=A5;

int M1I=3;
int M1D=4;
int M2I=7;
int M2D=8;

int ARR=13;

Servo BrazoI;
Servo BrazoD;

void setup() 
{
  Serial.begin(9600);
  BrazoI.attach(A0);
  BrazoD.attach(A6);
  pinMode(S1,INPUT);
  pinMode(S2,INPUT);
  pinMode(S3,INPUT);
  pinMode(S4,INPUT);
  pinMode(S5,INPUT);
  pinMode(ARR,OUTPUT);
  pinMode(M1I,OUTPUT);
  pinMode(M1D,OUTPUT);
  pinMode(M2I,OUTPUT);
  pinMode(M2D,OUTPUT);

  BrazoI.write(90);
  BrazoD.write(90);
}

void loop()
{
  if(ARR==1)
  {
    BrazoI.write(0);
    BrazoD.write(0);
  }
  else
  {
    BrazoI.write(90);
    BrazoD.write(90);
  }
}
