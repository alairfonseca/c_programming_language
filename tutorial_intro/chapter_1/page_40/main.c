#include <stdio.h>

#define MAXLINE 1000

int custom_getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
  char current_line[MAXLINE];
  char longest_line[MAXLINE];

  int current_line_length;
  int highest_length = 0;

  while ((current_line_length = custom_getline(current_line, MAXLINE)))
  {
    if (current_line_length > highest_length)
    {
      highest_length = current_line_length;
      copy(longest_line, current_line);
    }
  }

  if (highest_length > 0)
  {
    printf("%s", longest_line);
  }
}

int custom_getline(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
  {
    s[i] = c;
  }

  if (c == '\n')
  {
    s[i] = c;
    i++;
  }

  s[i] = '\0';

  return i;
}

void copy(char to[], char from[])
{
  int i = 0;

  while ((to[i] = from[i]) != '\0')
  {
    i++;
  }
}