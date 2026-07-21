/* program for gcd of two numbers using Euclid's algorithm
  based on Kochan - wdg 2025 */
#include <stdio.h>

void calcGCD( int u, int v)  {
  int temp;
  while( v!=0 ) {              // think of v as the smaller
    temp = u % v;
    u = v;
    v = temp;
  }
  printf("Greatest common divisor is %d\n", u);
}

int main(void) {
  calcGCD( 3, 5 ); 
  calcGCD( 22, 44);
  return 0;
}
