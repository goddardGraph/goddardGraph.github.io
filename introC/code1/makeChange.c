/* making change with coins
 * wdg 2025 
 */
#include <stdio.h>

const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;

int main( void ) {
  int amount, quarters, dimes, nickels, pennies;

  printf("Enter amount of change: ");
  scanf("%d", &amount);

  quarters = amount / QUARTER;
  amount = amount % QUARTER;
  dimes = amount / DIME;
  amount = amount % DIME;
  nickels = amount / NICKEL;
  pennies = amount % NICKEL;

  printf("%d quarters, %d dimes, %d nickels, %d pennies\n", 
       quarters, dimes, nickels, pennies);

  return 0;

}
