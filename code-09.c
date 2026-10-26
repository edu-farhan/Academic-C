#include<stdio.h>
int main(){

    // calibrate the sum from 1 to any given number
    int num, count, sum = 0;
    printf("enter a number : ");
    scanf("%d", &num);

    for (count  = 1; count <= num; count++)
    {
        sum += count;
    }
    printf("result = %d \n", sum);


    return 0;
}