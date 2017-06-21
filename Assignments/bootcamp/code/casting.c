#include <stdio.h>

int sum_elements(int a[], unsigned length) {
  int i;
  int result = 0;

  for (i = 0; i < length; i++) {
    result += a[i];
  }
  return result;
}
void remdiv(long x, long y, long *qp, long *rp) {
  long q = x/y;
  long r = x%y;
  *qp = q;
  *rp = r;
}

long scale(long x, long y, long z) {
  long t = x + (4 * y) + (12 * z);
  return t;
}

void g5() {
  printf(">5\n");
  return;
}

void ng5() {
  printf("<=5\n");
  return;
}

void test(long x) {
  if (x > 5) {
    g5();
  } else {
    ng5();
  }
}
int main() {
  // int arr[] = {1,2,3,4,5};
  // int arr2[] = {};
  // int sum1,sum2;
  long x, y, q, r;

  x = 10;
  test(x);
  // sum1 = sum_elements(arr, 5);
  // sum2 = sum_elements(arr2,0);
  //
  // printf("Sums: %d, %d\n", sum1, sum2);
  //

  q =3;
  x = 5;
  y = 2;
  r = scale(x, y, q);
  printf ("Result = %ld\n", r);
  remdiv(x, y, &q, &r);
  printf ("%ld/%ld = %li with rem: %li\n", x, y, q, r);

  return 0;
}
