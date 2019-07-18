#include "PID.h"



PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  
   // PID coefficients
   Kp = Kp_;
   Ki = Ki_;
   Kd = Kd_;
   
   // errors
   p_error = 0.0;
   i_error = 0.0;
   d_error = 0.0;
   

}

void PID::UpdateError(double cte) {
  
   i_error += cte;
   d_error = cte - p_error;
   p_error = cte;

}

double PID::TotalError() {
 
  return (- Kp * p_error - Kd * d_error - Ki * i_error);  // TODO: Add your total error calc here!
  
  
 /**
   * Test without controller, or by using only P or PD controller
   */
 
 // return 0.0; 
 // return (- Kp * p_error );
 // return (- Kp * p_error - Kd * d_error);
  
  
}
