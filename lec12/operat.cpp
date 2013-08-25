#include "operat.h"

// (1) operate as member function
const Integer& Integer::operator ++ (){
  data++;
  return *this;
}

const Integer Integer::operator ++ (int){
  Integer before(data);
  data++;
  return before;
}

const Integer& Integer::operator -- (){
  data--;
  return *this;
}

const Integer Integer::operator -- (int){
  Integer before(data);
  data--;
  return before;
}

void Integer::print(std::ostream & co){
  co << data << std::endl;
}

const Integer Integer::operator +(const Integer &a) const{
  return Integer(data+a.data);
}

const Integer Integer::operator -(const Integer &a) const{
  return Integer(data-a.data);
}

const Integer Integer::operator +() const{
  return *this;
}

void sub1(){
  Integer a(1),b,c;
  c = +a; // 1
  b = ++a; // 2
  c.print(std::cout);
  b.print(std::cout);
  
  /* (2) */
  a = b-c+a; // 2-1+2
  a.print(std::cout);

  /* (4)-(5) */
  a = b++ + c--; // 2+1
  a.print(std::cout);
}
