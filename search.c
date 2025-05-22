#include <stdio.h>
#include <string.h>

int main(void){

    char *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
    char s[100];
    printf("String: ");
    fgets(s,sizeof(s),stdin);
   s[strcspn(s, "\n")] = '\0';
    for(int i=0;i<6;i++){
        if(strcmp(strings[i],s) == 0){
            printf("found\n");
            return 0;
        }
    }
    printf("not found \n");
    return 1;

}