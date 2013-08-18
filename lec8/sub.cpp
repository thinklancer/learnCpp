#include "head.h"
#include <iostream>
#include <ctime>
using namespace std;

extern int cb;

void sub(){
  cout << cb <<endl;
}

void sub5(){ // (5) run time const
  time_t rawtime;
  time(&rawtime);
  const char* c = ctime(&rawtime);
  cout << c <<endl;
  // c[0] = "a"; // (5,6) fail to change const.
}

void sub9(){ // (9) pointer to const.
  const long *p1;
  long d[] = {1,2,3,4};
  p1 = &(d[1]);
  cout << *p1 <<endl;
  // *p1 = 2; // fail to change const pointer content

  const long* const p2 = &(d[2]);
  cout << *p2 <<endl;
  // p2 = &(d[1]); // (10) fail to change const pointer
}


void sub12(){
  //char *a = "abcd"; // character array literal, use a[] will work
  char a[] = "abcd";
  char *p = a;
  *p = 'b'; // it is not working for *a, but works for a[]
  cout << *p <<endl;
}

void sub13(int a){
  const int b = a;
  cout << b << endl;
}

void sub14(float a){ //(14) use reference to emphasize the const. property
  const float& d = a;
  // d ++; // (14) force a/b const.
}

ff::ff(): cf(1),f(2){} // (19) constructor initializer list

void ff::change(float newf){
  f = newf;
  vf = newf; // OK.
}

void ff::changec(float newf) const{
  // f = newf;  // can't change const object. (23)
  mf = newf;
}

void ff::changev(float newf) volatile{
  vf = newf;
}

bird::bird():num(12){}

void bird::fly(){
  cout << "flying" << num <<endl;
}

void sub28(){
  rock r;
  bird *bd;
  void *p;
  p = (void*) &r;
  bd = (bird*)p;
  bd->fly();  // cast is dangerous (28)
}
