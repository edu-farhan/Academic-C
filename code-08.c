#include<stdio.h>
int main(){

    // check whether a number is greater/less than or equal to another number
    float a, b;
    printf("enter two number a, b : ");
    scanf("%f %f", &a, &b);

    if(a > b){
        printf("a = %f is greater than b = %f \n", a, b);
    }
    else if(a < b){
        printf("a = %f is less than b = %f \n", a, b);
    }
    else{
        printf("a = %f is equals to b = %f \n", a, b);
    }

    return 0;
}
