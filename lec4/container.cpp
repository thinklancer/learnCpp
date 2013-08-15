#include "container.h"
#include<cstdio>
#include<iostream>
using namespace std;

void container:: print(){
  puts("hello");  // for C, function declare is not necessary, but for C++, function must be declared before usage.
}

void fetch(container *p){
  cout << p->data <<endl;
}
void setv(container *p, int i)
{
  p->data = i;
}

void container:: fetch(){
  cout << this->data <<endl;
}
void container:: setv(int i)
{
  this->data = i;
}

void container:: inflate(char * line){ // (18)
  int n;
  n = sizeof(line)/sizeof(char);
  this->array = new char[n];  
  for(int i=0;i<n;i++)
    this->array[i] = line[i];
  cout << this->array<<endl;
}

void container:: empty(){
  delete this->array;
}
