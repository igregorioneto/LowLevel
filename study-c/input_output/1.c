// C program to show input and output
#include <stdio.h>

int main()
{
  // Declare the variables
  int num;
  char ch;
  float f;

  // --- Integer ---
  // input the integer
  printf("Enter the integer: ");
  scanf("%d", &num);

  // output the integer
  printf("\nEntered integer is: %d", num);

  // --- Float ---
  // For input clearing buffer
  while((getchar()) != '\n');

  // Input the float
  printf("\n\nEnter the float: ");
  scanf("%f", &f);

  // Output the float
  printf("\nEntered float is: %f", f);

  while((getchar()) != '\n');
  // --- Character ---
  // Input the character
  printf("\n\nEnter the character: ");
  scanf("%c", &ch);
  // Output the character
  printf("\nEntered character is: %c\n", ch);

  return 0;
}