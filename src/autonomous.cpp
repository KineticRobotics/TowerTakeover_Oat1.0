
#include "main.h"
#include "autofunc.h"
using namespace okapi;
void autonomous()
{
  dr4bL2.setBrakeMode(AbstractMotor::brakeMode::hold);  
  dr4bR2.setBrakeMode(AbstractMotor::brakeMode::hold);
  dr4bL2.setReversed(true);
  right2.setReversed(true);
  //dr4bControl(63, 1000);
  releaseClaw();
  pros::delay(100);
  //dr4bControl(4.0);
  pros::delay(300);
  polynomial(3, 50);
  dr4bControl(10.0);
  pros::delay(1000);
  dr4bControl(-8.0);
  pros::delay(150);
  claw2.moveVelocity(-127);
  polynomial(10, 60);
  claw2.moveVelocity(0);
  dr4bControl(26.5);
  pros::delay(150);
  polynomial(19, 70);
  claw2.moveVelocity(-127);
  dr4bControl2(-26.5);
  pros::delay(1500);
  claw2.moveVelocity(0);
  pros::delay(100);
  claw2.moveVelocity(50);
  polynomialB(32.0, 150);
  polyTurn(95, 75, 1);
  polynomial(33.0, 130);
  claw2.moveVelocity(-127);
  dr4bControl(15.0);
  pros::delay(1000);
  polynomialB(9.0, 127);
  claw2.moveVelocity(0);
  /*polynomial(6, 80);
  claw2.moveVelocity(0);
  polynomial(20, 127);
  dr4bControl(20.0);
  polynomial(3, 80);
  claw2.moveVelocity(-127);
  dr4bControl(-10);
  claw2.moveVelocity(0);*/
  //polyTurn(140, 69)
  //polynomial();
  //dr4bControl(4.0);
  //PIDsimple2.moveDistanceAsync(25_in);
  //polynomial(25.0, 127);
  //PIDsimple2.turnAngle(90_deg);
  //polyTurn(180, 127, .95);
  //polyTurn(90, 100, 1);
  //pros::lcd::set_text(1, "Exit PID");
  //dr4bControl(10.0);
  
/*
  //PIDsimple2.moveDistance(24_in*1.106);
  PIDsimple2.moveDistance(24_in);
  pros::lcd::set_text(1, "exit PID");
  pros::delay(5000);
  PIDsimple2.moveDistance(-12_in);
  pros::lcd::set_text(1, "exit 2nd PID");
  */
  //PIDsimple2.autotune();

  //pros::lcd::set_text(1, "exit func 3");

  /* NOT TESTED; PLAN FOR FIRST GAME
  dr4bL2.moveVelocity(-200); //move dr4b up
  dr4bR2.moveVelocity(200);
  pros::delay(1000);

  claw2 = 30;  //open claw a little

  dr4bL.moveVelocity(-200); //move dr4b down
  dr4bR.moveVelocity(200);
  pros::delay(1000);

  claw2 = 0; //close claw

  PIDsimple2.turnAngle(350); //IDK? Navigate cubes???
  PIDsimple2.moveDistance(30_in); //move toward goalzone

  claw2 = 40; //score???
  pros::delay(500);
  claw2 = 0;

  PIDsimple2.moveDistance(-5_in); //move backwards

 */
}
