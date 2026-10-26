#include<stdio.h>
int main(){

    // reverse of a number
    int num, rev_num = 0, remider;

    printf("enter a two or more digit number : ");
    scanf("%d", &num);

    while(num != 0){
        remider = num % 10;
        rev_num = rev_num * 10 + remider;
        num /= 10;
    }
    printf("result = %d", rev_num);


    return 0;
}