#include "stdio.h"

/*
#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
#############################

*/

void main(){
    float a,b;
    float temp;
    printf("#########Console-output###\n");
    printf("Enter value of a: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f",&a);
    printf("Enter value of b: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping, value of a = %f\n",a);
    printf("After swapping, value of b = %f\n",b);
    printf("###########################");

}
