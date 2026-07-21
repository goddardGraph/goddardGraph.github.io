// prints out first 50 primes using naive inefficient algorithm
// wdg 2025
#include <stdio.h>
#include <stdbool.h>

int main(void) {

  const int MAX=50;
  int prime[MAX], numFound=0, contender, p;
  bool contenderSeemsPrime;

  for( contender=2; numFound<MAX; contender++) {   // note continue condn.

    contenderSeemsPrime = true;
    for( p=0;  p<numFound && contenderSeemsPrime;  p++ ) {
       if( contender % prime[p] == 0 ) 
          contenderSeemsPrime = false;
    }

    if( contenderSeemsPrime ) {
       printf("%d ", contender);
       prime[ numFound ] = contender;
       numFound++;
    }

  } // end for

  printf("\n");
  return 0;
}
