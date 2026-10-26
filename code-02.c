#include <stdio.h>
int main(){

    // finding the area of a circle
    float pi = 3.14, a, r;
    printf("enter radius : ");
    scanf("%f", &r);
    a = pi * r * r;
    printf("area = %f \n", a);


    return 0;
}
