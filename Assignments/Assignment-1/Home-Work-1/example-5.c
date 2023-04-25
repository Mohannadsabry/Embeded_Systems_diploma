#include "stdio.h"

/*
EX5:
Write C Program to Find ASCII Value of a Character
#########Console_output######
Enter a character: G
ASCII value of G = 71
#############################
*/

void main(){
    char ch;
    printf("#########Console-output###\n");
    printf("Enter a Character: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c",&ch);
    printf("ASCII value of %c = %d\n",ch,ch);
    printf("###########################");

}
