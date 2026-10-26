#include <stdio.h>
int main(){

    // find if the number is even or odd
    int x;
    printf("enter a number : ");
    scanf("%d", &x);

    if(x % 2 == 0){
        printf("%d is even number \n", x);
    }
    else{
        printf("%d is odd number \n", x);
    }


    return 0;
}
