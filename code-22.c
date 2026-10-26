#include<stdio.h>

// function - addition of two numbers
void addition(float x, float y){
    float sum = x + y;
    printf("addition of %.2f & %.2f is %.2f \n", x, y, sum);
}
int main(){
    float a, b;
    printf("enter two number: ");
    scanf("%f %f", &a, &b);

    addition(a, b);


    return 0;
}
