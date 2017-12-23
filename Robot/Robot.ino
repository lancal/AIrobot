//int STBY = 10;
int STBY = 9;

//motorA
//int PWMA = 3;
int PWMA = 5;
//int AIN1 = 9;
int AIN1 = 4;
//int AIN2 = 8;
int AIN2 = 3;


//motorB
int PWMB = 6;
//int BIN1 = 11;
int BIN1 = 7;

//int BIN2 = 12;
int BIN2 = 8;


void setup() {
  pinMode(STBY, OUTPUT);
  pinMode(PWMA, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);

  pinMode(PWMB, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
}

void loop() {
  //move(1,255,1);
  //move(2,255,0);

  //delay(1000);
  //stop();
  //delay(250);

  move(1,128,1);
  move(2,128,0);

  delay(1000);
  stop();
  delay(250);
}

void move(int motor, int speed, int direction){
  digitalWrite(STBY, HIGH);

  boolean inPin1 = LOW;
  boolean inPin2 = HIGH;

  if(direction == 0){
    digitalWrite(AIN1, inPin1);
    digitalWrite(AIN2, inPin2);
    analogWrite(PWMA, speed);
  }

  if(direction == 1){
    digitalWrite(BIN1, inPin1);
    digitalWrite(BIN2, inPin2);
    analogWrite(PWMB, speed);
  }
}

void stop(){
  digitalWrite(STBY,LOW);
}

