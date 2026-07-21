// strstr.c - adapted from nkraft
// Find first occurrence of substring needle in string haystack.
#include <stdio.h>

// The function returns pointer to beginning of substring, 
// or NULL if substring is not found.
char *strstr ( char *haystack, char *needle ) {
   char *start; 
   for(start = haystack; *start != '\0'; start++ ) {
      char *p = needle;
      char *q = start;
      while ( *p != '\0' && *q != '\0' && *p == *q ) { 
         p++;
         q++;
      }
      if( *p == '\0' ) 
         return start;   // reached end of needle without mismatch
   }  
   return NULL;
}

int main ( void ) {
   char *one = "concatenate";
   char *two = "cat";

   char *ans = strstr( one, two );
   if ( ans == NULL )
      printf( "needle not found\n");
   else
      printf( "needle starts in position %d of haystack\n", ans-one );
   
   return 0;
}
