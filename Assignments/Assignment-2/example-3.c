#include "stdio.h"
/*
find trasnpose of matrix
*/
void main(){
const int x;
const int y;
printf("enter the number of rows ");
fflush(stdin);
fflush(stdout);
scanf("%d",&x);
printf("enter the number of columns ");
fflush(stdin);
fflush(stdout);
scanf("%d",&y);
printf("\nenter the elements of matrix\n");
float arr[x][y];
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        printf("enter arr%d%d ",i+1,j+1);
        fflush(stdin);
        fflush(stdout);
        scanf("%f",&arr[i][j]);
    }
}
printf("\n enterd matrix\n");
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        printf("%f ",arr[i][j]);
    }
    printf("\n");

}
printf("\n transpose matrix\n");
for(int i=0;i<y;i++){
    for(int j=0;j<x;j++){
        printf("%f ",arr[j][i]);
    }
    printf("\n");

}

}
