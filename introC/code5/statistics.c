/* statistics.c */
#include <math.h>
#include "statistics.h"

float mean(float data[], int size) {
  double sum=0.0;
  int i;
  for(i=0; i<size; i++)
     sum += data[i];
  return sum / size;
}

float sdev(float data[], int size) {
  double sumDevs=0.0;
  float mu = mean( data, size);
  int i;
  for(i=0; i<size; i++) 
     sumDevs += (data[i] - mu)*(data[i]-mu);
  return sqrt( sumDevs/ (size-1) );
}
