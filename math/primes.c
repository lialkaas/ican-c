#include <stdbool.h>
#include <stdio.h>

// Discover prime numbers within range

int main(void) {
  unsigned start, stop, n, i;
  bool prime;

  printf("Enter lower and upper limits of range: ");
  scanf("%u %u", &start, &stop);
  printf("Prime numbers:\n");

  // check if start num is even
  if (start % 2 == 0)
  {
    start += 1;
  }
  // increment step 2 to skip even nums
  for (n = start; n < stop; n += 2) {
    prime = true;
    for (i = 3; i * i <= n; i += 2)
    {
      if (n % i == 0) {
        prime = false;
        break;
      }
    }
    if (prime)
      printf("%u\n", n);
  }

  return 0;
}
