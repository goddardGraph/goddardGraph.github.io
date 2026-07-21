//This program draws a square of stars - wdg 2025
#include <stdio.h>

//Main function 
int main(void) {
   const int SIZE=5;
   const char GLYPH='*';

   int i,j; 
   for(i=0; i<SIZE; i++) {
      for(j=0; j<SIZE; j++) {
         printf("%c", GLYPH);
      }
      printf("\n");
   }

   return 0;
}
