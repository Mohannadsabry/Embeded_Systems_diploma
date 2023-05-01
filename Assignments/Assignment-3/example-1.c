#include "stdio.h"

int prime(int num1,int num2);

void main(){
    prime(10,30);
}

int prime(int num1,int num2){
    int arr[num2-num1];
    int k=0;
    int is_prime;
    for(int i=num1;i<=num2;i++){
            is_prime=1;
        for(int j=2;j<=num1;j++){
            if(i%j==0 && i!=j){
                 is_prime=0;
                 break;
            }
        }
        if(is_prime==1){
            arr[k]=i;
            k++;
        }
    }
    for(int i=0;i<k;i++){
        printf("%d ",arr[i]);
    }

}
