#include "stdio.h"

/*
EX4:

Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###

###########################
Enter two numbers: 2.4
1.1
Product: 2.640000
########################################################################

*/


void main(){
    float num_1,num_2;
    printf("#########Console-output###\n");
    printf("###########################\n");
    printf("Enter two numbers: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f",&num_1,&num_2);
    printf("product: %f\n",num_1*num_2);
    printf("########################################################################");

}
