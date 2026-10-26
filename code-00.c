#include <stdio.h>
int main(){

    // basic calculator
    int a = 10, b = 5, c;
    c = a + b;
    printf("result : %d \n", c);


    //floating numbers
    float x, y, z;
    printf("enter values for x, y : ");
    scanf("%f %f", &x, &y);
    z = x / y;
    printf("result : %f \n", z);


    return 0;
}
