/* calculate maximum of user input 
 * Assumes values nonnegative      
 * wdg 2025                        
 */
#include <stdio.h>

int main(void) {

  const int LENGTH = 10;
  printf("Enter %d values\n", LENGTH);
  float maxSoFar = 0.0;

  int i;
  float value;
  for(i=0; i<LENGTH; i++) { 
    printf("Enter value ");
    scanf("%f", &value);
    if( value > maxSoFar ) 
      maxSoFar = value;
  }

  printf( "Max is %4.1f\n", maxSoFar );
  return 0;
}

