#include "stdio.h"
#include "string.h"
struct SStudent{
    char name[50];
    float roll_no;
    float mark;

};



void main(){
    struct SStudent s1;
    char name[50];
    float roll,mark;
    printf("Enter information of students:\n");
    printf("enter the name of student ");
    fflush(stdin);
    fflush(stdout);
    gets(name);
    strcpy(s1.name,name);
    printf("enter the roll_no ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f",&roll);
    s1.roll_no=roll;
    printf("enter the mark ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f",&mark);
    //s1.mark=scanf("%f",&mark); hatkhzn fe s1.mark 1 3ashen el function 3amlt save mazbot fa hatrg3 one
    s1.mark=mark;
    printf("Displaying information :\n");
    printf("name:%s\n",s1.name);
    printf("roll:%.1f\n",s1.roll_no);
    printf("mark:%.1f\n",s1.mark);






}
