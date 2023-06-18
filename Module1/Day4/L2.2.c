//2. convert binary to decimal

#include <stdio.h>
#include <math.h>

int convert(long long);

int main() {
  long long n;
  printf("Enter a binary number: ");
  scanf("%lld", &n);
  printf("The Decimal of binary '%lld' is %d ", n, convert(n));
  return 0;
}

int convert(long long n) {
  int decimal = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    decimal += rem * pow(2, i);
    ++i;
  }

  return decimal;
}