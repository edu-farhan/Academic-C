#include<stdio.h>

// function - interchanging the values of two variables
void interchange(float a, float b){
    float t = a;
    a = b;
    b = t;

    printf("entered values a = %.2f, b = %.2f & interchanged values a = %.2f, b = %.2f \n", b, a, a, b);
}
int main(){
    float a, b;
    printf("enter two number: ");
    scanf("%f %f", &a, &b);

    interchange(a, b);

    return 0;
}