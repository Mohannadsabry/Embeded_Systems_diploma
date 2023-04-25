#include "stdio.h"


void main(){
    char ch;
    printf("enter the char you need to check: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        printf("%c is char",ch);
    }
    else{
        printf("%c is not char",ch);
    }
}
