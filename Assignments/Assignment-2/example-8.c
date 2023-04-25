#include "stdio.h"


void main(){
    char text[100];
    printf("enter the string: ");
    fflush(stdin);
    fflush(stdout);
    gets(text);
    int start=strlen(text);
    printf("reverse string is:");
    for(int i=start;i>=0;i--){
        printf("%c",text[i]);
    }

}
