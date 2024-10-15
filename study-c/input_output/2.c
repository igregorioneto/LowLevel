// C program to show input and output
#include <stdio.h>

int main()
{
  // Declare string variable
  // as character array
  char str[50];

  // --- String ---
  // To read a word
  // Input the word
  printf("Enter the word: ");
  scanf("%s", str);

  // Output the word
  printf("\nEntered word is: %s", str);

  // --- String ---
  // to read a Sentence
  // Input the Sentence
  while((getchar()) != '\n');

  printf("\n\nEnter the Sentence: ");
  scanf("%[^\n]s", str);
  // Output the String
  printf("\nEntered sentence is: %s\n", str);

  return 0;
}