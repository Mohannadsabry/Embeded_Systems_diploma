#include "stdio.h"


void main(){
    int num;
    printf("enter an integer number you want to check: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&num);
    if(num%2==0 && num!=0){
        printf("the number is even");
    }
    else if(num%2!=0){
        printf("the number is odd");
    }
    else{
        //like zero
        printf("the number is neither even nor odd");
    }
}
