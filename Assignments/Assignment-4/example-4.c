#include "stdio.h"
struct SStudent{
    char name[50];
    int roll_no;
    float marks;

};


void main(){
    struct SStudent s[10];
    printf("Enter information of students \n");
    for(int i=0;i<10;i++){
            printf("for roll number %d\n",i+1);
            printf("enter name: ");
            fflush(stdin);
            fflush(stdout);
            gets(s[i].name);
            printf("enter mark: ");
            fflush(stdin);
            fflush(stdout);
            scanf("%f",&s[i].marks);
    }
    printf("Display information \n");
     for(int i=0;i<10;i++){
           printf("Name:%s\n",s[i].name);
           printf("Name:%f\n",s[i].marks);
    }


}
