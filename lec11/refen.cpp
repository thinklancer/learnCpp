#include <cstdlib>
#include "refen.h"
using namespace std;

void sub3(){
  int s,c;
  // int& a; // reference need to be declared and initialized
  int & a = c;
  a = s;
  // int & b = NULL; // forbid reference to NULL
}

void sub8(char& ss){
  ss = 'b';
}

/* (9) */
void sub9a(c9 a){ // works fine
  a.printc();
  a.printnc();
}

void sub9b(c9 &a){ // works fine
  a.printc();
  a.printnc();
}

void sub9c(const c9 a){
  a.printc();
  // a.printnc(); // problem with this line: non-const
}

void c9::printc() const {
  cout << "in const" <<endl;
}

void c9::printnc(){
  cout << "in non-const" <<endl;
}

c17::c17(double tmp){
  p = new double;
  *p = tmp;
}

c17::~c17(){
  cout << *p <<endl;
  *p = -1;
  delete p;
  p = NULL;
}

void sub17(c17 &a){
  ;
}
