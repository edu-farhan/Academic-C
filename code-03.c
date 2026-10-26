#include <stdio.h>
int main(){

    // interchanging the values of two variables
    int a, b, temp;
    printf("enter the variables a, b : ");
    scanf("%d %d", &a, &b);

    printf("enter values a = %d, b = %d \n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("interchanged values a = %d, b = %d \n", a, b);



    return 0;
}
