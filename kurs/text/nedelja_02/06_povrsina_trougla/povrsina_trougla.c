#include <stdio.h>

int main(){
    double a1,b1,a2,b2;
    double p1,p2;

    scanf("%lf%lf%lf%lf", &a1, &b1, &a2, &b2);
    p1 = a1*b1/2;
    p2 = a2*b2/2;

    if(p1 > p2) printf("1");
    else if(p1 < p2) printf("2");
    else printf("0");
    
    return 0;
}
