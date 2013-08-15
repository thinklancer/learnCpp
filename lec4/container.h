#ifndef CONTAINER // preprocessor for compiling check (11)
#define CONTAINER

typedef struct container{ // (2)
  int data;
  char *array;
  void print();  // (1)
  void fetch(); // function inside structure (5)
  void setv(int i);
  void inflate(char *);
  void empty();
};

void fetch(container *p);   // (4)
void setv(container *p, int i);

#endif CONTAINER
