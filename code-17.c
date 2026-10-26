#include<stdio.h>
int main(){
    
    // LCM & GCD : LCM = Least Common Multiple - ল. সা. গু. (গুণিতক) & GCD = Greatest Common Divisor - গ. সা. গু. (গুণনীয়ক)
    int a, b, x, y, gcd, lcm;

    printf("enter two positive integer: ");
    scanf("%d %d", &x, &y);

    a = x, b = y;

    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm = ( x * y) / gcd;

    printf("for %d & %d - GCD : %d, LCM : %d \n", x, y, gcd, lcm);


    return 0;
}