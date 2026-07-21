// converter.c - wdg 2025 
#include <stdio.h>

int main(void) {

  // declarations
  float dollars, rands, exchangeRate;

  // input
  printf("Enter dollar amount ");
  scanf("%f", &dollars);
  printf("Enter rands per dollar ");
  scanf("%f", &exchangeRate);

  // processing
  rands = dollars * exchangeRate;

  //output
  printf("%.2f dollars is %.2f rands\n", dollars, rands);

  return 0;

}
