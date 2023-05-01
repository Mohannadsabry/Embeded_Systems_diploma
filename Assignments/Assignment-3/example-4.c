#include "stdio.h"
char reverse_string(char str[],int index,int n);
void main(){
char text[100];
printf("enter the string ");
gets(text);
reverse(text,0,strlen(text));
}

void reverse(char str[], int index, int n)
{
    if(index == n)
    {
        return;
    }
    reverse(str, index+1, n);
    printf("%c", str[index]);

}
