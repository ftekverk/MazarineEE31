//delay of 4 seconds
//
//  delay_time = 4000;
//  time_now = millis();
//  while(delay_time > millis() - time_now){}

int q1 = 5;
int q2 = 3;
int q3 = 9;
int q4 = 6;



int analogSpeed = 125;




//MOTOR EASY FUNCTIONS

void motorOneForward(){
     //drive motor 1 forward for 2 sec
     analogWrite(q1, analogSpeed);
     analogWrite(q2, 0);
}

void motorOneBackwards(){
     //drive motor 1 forward for 2 sec
     analogWrite(q1, 0);
     analogWrite(q2, analogSpeed);
}

void motorOneNeutral(){
     analogWrite(q1, 0);
     analogWrite(q2, 0);
}


//Right Motor
void motorTwoForward(){
     analogWrite(q3, analogSpeed);
     analogWrite(q4, 0);
}


void motorTwoBackwards(){
     analogWrite(q3, 0);
     analogWrite(q4, analogSpeed);
}


void motorTwoNeutral(){
     analogWrite(q3, 0);
     analogWrite(q4, 0);
}


void forward(){
    motorOneForward();
    motorTwoForward();
}


void motorsNeutral(){
  motorOneNeutral();
  motorTwoNeutral();
}

void runMotorsForward(){
    int delay_time;
    unsigned long time_now;
    
    motorOneForward();
    motorTwoForward();
    
    delay_time = 1000;
    time_now = millis();
    while(delay_time > millis() - time_now){} 
    
    motorsNeutral();
    
    delay_time = 1000;
    time_now = millis();
    while(delay_time > millis() - time_now){} 
}


void runMotorsBackward(){
    int delay_time;
    unsigned long time_now;
  
    motorOneBackwards();
    motorTwoBackwards();
    
    delay_time = 1000;
    time_now = millis();
    while(delay_time > millis() - time_now){}
    
    motorsNeutral();
    
    delay_time = 1000;
    time_now = millis();
    while(delay_time > millis() - time_now){}
}



void turnCounterClockwise(){
      int delay_time;
      unsigned long time_now;
  
      motorOneForward();

      delay_time = 2800;
      time_now = millis();
      while(delay_time > millis() - time_now){}
      
      motorOneNeutral();
      
      delay_time = 1000;
      time_now = millis();
      while(delay_time > millis() - time_now){}
}

void turnClockwise(){
      int delay_time;
      unsigned long time_now;
      
      motorTwoForward();
      
      delay_time = 2800;
      time_now = millis();
      while(delay_time > millis() - time_now){}

      motorTwoNeutral();

      delay_time = 1000;
      time_now = millis();
      while(delay_time > millis() - time_now){}
}


void pivot(){
    int delay_time;
    unsigned long time_now;
      
    motorOneForward();
    motorTwoBackwards();

    delay_time = 1250;
    time_now = millis();
    while(delay_time > millis() - time_now){}

    
    motorsNeutral();

    
    delay_time = 1000;
    time_now = millis();
    while(delay_time > millis() - time_now){}
}



void leftMorethanRight(){
    int motorDifference = 300;

    //drive left motor a little faster
    analogWrite(q1, analogSpeed + motorDifference);
    analogWrite(q2, 0);
    
    analogWrite(q3, analogSpeed);
    analogWrite(q4, 0);
}


void rightMorethanLeft(){
    int motorDifference = 300;

    analogWrite(q1, analogSpeed);
    analogWrite(q2, 0);

    //drive right motor a little faster
    analogWrite(q3, analogSpeed + motorDifference);
    analogWrite(q4, 0);
}




void veerRight(){
    int delay_time;
    unsigned long time_now;

    leftMorethanRight();


    delay_time = 200;
    time_now = millis();
    while(delay_time > millis() - time_now){}

    motorsNeutral();
}

void veerLeft(){
    int delay_time;
    unsigned long time_now;

    rightMorethanLeft();


    delay_time = 200;
    time_now = millis();
    while(delay_time > millis() - time_now){}

    motorsNeutral();
}
