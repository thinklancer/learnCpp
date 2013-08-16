#include "simple.hpp"
#include <iostream>
using namespace std;

int main(){
  simple *a = new simple(1);
  goto skip; // (4) failed!!

  delete a;
 skip:
  
  int i; // (5)
  for(i=0;i<10;i++)
    cout << i <<endl;
  for(int i=0;i<10;i++)
    cout << i <<endl;
  cout << "finish"<<endl;

  // aggregate initialization and automatic counting (8,9)
  simple b[] = {simple(1),simple(2),simple(3)};
  for(i=0;i<(sizeof b / sizeof *b);i++){
    cout << i <<endl;
  }

  return 0;
}
