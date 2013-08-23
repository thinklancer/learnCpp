#ifndef statica
#define statica

#include <iostream>

// #define creatfunc(a) void printa##(){cout << a## <<endl;}

void sub1(int=0);
void sub2(bool flag=false);
void sub3();
void sub4();
void sub5();
void sub10();
void sub12();

/* (3) */
class container{
  static const int length = 100;  // static const need to be initialized in-place
  int dat[length];
  const int size;
  static int num;  // static number defined outside.
public:
  container(int i):size(i) {num++;} // in line constructor
  static void printstatic();
  void print();
};

inline void container::print(){ // inline must be defined with class
  using namespace std;
  printstatic();
  for(int i=0;i<size;i++)
    cout << dat[i] << " ";
  cout << endl;
}

/* (4) */
class Monitor{
  static int number_incident;
public:
  static void print();
  void incident(){number_incident++;}
  void decrement(){number_incident--;}
};

inline void Monitor::print(){
  using namespace std;
  cout << number_incident <<endl;
}

/* (5) */
class Cmonitor{
  Monitor *pm;
public:
  Cmonitor(Monitor *p){pm=p;pm->incident();Monitor::print();}
  ~Cmonitor(){pm->decrement();pm=NULL;Monitor::print();};
};

// (10)
static int q10;


// (16)
namespace name1{
  void print1();
  void print2();
}

#endif
