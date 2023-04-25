#include "stdio.h"



void main(){
char ch;
float result,x,y;
printf("enter two numbers: ");
fflush(stdin);
fflush(stdout);
scanf("%f %f",&x,&y);
printf("choose the operand (+,-,*,/): ");
fflush(stdin);
fflush(stdout);
scanf("%c",&ch);

switch(ch){
case '+':printf("%f+%f=%f",x,y,x+y);
break;
case '-':printf("%f-%f=%f",x,y,x-y);
break;
case '*':printf("%f*%f=%f",x,y,x*y);
break;
case '/':printf("%f/%f=%f",x,y,x/y);
break;
default:printf("operand not correct");
}

}
