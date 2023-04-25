#include "stdio.h"
void main(){
    const int x;
    printf("enter the number of elements ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&x);
    int arr[x];
    int el;
    for(int i=0;i<x;i++){
        printf("enter element %d ",i+1);
        fflush(stdin);
        fflush(stdout);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x;i++){
        printf("%d ",arr[i]);
    }
    printf("\nenter the element to be searched: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&el);
    for(int i=0;i<x;i++){
        if(el==arr[i]){
             printf("the element in location %d",i+1);
             break;
        }
    }
}
