#include "temp.hpp"
using namespace std;
void sub6(){
  Set<int> ic;
  ic.add(10);
  ic.add(12);
  ic.add(10);
  ic.add(2);
  ic.add(132);

  Set<int>::iterator cc = ic.begin();
  for (;cc<ic.last();cc++)
    cout<<*cc<<endl;
}
