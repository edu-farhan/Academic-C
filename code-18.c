#include<stdio.h>
int main(){

    // leap year
    int year,result;
    printf("enter a year: ");
    scanf("%d", &year);

    result = year % 4;

    if(result == 0){
        printf("%d is a leap year \n", year);
    }
    else{
        printf("%d is not a leap year \n", year);
    }


    return 0;
}