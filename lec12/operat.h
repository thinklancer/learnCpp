#include <iostream>

class Integer{
  int data;
 public:
  void print(std::ostream &); // (2)
  const Integer& operator ++ ();
  const Integer& operator -- ();
  const Integer operator ++ (int);
  const Integer operator -- (int);
  const Integer operator +() const;
  // const Integer operator +(const Integer &) const; //(2)
  const Integer operator -(const Integer &) const; //(3)
  Integer(int a=0): data(a){}

  friend const Integer operator +(const Integer&a, const Integer &b){return Integer(a.data+b.data);} // (7)
  friend std::ostream& operator << (std::ostream &, const Integer& );

};

void sub1();

/* (11) */
class Number{
  double data;
 public:
  Number (const Number &a){std::cout<< "called "<<std::endl; data=a.data;};  // actually never called.  but if private, the compiler complained!!
 Number(double a=0): data(a){}
  void print() const {std::cout<< data <<std::endl;}
  const Number operator +(const Number& a) const {return Number(data+a.data);}
  const Number operator -(const Number& a) const {return Number(data-a.data);}
  const Number operator *(const Number& a) const {return Number(data*a.data);}
  const Number operator /(const Number& a) const {return Number(data/a.data);}
  Number& operator=(const Number &a) {data = a.data+1; return *this;} // overload = , can't be member function
  operator int() const { return int(data);}
};

void sub11();
