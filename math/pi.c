#include <stdio.h>

/*
Approximate pi to a selected precision with the Nilakantha series
*/

int main(void) {
  unsigned n, i;
  long double c = 1.0; // control var
  long double pi = 3.0;

  printf("Enter floating-point precision: ");
  scanf("%u", &n);

  for (i = 2; i <= n * 2; i += 2) {
    pi += c * 4 / (i * (i + 1) * (i + 2));
    c = -c;
    printf("pi = %1.1000Lg\n", pi);
  }

  return 0;
}
