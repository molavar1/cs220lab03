#include <stdio.h>

struct bad_struct {
  short s1;
  long l1;
  short s2;

};

struct good_struct {
  short s1;
  short s2;
  long l1;
};

int main() {
  struct good_struct gs;
  struct bad_struct bs;
  struct good_struct *p;
  p=&gs;
  printf("%lu\n", sizeof(gs));
  printf("%lu\n", sizeof(bs));

  printf("%p\n", &gs);

  printf("%p\n", &bs);





}
