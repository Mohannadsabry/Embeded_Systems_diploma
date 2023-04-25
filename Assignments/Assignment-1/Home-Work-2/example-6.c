#include "stdio.h"



void main(){
int num;
int sum=0;
printf("enter an integer: ");
fflush(stdin);
fflush(stdout);
scanf("%d",&num);
for(int i=1;i<=num;i++){
    sum+=i;
}
printf("Sum = %d",sum);
}
