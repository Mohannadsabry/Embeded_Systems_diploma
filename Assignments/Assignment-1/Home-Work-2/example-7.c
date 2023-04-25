#include "stdio.h"


void main(){
    int fact_num,fact=1;
    printf("Enter an integer: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&fact_num);
    if(fact_num<0){
        printf("Error!!! Factorial of negative doesn't exist");
    }
    else{
        for(int i=1;i<=fact_num;i++){
            fact*=i;
        }
    }
    printf("the factorial of %d is %d",fact_num,fact);
}
