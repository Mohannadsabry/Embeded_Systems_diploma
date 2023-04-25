#include "stdio.h"

/*
Write C Program to Add Two Integers
i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23
###########################


*/

void main(){
    int num_1,num_2;
    printf("#########Console-output###\n");
    printf("Enter two integers: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d %d",&num_1,&num_2);
    printf("sum: %d\n",num_1+num_2);
    printf("###########################");

}
