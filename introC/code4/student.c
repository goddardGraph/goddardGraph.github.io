#include<stdio.h>
#include<stdlib.h>

#define MAX_STUD 20
#define MAX_LEN 20

typedef struct 
{
   char firstName[MAX_LEN];
   char lastName[MAX_LEN];
   float grade;
} Student;

typedef struct
{
   int numStuds;
   Student stud[MAX_STUD];
   float average;
} Class;

void readClass(Class*);
void writeClass(Class*);

int main() {
   Class *r;
   r = (Class *)malloc(sizeof(Class));
   readClass(r);
   writeClass(r);
   return 0;
}

void readClass(Class *C) {
   scanf("%d",&C->numStuds);
   int s;
   float total=0.0;
   for(s=0; s<C->numStuds; s++) {
      scanf("%s%s%f", &C->stud[s].firstName, &C->stud[s].lastName,
                                                 &C->stud[s].grade);
      total += C->stud[s].grade;
   }  
   C->average = total/C->numStuds;
}

void writeClass(Class *C) {
   int s;
   for(s=0; s<C->numStuds; s++) {
      printf("%s %s got %.2f\n", C->stud[s].firstName, C->stud[s].lastName,
                                                       C->stud[s].grade);
   }
   printf("Class average is %.2f\n",C->average);
}
