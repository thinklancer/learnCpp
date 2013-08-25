#include <iostream>

void sub3();
void sub8(char&);

// (9)
class c9{
 public:
  void printc() const;
  void printnc();
};

void sub9a(c9);
void sub9b(c9&);
void sub9c(const c9);

// (17)
class c17{
  double *p;
 public:
  c17(double);
  ~c17();
};

void sub17(c17 &); // fail without &; the delocation of pointer is dangerous.

