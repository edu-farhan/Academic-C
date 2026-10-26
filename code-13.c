#include<stdio.h>
int main(){

    // factorial of number
    int i, j, x = 1;
    printf("enter a number : ");
    scanf("%d", &j);

    for(i = j; i >= 1; i--){
        x = x * i;
    }
    printf("%d", x);


    return 0;
}