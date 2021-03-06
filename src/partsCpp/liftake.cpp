#include "main.h"
#include "partsHpp/liftake.hpp"

//intakes balls
void spin_intake(int power){
  leftIntake.move(power);
  rightIntake.move(-power);
}

//intake task
void intakeT(void* param){
  spin_intake(127);
  c::delay((int) param);
  spin_intake(0);
}

//lifts balls
void lift(int power){
  liftMotor1.move(power);
  liftMotor2.move(-power);
}

//lift task
void liftT(void* param){
  lift(127);
  c::delay((int) param);
  lift(0);
}

void liftDelay(void* param){
  c::delay((int) param);
  lift(127);
  c::delay(200);
  lift(0);
}
