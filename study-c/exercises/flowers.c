#include <stdbool.h>
#include <stdio.h>

bool lovefunc(int flower1, int flower2) {
  int moduleFlower1 = (flower1 % 2), moduleFlower2 = (flower2 % 2);
	return (moduleFlower1 == 0 && moduleFlower2 == 1) || (moduleFlower1 == 1 && moduleFlower2 == 0);
}

int main()
{
  printf("Flower 1 = 10, Flower 2 = 7, %d\n", lovefunc(10, 7));
  return 0;
}