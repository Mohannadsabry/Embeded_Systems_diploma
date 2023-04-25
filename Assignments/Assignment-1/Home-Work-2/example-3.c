#include "stdio.h"

void main(){
float num_1,num_2,num_3;
printf("enter the three numbers here: ");
fflush(stdin);
fflush(stdout);
scanf("%f %f %f",&num_1,&num_2,&num_3);
if(num_1>num_2){
    if(num_1>num_3){
        printf("%f is the greater",num_1);
    }
    else{
        printf("%f is the greater",num_3);
    }
}
else if(num_2>num_1){
     if(num_2>num_3){
        printf("%f is the greater",num_2);
    }
    else{
        printf("%f is the greater",num_3);
    }
}
}
