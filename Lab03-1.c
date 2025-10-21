#include <stdio.h>

int main() {
  int i = -214783648;
  printf("%d\n", -214783648 < 214783647);
  printf("%d\n", i < 2144783647);
  printf("%d\n", -214783647 - 1 < 214783647);
  return 0;
}
