/*  adder.c 
 *  This simple program adds two user-supplied numbers
 *  wdg 2025
 */
#include <stdio.h>

//Main function 
int main(void) {
   int num1, num2, sum;
   printf("Input first number: ");
   scanf("%d", &num1);
   printf("Input second number: ");
   scanf("%d", &num2);
   sum = num1+num2;
   printf("The sum of %d and %d is %d\n", num1, num2, sum);
   return 0;
}
