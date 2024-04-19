


const byte ir_pinR = 2; // right rotation
const byte ir_pinL = 3; // left rotation

int ir_L;
int ir_R;


#include <Stepper.h>

const int stepsPerRevolution = 1600;  // change this to fit the number of steps per revolution
// for your motor

Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(60);

  pinMode(ir_pinL, INPUT_PULLUP);
  pinMode(ir_pinR, INPUT_PULLUP);
  Serial.begin(9600);

  // Setting up interrupt
  attachInterrupt(digitalPinToInterrupt(ir_pinR), Right, FALLING );

  attachInterrupt(digitalPinToInterrupt(ir_pinL), Left, FALLING );
  ir_R =0;
  ir_L =0;

  // ir_RP=0;
  // ir_RL=0;

}

void loop() {

ir_R = digitalRead(ir_pinR);
ir_L = digitalRead(ir_pinL);




// printing values for check
Serial.print("LEFT");
Serial.println(ir_L);

Serial.print("Right");
Serial.println(ir_R);

delay(1000);


  
// Basic code for running stepper
  // step one revolution  in one direction:
//   Serial.println("clockwise");
//   myStepper.step(stepsPerRevolution);
//   delay(500);

//   // step one revolution in the other direction:
//   Serial.println("counterclockwise");
//   myStepper.step(-stepsPerRevolution);
//   delay(500);
// }

}

void Right(){

  {
      Serial.println("clockwise");

  myStepper.step(stepsPerRevolution);
  delay(500);
  }

  // else{
  //   Serial.println("BOTH HIGH");
  // }
}

void Left(){

  {
     Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(500);
  }

  // else{
  //   Serial.println("BOTH HIGH");
  // }
}
