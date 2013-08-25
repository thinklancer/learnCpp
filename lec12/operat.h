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
  const Integer operator +(const Integer &) const; //(2)
  const Integer operator -(const Integer &) const; //(3)
  Integer(int a=0): data(a){}

  
};

void sub1();
