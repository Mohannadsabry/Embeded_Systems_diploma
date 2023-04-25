#include "stdio.h"

void main(){
    char text[100];
    int counter=0;
    printf("enter the string: ");
    fflush(stdin);
    fflush(stdout);
    gets(text);
    int i=0;
    //0 which is the end of any string by default
    while(text[i]!=0){
        counter++;
        i++;
    }
    printf("the length of string is %d",counter);
}
