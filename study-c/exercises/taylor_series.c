#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial(int N) {
  int i, f = 1;
  for (i = 1; i <= N; i++) {
    f *= i;
  }
  return f;
}

float cosseno(float x) {
  int n;
  float c = 0.0;
  for (n = 0; n <= 5; n++) {
    c += pow(-1, n) * pow(x, 2 * n) / fatorial(2 * n);
  }
  return c;
}

int main()
{
  float ang = 45.0;
  ang = 3.141593 * ang/180.0;
  printf("cosseno = %f\n", cosseno(ang));
  printf("cos = %f\n", cos(ang));
  return 0;
}