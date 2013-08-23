#include "inline.h"
#include <iostream>
#include <ctime>
using namespace std;

void sub1(){
  cout << F(12) <<endl;  // (1)
  if (FLOOR(0x01,0x07)) cout << "PASS" << endl; // compiling error without parenthesis (2)
}

inline float f1(float a){
  return a;
}

float f2(float a){
  return a;
}

void sub4(){ // order is more important
  long i;
  float a;
  clock_t t;

  t = clock();
  for(i=0;i<5000000;i++)
    a = f1(a);
  cout << (float)(clock()-t)/CLOCKS_PER_SEC << endl;  

  t = clock();
  for(i=0;i<5000000;i++)
    a = f2(a);
  cout << (float)(clock()-t)/CLOCKS_PER_SEC << endl;  
}

void sub10(){
  Color temp(blue);
  cout << temp.get() <<endl;
}
