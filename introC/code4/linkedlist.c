#include <stdlib.h>
#include <stdio.h>

typedef struct nodeType {
  char data[100];
  struct nodeType * next;
} node;

node * head;
node * tail;

void readWords( );
void printWords( );

int main( void ) 
{
   readWords( );
   printWords( );
   return 0;
}

void readWords( )
{   
  printf("How many words?\n" );
  int count;
  scanf("%d", &count);
  for(int n=1; n<=count; n++) {
     node * newNode = (node*) malloc( sizeof(node) );
     newNode -> next = NULL;
     printf("Enter word %d: ", n );
     scanf("%s", newNode->data );
     if( n==1 ) {
        head = tail = newNode;
     }
     else {
        tail->next = newNode;
        tail = tail->next;
     }
  }
}

void printWords ( )
{
   node * curr = head;
   while( curr != NULL ) {
       printf("%s\n", curr -> data );
       curr = curr -> next;
   }
}