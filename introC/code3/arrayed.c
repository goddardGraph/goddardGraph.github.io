// read an array of 10 integers and check if all the same 
#include <stdio.h>
#include <stdbool.h>
#define SIZE 10

int main(void) {
  // define and get array
  int A[SIZE];
  printf("Enter %d values\n", SIZE);
  int i;
  for(i=0; i<SIZE; i++) 
    scanf("%d", &A[i]);

  // echo array
  printf("You entered: ");
  for(i=0; i<SIZE; i++) 
    printf("%d ", A[i]);
  printf("\n");

  // check for sameNess
  bool allAreSame=true;  
  for(i=0; i<SIZE-1; i++) {  // note where loop stops
    if( A[i]!=A[i+1] ) {
      allAreSame=false;
      break;      // terminates loop prematurely
    }
  }
  if( allAreSame )
     printf("Same\n");
  else 
     printf( "not-same\n" );

  return 0;
}
