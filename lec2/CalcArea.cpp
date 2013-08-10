//:Think in C++ Vol 1: chapter 2 : Ex2
/*
Using Stream2.cpp and Numconv.cpp as guidelines, create a program that asks for the radius of a circle and prints the area of that circle. You can just use the ‘*’ operator to square the radius. Do not try to print out the value as octal or hex (these only work with integral types).
 */
#include <iostream>     // include standard library
using namespace std;    // declare namespace

int main(){             // main function
  int r,area;           // declare variable
  cin >> r;             // command line input
  area = r*r;           // calculation
  cout << area <<endl;  // command line output
  return 0;             // return and quit main() function
}
