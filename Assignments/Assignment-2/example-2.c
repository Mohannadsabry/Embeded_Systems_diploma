#include "stdio.h"
/*
get average of elements in an array
*/

void main(){
float arr[20];
int n;
float sum=0;
printf("enter the number of elements ");
fflush(stdin);
fflush(stdout);
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("enter the number ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f",&arr[i]);
    sum=sum+arr[i];
}
printf("the avg of the elements %.2f",sum/n);

}
