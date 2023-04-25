#include "stdio.h"

/*
Write C Program to Print a Integer Entered by a User
i should see the Console as following:
##########Console-output###
Enter a integer: 25
You entered: 25
###########################
*/


void main(){
    int number;
    printf("#########Console-output###\n");
    printf("Enter a integer: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&number);
    printf("you entered: %d\n",number);
    printf("###########################");
}
