// This program converts user-supplied number to letter grade
// wdg 2025
#include <stdio.h>

//Main function 
int main(void) {
   float rawGrade;
   char letterGrade;
   printf("Enter grade: ");
   scanf("%f", &rawGrade);
   if( rawGrade<0.0 ) {
      printf("Cannot be negative" );
   }
   else {
      if (rawGrade>=90.0)
         letterGrade = 'A';
      else if (rawGrade>=80.0)
         letterGrade = 'B';
      else if (rawGrade>=70.0)
         letterGrade = 'C';
      else           // rawGrade<70.0
         letterGrade = 'F';
      printf("Value %.2f is worth a %c\n", rawGrade, letterGrade);
   }
   return 0;
}
