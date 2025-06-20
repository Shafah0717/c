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
    n->next = NULL;
    if(list==NULL){
    list=n;
   }
   else if(n->number < list->number){
    n->next = list;
    list = n;
   }
   else{
    for(node *ptr=list;ptr != NULL;ptr=ptr->next){
        if(ptr->next == NULL){
            ptr->next = n;
            break;
        }
        if(n->number < ptr->next->number){
            n->next = ptr->next;
            ptr->next = n;
            break;
        }
    }
   }


   }
   
   node *ptr = list;
   while(ptr != NULL){
    printf("%i",ptr->number);
    ptr=ptr->next;
   }
   ptr = list;
   while(ptr!=NULL){
    node *next = ptr->next;
    free(ptr);
    ptr = next;
   }

}