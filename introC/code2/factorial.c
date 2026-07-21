/* calculates first few factorials 
 * will overflow                   
 * wdg 2025                        
 */
#include <stdio.h>

int main (void) {
  
   int max, fact, current;

   printf("Input max: ");
   scanf("%d", &max);

   fact = 1;
   for( current = 1; current<= max; current++ ) {
      fact = fact * current;
      printf("%d! is %d\n", current, fact);
   }

   return 0;
}
