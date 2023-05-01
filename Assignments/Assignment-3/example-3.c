#include "stdio.h"

int pow(int b,int n);

void main(){
    int base;
    int p_num;
    printf("enter base and power number ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d %d",&base,&p_num);
    int result=pow(base,p_num);
    printf("the result is %d",result);
}

int pow(int b,int n){
    if(n==0){
        return 1;
    }
    return b*pow(b,n-1);
}
