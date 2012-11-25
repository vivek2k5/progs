#include <stdio.h>

int main () {
  char c;
  short int si;
  int i;
  long int li;
  long l;
  long long ll;
  float f;
  double d;
  long double ld;
  //double double dd;
  void *vp;

  printf (" size of        char    : %d\n", sizeof(c));
  printf (" size of short  int     : %d\n", sizeof(si));
  printf (" size of        int     : %d\n", sizeof(i));
  printf (" size of long   int     : %d\n", sizeof(li));
  printf (" size of        long    : %d\n", sizeof(l));
  printf (" size of long   long    : %d\n", sizeof(ll));
  printf (" size of        float   : %d\n", sizeof(f));
  printf (" size of        double  : %d\n", sizeof(d));
  printf (" size of long   double  : %d\n", sizeof(ld));
  //printf (" size of double double  : %d\n", sizeof(dd));
  printf (" size of        pointer : %d\n", sizeof(vp));

  return 0;
}
