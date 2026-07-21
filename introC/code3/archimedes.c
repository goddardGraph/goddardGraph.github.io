// program to replicate Archimedes' calculation of pi
// also shows numerical problems - wdg 2025
#include <stdio.h>
#include <math.h>

float estimate(int divisions) {
     int i;
     float sum =0.0, width = 1.0/divisions;
     for( i=0; i<divisions; i++ ) {
        sum += width * sqrt( 1.0 - (i*width)*(i*width) );
     }
     return 4*sum;
}

int main(void) {

  int divs;
  for(divs=1; divs<2000000; divs*=2) {
     float pi = estimate(divs);
     printf("For division=%d Pi is approximately %.5f\n", divs, pi );
  }
  return 0;
}

