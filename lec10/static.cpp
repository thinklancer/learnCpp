#include "static.hpp"
#include <iostream>
using namespace std;

void sub1(int i){ //(1)
  int array[] = {1,2,3,4,5,6,-1};
  static int* p = array;
  if (i==0 && *p != -1){
    cout << *p++ <<endl;
  }
}

void sub2(bool flag){ //(2) Fibonacci
  static int prev[]={1,1},temp;
  if (flag){
    prev[0] = 1; prev[1] =1;
  } else {
    temp = prev[1];
    prev[1] = temp+prev[0];
    prev[0] = temp;
  }
  cout << prev[0] <<endl;
}

/* (3) int container */
int container::num = 0;// no need for static any more

void container::printstatic(){ // no need for static any more
  cout << num <<endl;
}

void sub3(){
  container::printstatic();
  container a(4),b(5);
  a.printstatic();
  b.print();
}

/* (4) monitor */
void sub4(){
  static Monitor mm;
  mm.incident();
  mm.print();
}

int Monitor::number_incident = 0;

void sub5(){
  Monitor s;
  static Cmonitor a(&s);
}

void sub10(){ // won't clash with the static value in main.cpp
  q10 = 2;
  cout << q10 << endl;
}

container a(2);


void name1::print1(){
  cout << 1 <<endl;
}

void name1::print2(){
  cout << 2 <<endl;
}
