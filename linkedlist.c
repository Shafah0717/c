#include <stdio.h>
#include <stdlib.h>
 typedef struct node{
        int number;
        struct node *next;
    }node;

    

int main(void){
   node *list = NULL;
   for(int i=0;i<3;i++){
    node *n = malloc(sizeof(node));
    if(n == NULL){
        return 1;
    }
    scanf("%i/n", &n->number);
    n->next = list;
    list = n;

   }
   node *ptr = list;
   while(ptr != NULL){
    printf("%i",ptr->number);
    ptr=ptr->next;
   }

}