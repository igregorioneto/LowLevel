#include <stdio.h>

char *makeUpperCase(char *string)
{
  int i = 0;
  while (string[i] != '\0')
  {
    if (string[i] >= 'a' && string[i] <= 'z')
    {
      string[i] = string[i] - 32;
    }
    i++;
  }
  return string;
}

int main()
{
  char str1[] = "abc";
  char str2[] = "ABC";
  char str3[] = "abcABC1234@@@@###";
  char str4[] = "";

  printf("%s\n", makeUpperCase(str1));
  printf("%s\n", makeUpperCase(str2));
  printf("%s\n", makeUpperCase(str2));
  printf("%s\n", makeUpperCase(str4));

  return 0;
}