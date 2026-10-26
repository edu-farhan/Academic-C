#include<stdio.h>
int main(){

    //making the following pattern
    /*
        *
        * *
        * * *
        * * * *
    */

    int rows;
    printf("enter rows : ");
    scanf("%d", &rows);

    int i, j;
    for(i = 1; i <= rows; i++){
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}