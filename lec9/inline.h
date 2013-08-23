#include <iostream>
#include <string>

#define F(x) ((x)+1)
#define FLOOR(x,b) (x)>=(b)?0:1

void sub1();
void sub4();
void sub10();

float f1(float);
float f2(float);

class Carray{ //(7)  !! trick to create empty const string
  char *dat;
 public:
  Carray(const std::string& = "");
  void print(){std::cout<<dat<<std::endl;}
};

enum Hue {red,blue,yellow};

class Color{
  Hue dat;
 public:
 Color(Hue ih) : dat(ih) {};
  Hue get(){return dat;}
  void set(Hue ih){dat=ih;}
};
