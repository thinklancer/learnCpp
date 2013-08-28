#include "dyna.hpp"
using namespace std;

int Counted::count = 0;

void sub1(){
  Counted a;
}

void sub2(){
  Counted *a = new Counted; // no delete, then no deconstruction
  Counted *b = new Counted[10];
  delete []b;
  cout<< "finished"<<endl;
}
