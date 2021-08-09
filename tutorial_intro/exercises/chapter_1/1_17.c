/* Exercise 1-17. Write a program to print all input lines that are longer than 80
characters. */

#include <stdio.h>

#define MAXLINE 1000
#define MIN_LENGTH_TO_PRINT 80

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
    if (current_line_length > MIN_LENGTH_TO_PRINT)
    {
      printf("%s", current_line);
    }
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