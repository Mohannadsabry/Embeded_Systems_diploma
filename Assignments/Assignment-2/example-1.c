#include "stdio.h"
/*
find sum of two 2*2 matrices.
*/

void main(){
    float a[2][2];
    float b[2][2];
    float result[2][2];
    printf("Enter the elements of first matrix\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("\nenter a%d%d ",i+1,j+1);
            fflush(stdin);
            fflush(stdout);
            scanf("%f",&a[i][j]);
        }
    }
    printf("Enter the elements of second matrix\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("\nenter b%d%d ",i+1,j+1);
            fflush(stdin);
            fflush(stdout);
            scanf("%f",&b[i][j]);
        }
    }
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            result[i][j]=a[i][j]+b[i][j];

        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%f ",result[i][j]);
        }
        printf("\n");
    }

}
