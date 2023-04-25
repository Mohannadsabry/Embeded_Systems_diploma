#include "stdio.h"


void main(){
float num;
printf("enter the number: ");
fflush(stdin);
fflush(stdout);
scanf("%f",&num);
if(num==0){
    printf("you entered zero");
}
else if(num>0){
    printf("you entered positive number");
}
else if (num<0){
    printf("you entered negative number");
}
}
