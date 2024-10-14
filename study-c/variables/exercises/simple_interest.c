// C program to calculate simple interest using functions
#include <stdio.h>

float smpInt(float p, float r, float t) {
 return (p * r * t) / 100;
}

int main() {
  // input values
  float P = 10000, R = 12, T = 1, SI;

  SI = smpInt(P, R, T);

  // Display the result
  printf("Simple Interest: %.2f\n", SI);

  return 0;
}