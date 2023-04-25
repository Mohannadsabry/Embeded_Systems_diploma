#include "stdio.h"


void main(){
char text[50];
char ch;
int counter=0;
printf("enter the string: ");
fflush(stdin);
fflush(stdout);
gets(text);
printf("enter the charachter to find frequency: ");
fflush(stdin);
fflush(stdout);
scanf("%c",&ch);
for(int i=0;i<strlen(text);i++){
    if(text[i]==ch){
        counter++;
    }
}
printf("the frequency of %c is %d",ch,counter);
}
