#include "static.hpp"
#include <iostream>
using namespace std;

void sub1(int i){ //(1)
  int array[] = {1,2,3,4,5,6,-1};
  static int* p = array;
  if (i==0 && *p != -1){
    cout << *p++ <<endl;
  }
}

void sub2(bool flag){ //(2) Fibonacci
  static int prev[]={1,1},temp;
  if (flag){
    prev[0] = 1; prev[1] =1;
  } else {
    temp = prev[1];
    prev[1] = temp+prev[0];
    prev[0] = temp;
  }
  cout << prev[0] <<endl;
}
