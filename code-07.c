#include<stdio.h>
int main(){

    // find the greatest of three numbers (use 1 solution at a time)
    int a, b, c;
    printf("enter a, b, c : ");
    scanf("%d %d %d", &a, &b, &c);

    // solution - 01
    if(a > b && a > c){
        printf("a = %d is greatest \n", a);
    }
    else if(b > a && b > c){
        printf("b = %d is greatest \n", b);
    }
    else{
        printf("c = %d is greatest \n", c);
    }

    

    //solution - 02
    if(a > b){
        if(a > c){
            printf("a = %d is greatest \n", a);
        }
        else{
            printf("c = %d is greatest \n", c);
        }
    }
    else{
        if(b > c){
            printf("b = %d is greatest \n", b);
        }
        else{
            printf("c = %d is greatest \n", c);
        }
    }


    return 0;
}
