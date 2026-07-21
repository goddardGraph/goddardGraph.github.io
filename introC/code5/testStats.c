/* testStats.c */
#include <stdio.h>
#include "statistics.h"

int main(void) {
   float array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   int arraySize = 10;
   printf("Mean is %.2f\n", mean(array, arraySize));
   printf("Standard deviation is %.2f\n", sdev(array, arraySize));
   return 0;
}

