// filer.c copies from one file to another
// not robust
#include <stdio.h>

int main(void) {
  FILE *in, *out;
  in = fopen("from.txt", "r");
  out = fopen("to.txt", "w");
  if( !in || !out ) {
     printf("Error in opening files\n");
     return 1;
  }
  char s[100];
  while( fgets(s, 100, in)!=NULL ) 
     fprintf(out,s);
  fclose( in );
  fclose( out );
  return 0;
}
  
