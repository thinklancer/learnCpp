#include "operat.h"
using namespace std;

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

void Integer::print(ostream & co){
  co << data << endl;
}

/* const Integer Integer::operator +(const Integer &a) const{
  return Integer(data+a.data);
}
*/

const Integer Integer::operator -(const Integer &a) const{
  return Integer(data-a.data);
}

const Integer Integer::operator +() const{
  return *this;
}

ostream& operator << (ostream &co, const Integer& a){ // (6)
  co << "output:" << a.data << endl;
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
  a.print(cout);

  cout << a; // (6)

  cout << a+4 ; // (29) reflexivity
}

/* (11) */
void sub11(){
  Number a(10),b(3);
  Number c ; // = a/b; // copy-constructor will be called automatically
  (a/b).print();
  c = a/b;
  c.print();

  cout << int(c) <<endl;
 
}
