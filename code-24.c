#include<stdio.h>

// function - binary ----> decimal - Lab
long long convert(long long);

int main(){
    long long n;
    printf("enter binary: ");
    scanf("%lld", &n);

    printf("%lld in binary = %lld in decimal \n", n, convert(n));

    return 0;
}
long long convert(long long n){
    long long dec = 0;
    int i, rem;
    while(n != 0){
        rem = n % 10;
        dec += rem << i;
        n /= 10;
        i++;
    }

    return dec;
}