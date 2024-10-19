#include <stdio.h>

char *get_initials(const char *full_name, char initials[4])
{
  int j = 0;
  int first_latter = 1;
  for (int i = 0; full_name[i] != '\0' && j < 3; i++) {
    if (first_latter && full_name[i] != ' ') {
      if (full_name[i] >= 'a' && full_name[i] <= 'z') {
        initials[j++] = full_name[i] - 32;
      } else {
        initials[j++] = full_name[i];
      }
      if (j == 1) {
        initials[j++] = '.';
      }
      first_latter = 0;
    }
    if (full_name[i] == ' ') {
      first_latter = 1;
    }
  }
  initials[j] = '\0';
  return initials;
}

int main()
{
  char initials[4];
  printf("%s -> %s\n", "george clooney", get_initials("george clooney", initials));
  printf("%s -> %s\n", "marky mark", get_initials("marky mark", initials));
  printf("%s -> %s\n", "eliza doolittle", get_initials("eliza doolittle", initials));
  printf("%s -> %s\n", "reese witherspoon", get_initials("reese witherspoon", initials));

  return 0;
}