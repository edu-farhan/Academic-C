#include <stdio.h>
int main(){

    // simple interest
    float r, i, p, t;
    printf("enter extra-paid(i), principal(p), time(t) : ");
    scanf("%f %f %f", &i, &p, &t);
    r = i / (p * t);
    printf("rate of interest : %f \n", r);


    return 0;
}
