#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* Modify the temperature conversion program to print the table in
reverse order, that is, from 300 degrees to 0 */

int main()
{
  int fahr;

  for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
  {
    if (fahr == UPPER)
    {
      printf("[ %1s %5s ]\n", "F", "C");
    }

    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
  }
}
