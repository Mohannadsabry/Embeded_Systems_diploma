#include "stdio.h"



void main(){
    char ch;
    printf("Enter the char you need to check that is vowel or consonant: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c",&ch);
    if(ch=='a' || ch=='i' || ch=='o' || ch=='e' || ch=='u' || ch=='A' || ch=='I' || ch=='O' || ch=='E' || ch=='U' ){
        printf("%c is vowel",ch);
    }
    else{
        printf("%c is consonant",ch);
    }

}
