#include "stdio.h"
struct SDistance{
    int feet;
    float inch;

};

struct SDistance Add(struct SDistance d1, struct SDistance d2);
void main(){
    struct SDistance d1,d2,r;
    printf("enter information for 1st distance:\n");
    printf("enter feet: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&d1.feet);
    printf("enter inch: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f",&d1.inch);
    printf("enter information for 2nd distance:\n");
    printf("enter feet: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&d2.feet);
    printf("enter inch: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f",&d2.inch);
    r=Add(d1,d2);
    printf("%d'-",r.feet);
    printf("%.2f\"",r.inch);
}
struct SDistance Add(struct SDistance d1, struct SDistance d2){
    struct SDistance r;
    r.inch=d1.inch+d2.inch;
    r.feet=d1.feet+d2.feet;
    return r;
};
