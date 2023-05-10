#include "stdio.h"
struct SValues{
    float real;
    float img;

};

struct SValues Add_complex(struct SValues s1,struct SValues s2);
void main(){
    struct SValues x,y,z;
    printf("for 1st complex\n");
    printf("enter real and imaginary respectively: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f",&x.real,&x.img);
    printf("for 2nd complex\n");
    printf("enter real and imaginary respectively: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f",&y.real,&y.img);
    z=Add_complex(x,y);
    printf("sum=%.2f+%.2fi",z.real,z.img);

}


struct SValues Add_complex(struct SValues s1,struct SValues s2){
    struct SValues r;
    r.real=s1.real+s2.real;
    r.img=s1.img+s2.img;
    return r;
}
