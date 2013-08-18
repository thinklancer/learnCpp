const int cc = 2; // (4) will cause duplicate symbol in C compiler

void sub5();
void sub();
void sub9();
void sub12();
void sub13(int);
void sub14();
void sub28();

class ff{
  float f;
  const float cf;
  mutable float mf;
  volatile float vf;
 public:
  ff();
  void change(float);
  void changec(float) const;
  void changev(float) volatile;
};


class bird{
  float num;
 public:
  bird();
  void fly();
};

class rock{
};
