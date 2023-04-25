#include "stdio.h"



void main(){
    const int x;
    int el,loc;
    printf("enter no of elements ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        arr[i]=i+1;
    }
    for(int i=0;i<x;i++){
        printf("%d ",arr[i]);
    }

    printf("\nenter the element to be inserted ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&el);
    printf("enter the location ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&loc);
    const int y=x+1;
    int arr2[y];
    int k=0;
    for(int i=0;i<y;i++){
        if(i+1==loc){
            arr2[i]=el;

        }
        else{
            arr2[i]=arr[k];
            k++;
        }
    }
    for(int i=0;i<y;i++){
        printf("%d ",arr2[i]);
    }

}
