#include <stdio.h>

#define IN 1
#define OUT 0

// 1.5 Character Input and Output
// 1.5.2 Character Counting

int main(int argc, char *argv[])
{
  int c, state;
  state = IN;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\t')
      state = OUT;
    else if (state == OUT)
    {
      state = IN;
      putchar('\n');
      putchar(c);
    }
    else
    {
      putchar(c);
    }
  }
}