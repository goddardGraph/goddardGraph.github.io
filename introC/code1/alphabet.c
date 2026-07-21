// alphabet - wdg 2025
#include <stdio.h>

int main( void ) {

  int pos;
  printf("Enter position in alphabet: ");
  scanf("%d", &pos);

  char upper = 'A' +(pos-1);
  char lower = 'a' +(pos-1);
  printf("Position %d is %c in upper and %c in lower\n", pos, upper, lower );

  upper++;
  lower++;
  printf("Next comes %c in upper and %c in lower\n", upper, lower );

  return 0;
}
