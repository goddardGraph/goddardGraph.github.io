//This program averages some user-supplied numbers
#include <stdio.h>

//Main function 
int main(void) {
   int count = 0;
   float value, average;
   float totalSoFar = 0.0;

   printf("Enter first value: (negative to finish) ");
   scanf("%f", &value);
   while( value>=0.0 ) {
      count++;
      totalSoFar += value;
      printf("Enter next value: (negative to finish) ");
      scanf("%f", &value);      
   }

   average = totalSoFar/count;
   printf("Average is %.2f\n", average);

   return 0;
}
