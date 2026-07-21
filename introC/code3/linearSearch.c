/* linear search in an array */
#include <stdio.h>

int indexOf(int A[], int size, int val);

int main(void) 
{
  int test[] = {1,3,5,7,2,4,6};
  int testVal, position;
  int arraySize = sizeof(test)/sizeof(int);
  testVal=3;
  position = indexOf(test, arraySize, testVal) ;
  printf("%d is at %d\n", testVal, position );
  testVal=33;
  position = indexOf(test, arraySize, testVal) ;
  printf("%d is at %d\n", testVal, position );
  return 0;
}

// returns index of first occurrence of val in array A (-1 if failure)
int indexOf(int A[], int size, int val) {
  int i;
  for(i=0; i<size; i++) {
    if( val == A[i] ) 
      return i;
  }
  // failing which
  return -1;
}
