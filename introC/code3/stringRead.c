// stringRead.c
// adapted from Jamsa
// read a string from user and echo it
#include <stdio.h>
const char EOL = '\n';
const int SIZE = 100;

int main(void) {
  char stringA[SIZE], stringB[SIZE];
  int index;
  char letter;

  // read a string using getchar
  printf("Enter string A: ");
  index = 0;
  letter = getchar();
  while( letter!= EOL ) {
    stringA[index] = letter;
    index++;
    letter = getchar();
  }
  stringA[index] = '\0'; 

  // read a string using scanf
  printf("Enter string B: ");
  scanf("%s", stringB);

  printf("The first string was: %s\n", stringA);
  printf("The second string was: %s\n", stringB);
  return 0;
}
