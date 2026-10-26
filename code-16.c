#include<stdio.h>
int main(){

    // fibonacci series
    int limit;
    printf("enter a integer number for maximum outputs (i.e. 10, 15, 21 etc.): ");
    scanf("%d", &limit);

    int initial = 0, base = 1, result;
    printf("%d %d ", initial, base);

    for(int i = 0; i < (limit - 2); i++){
        result = initial + base;
        printf("%d ", result);
        initial = base;
        base = result;
    }
    printf("\n");


    return 0;
}