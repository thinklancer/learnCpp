#include <iostream>

/* (1) */
class Shape{
public:
  virtual void draw() = 0;
};

class Circle: public Shape{
public:
  void draw() {std::cout<<"Drawing Circle"<<std::endl;}
};

class Square: public Shape{
public:
  void draw() {std::cout<<"Drawing Square"<<std::endl;}
};

class Triangle: public Shape{
public:
  void draw() {std::cout<<"Drawing Triangle"<<std::endl;}
};

/* (6) */
class Rodent{
public:
  virtual void speak() = 0;
  virtual ~Rodent() = 0; // {std::cout<<"Rodent dies"<<std::endl;}
};

#define CREATECLASS(x) class x :public Rodent{ public: void speak() {std::cout<<#x<<" speaks"<<std::endl;} ~x(){std::cout<<#x<<" dies"<<std::endl;}}

CREATECLASS(Gerbil);

CREATECLASS(Hamster);

CREATECLASS(Mouse);

class BlueHamster : public Hamster{
public:
  void speak(){std::cout<<"BlueHamster speaks"<<std::endl;}
};

/* (15)  not sure.. */
class Base{
  long a;
public:
  virtual void speak(){std::cout<<"Base speaks"<<std::endl;}
  Base(): a(0){;speak();}
  void test(){speak();}
};

class Derived: public Base{
  long b;
public:
  void speak(){std::cout<<"Derived speaks"<<std::endl;}
  Derived():b(0) { speak();}
  void test(){speak();}
};

/* (22) */
class Over{
public:
  virtual void print(){std::cout<<"print"<<std::endl;}
  virtual void print(int i){std::cout<<"printi "<<i<<std::endl;}
  virtual void print(double d){std::cout<<"printd "<<d<<std::endl;}
};

class Dover: public Over{
public:
  void print(){std::cout<<"print from D"<<std::endl;}
};


/* (25) */
class Origin{
public:
  virtual Origin* clone(const Origin&a){std::cout<<"in origin"<<std::endl;return new Origin(a);}
};

class Clone1 : public Origin{
public:
  Origin* clone(const Origin&a){std::cout<<"in 1"<<std::endl; return new Clone1;}
};

class Clone2 : public Origin{
public:
  Origin* clone(const Origin&a){return new Clone2;}
};

/* mics */
void sub1();
void sub6();
void sub7();
void sub8();
void sub9();
void sub15();
void sub18();
void sub22();
void sub25();
