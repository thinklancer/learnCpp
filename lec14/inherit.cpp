#include "inherit.hpp"
#include <vector>
using namespace std;

void sub2(){
  C a;
}

void sub3(){
  D a;
}

void sub14(){
  BusinessTraveler st;
  BusinessTraveler ff;
  ff = st;
}

void sub15(){
  Origin a;
  Derived b;
  a.print1();
  a.print2();
  b.print1();
  b.print2();
}

void sub17(){
  DerivedPrivate a;
  DerivedProtect b;

  //upcast(a);
  //upcast(b); // upcast doesn't work for protected / private
}
void upcast(Origin& a){
}

void sub20(){
  SpaceShip* a;
  Shuttle b;
  a = &b;
  a->fly();
  // a->land(); // can't upcast
}

void sub26(){
  vector<Rock> c(3);  // one more Rock created
  vector<Rock*> d(3); // no Rock created
  // vector<Rock&> f(3); // not allowed
}
