#include <stdio.h>
#include <string.h>

int main(void) {

  char alpha[] = "alpha";
  char beta[] = "beta";
  char final[100];

  strcpy(final, alpha);
  if( strcmp(final,alpha)==0 ) // true
    printf("%s and %s are the same\n", final, alpha );

  strcat(final,beta);  // final is now "alphabeta"
  if( strcmp(final,alpha)>0 ) // true
    printf("%s comes after %s\n", final, alpha );

  return 0;
}
