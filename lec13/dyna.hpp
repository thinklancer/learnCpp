#include <iostream>

/* (1) */
class Counted{
  int id;
  static int count;
public:
  Counted():id(count++){ std::cout << "create id: "<<id<<std::endl;}
  ~Counted(){std::cout<<"delete id: "<<id<<std::endl;}
};



void sub1();
void sub2();
