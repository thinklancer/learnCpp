#include "container.h"
#define NDEBUG  // ! no debug feature in assert ! (12)
#include <cassert>
using namespace std;


int main(){

  container a;
  setv(&a,1);
  fetch(&a);
  
  a.setv(2);
  a.fetch();

  a.inflate("hahaha");
  a.empty();
  

  assert(0);
  
  return 0;
}
