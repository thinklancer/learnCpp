#include "simple.hpp"
#include <iostream>
using namespace std;


simple::simple(int i){
  data = i;
  cout << "creating simple"<<endl;
}

simple::~simple(){
  cout << "deleting simple"<<endl;
}
