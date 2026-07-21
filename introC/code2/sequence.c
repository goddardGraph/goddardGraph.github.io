// reads 10 numbers from user and says whether increasing or decreasing
#include <stdio.h>
#include <stdbool.h>

int main( void ) {
  const int LENGTH = 10;
  bool isIncreasing = true, isDecreasing = true;
  float prev, current;
  int i;

  for(i=0; i<LENGTH; i++) {
    printf("Enter value ");
    scanf("%f", &current);
    if( i>0 && current<=prev)
       isIncreasing = false;
    if( i>0 && current>=prev)
       isDecreasing = false;
    prev = current;
  }

  if( isIncreasing ) 
     printf("Is strictly increasing\n");
  else if( isDecreasing ) 
     printf("Is strictly decreasing\n");
  else
     printf("Not strictly monotonic\n");
  return 0;
}
