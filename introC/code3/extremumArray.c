// read array and calculate minimum/maximum
// wdg 2025
#include <stdio.h>
#include <stdbool.h>

const int MAX = 100;

int readArray( float arr[] );
float extremum( float arr[], int count, bool wantMax );

int main( void ) {
  float A[MAX]; 
  int len = readArray(A);
  printf("Minimum is %f\n", extremum(A,len,false) );
  printf("Maximum is %f\n", extremum(A,len,true) );
  return 0;
}

// reads an array of floats and returns the size of the array
int readArray( float arr[] ) {
  int i, length;

  printf("Enter array size ");
  scanf("%d", &length);
  while( length < 0 || length > MAX ) { 
      printf("Size should be in range 1 to %d. Retry: ", MAX);
      scanf("%d", &length);
  }

  printf("Enter values ");     
  for(i=0; i<length; i++) 
     scanf("%f", &arr[i] );

  return length;
}

// calculates minimum or maximum of array arr depending on wantMax
// assumes arr has count>0 elements
float extremum( float arr[], int count, bool wantMax ) {
  float bestSoFar = arr[0];
  int i;
  for(i=1; i<count; i++) {
     if( (wantMax && arr[i]>bestSoFar) ||
          (!wantMax && arr[i]<bestSoFar) )
        bestSoFar = arr[i];
  }
  return bestSoFar;
}



