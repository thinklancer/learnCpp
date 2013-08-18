#include "head.h"
extern const int cb; // (2,7) no difference between c and c++
const int cb=2;

int main(){
  const int n1=1,n2=2,n3=3;
  double a[n1+n2+n3];  //(1) no difference between c and c++ @ 2013

  // sub();
  // sub5();
  // sub9();
  // sub13(1);
  // sub14();
  
  ff af;
  const ff cf;
  // cf.change(3.); // can't call non-const. function from const. obj. (24)
  volatile ff vf;
  // vf.change(3.);  // can't call non-volatile function from volatile obj. (27)
  
  sub28();

}

