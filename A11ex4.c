#include <stdio.h>

void por_valor(int x);

void por_referencia(int *x);

int main(void) {
  int y = 3;

  printf("Y antes: %d\n", y);
  por_valor(y);
  printf("Y depois: %d\n\n", y);

  printf("Y antes: %d\n", y);
  por_referencia(&y);
  printf("Y depois: %d\n\n", y);

  return 0;
}

void por_referencia(int *x) {
  printf("X antes: %d\n", *x);
  *x *= 3;
  printf("X depois: %d\n", *x);
}

void por_valor(int x) {
  printf("X antes: %d\n", x);
  x *= 3;
  printf("X depois: %d\n", x);
}