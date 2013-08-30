#include <iostream>
#include <string>
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
  std::string name;
public:
  Traveler(const std::string& a):name(a){std::cout<<a<<std::endl;}
  Traveler(Traveler& a):name(a.name){std::cout<<a.name<<std::endl;}
};

class Pager{
  std::string user;
public:
  Pager(const std::string& a):user(a){std::cout<<a<<std::endl;}
  Pager(Pager& a):user(a.user){std::cout<<a.user<<std::endl;}
};

class BusinessTraveler: public Traveler{
  Pager mypager;
public:
  BusinessTraveler() : Traveler("aa"),mypager("sb"){}
  BusinessTraveler& operator =(BusinessTraveler& b) {std::cout<<"in here"<<std::endl;return *this;}
};

/* (15) */
class Origin{
public:
  static void print1(){std::cout<<"in one"<<std::endl;}
  static void print2(){std::cout<<"in two"<<std::endl;}
};

class Derived:public Origin{
public:
  static void print1(){std::cout<<"in derived"<<std::endl;}
};

/* (17) */
class DerivedPrivate: private Origin{
};
class DerivedProtect: protected Origin{
};
void upcast(Origin& );

/* (20) */
class SpaceShip{
public:
  void fly(){std::cout<<"in SpaceShip"<<std::endl;}
};

class Shuttle : public SpaceShip{
public:
  void land(){std::cout<<"in Shuttle"<<std::endl;}
};

/* (21) */
class Rock{
  int data;
public:
  Rock():data(0) {std::cout<<"in default"<<std::endl;}
  Rock(const Rock &a):data(a.data) {std::cout<<"in copy-constructor"<<std::endl;}
  Rock& operator= (Rock& a) {data = a.data; std::cout<<"in assign"<<std::endl; return *this;}
  ~Rock(){std::cout<<"in destructor"<<std::endl;}
};

/* (27)  no sure about the meaning*/
class Subject{
public:
  void f(){std::cout<<"in f"<<std::endl;}
  void g(){std::cout<<"in g"<<std::endl;}
  void h(){std::cout<<"in h"<<std::endl;}
};


/* Mics */
void sub2();

void sub3();

void sub14();

void sub15();

void sub17();

void sub20();

void sub26();
