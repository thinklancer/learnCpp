#include <iostream>

/* (2) */
class A{
public:
  A(){std::cout<<"create A"<<std::endl;}
  ~A(){std::cout<<"delete A"<<std::endl;}
};

class B{
public:
  B(){std::cout<<"create B"<<std::endl;}
  ~B(){std::cout<<"delete B"<<std::endl;}
};

class C: public A{
  B dat;
public:
  C(){std::cout<<"create C"<<std::endl;}
  ~C(){std::cout<<"delete C"<<std::endl;}
};

/* (3) */
class D: public C{
  public:
  D(){std::cout<<"create D"<<std::endl;}
  ~D(){std::cout<<"delete D"<<std::endl;}
};

/* (14) */
class Traveler{
};

class Pager{
};



/* Mics */

void sub2();

void sub3();
