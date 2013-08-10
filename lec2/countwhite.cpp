//:Think in C++ Vol 1: chapter 2 : Ex3
/*
Create a program that opens a file and counts the whitespace-separated words in that file.
 */

#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
  ifstream in("CalcArea.cpp");  // fstream open file
  vector<string> words;         // declare vector
  string word;                  // declare string
  while(in >> word){            // read in whitespace-separated content
    words.push_back(word);      // push to the end of the vector
  }
  cout << words.size() <<endl;  // print the length of the vector
  return 0;
}
