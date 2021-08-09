#include <stdio.h>

// 1.7 Functions
// 1.8 Arguments—Call by Value

int power(int base, int exponent)
{
  int result = 1;

  for (int i = 1; i <= exponent; i++)
  {
    result = result * base;
  }

  return result;
}

int main()
{
  for (int i = 0; i <= 10; i++)
  {
    printf("%d %d\n", i, power(2, i));
  }

  return 0;
}