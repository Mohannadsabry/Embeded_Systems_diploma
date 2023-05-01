#include "stdio.h"

int fact(int x);
void main(){
    int x;
    printf("enter the number ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&x);
    int num=printf("factorial of %d is %d",x,fact(x));

}

int fact(int x){
    if(x==1 || x==0){
        return x;
    }
    return x*fact(x-1);
}
