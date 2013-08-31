#include "poly.hpp"
#include <vector>
#include <typeinfo>
using namespace std;

void Shape::draw(){cout<<"Draw Shape"<<endl;}

void sub3(Shape& a){
  a.draw();
}

void sub1(){
  Shape *s[] = {new Circle, new Square, new Triangle };
  // Shape c; can't declare with pure vitural function inside, even it is declare again!
  s[0]->draw();
  s[1]->draw();
  s[2]->draw();

  sub3(*s[2]);
}

void sub6(){
  Rodent* s[] = {new Hamster, new Mouse};
  s[0]->speak();
  s[1]->speak();
}

void sub7(){
  vector<Rodent*> c(3);
  c[1] = new Hamster;
  c[0] = new Mouse;
  c[2] = new Gerbil;

  c[2]->speak();
}

void sub8(){
  Rodent *a = new BlueHamster;
  a->speak();
}

Rodent::~Rodent(){} // (10)

void sub9(){
  Rodent *a = new Hamster;
  delete a;
}

void sub15(){
  Base* a = new Derived;
  Base b;
  b.test();
  a->test();
}

void test(Base a){ // slicing
cout<< sizeof(a)<<endl;
}

void sub18(){
  Base a;
  Derived b;
  cout<< sizeof(a)<<endl;
  cout<< sizeof(b)<<endl;
  test(b); 
}

void sub22(){
  Dover b;
  Over *a = &b;
  a->print(); // name is not hiding
  // b.print(1.);  // name hiding
}

void sub25(){
  Clone1 a;
  Clone2 b;
  Origin *p;
  p=&a;
  if (typeid(*(p->clone(a)))==typeid(Clone1))
    cout<<"is"<<endl;
}
