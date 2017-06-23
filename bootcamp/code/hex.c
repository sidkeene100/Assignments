#include <stdio.h>

int main() {
  int x = 53191; /* 0000 1100 1111 1100 0111 */
  short sx = (short) x;
  int y = sx;

  printf("x = %x, sx = %hx, y = %x\n", x, sx, y);
  printf("x = %d, sx = %hi, y = %d\n", x, sx, y);
  return 0;
}
