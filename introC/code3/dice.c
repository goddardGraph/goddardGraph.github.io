// dice.c - wdg 2025
// rolls a die 100 times and prints the statistics
#include <stdio.h>
#include <stdlib.h>   // for random number generator
#include <time.h>     // for time function

const int MAX = 100;
const int SIDES = 6;

int main(void) {

  int i,j;
  srand(time(0));     // seed random number generator via internal clock
  int count[SIDES];
  for(i=0; i<SIDES; i++)
    count[i]=0;

  for(j=0; j<MAX; j++) {
    int roll = (rand() % SIDES) + 1;
    printf("%d",roll);
    count[ roll-1 ]++;
  }

  printf("\n");
  for(i=0; i<SIDES; i++)
    printf("%d came up %d times\n", i+1, count[i]);

  return 0;
}
