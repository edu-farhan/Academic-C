#include<stdio.h>
int main(){
    
    // sum of any continuous 10 numbers
    int i;
    printf("enter a number : ");
    scanf("%d", &i);

    

    // solution - 01 : from i and the next 10 numbers (example : i = 27 to 37, total 11 numbers)
    int count, num = i + 10, sum = 0;
    for (count = i; count <= num; count++){
        sum += count;
    }
    printf("first result : %d \n", sum);



    // solution - 02 : from i to the next 10 numbers (example : i = 27 to 36)
    int counting, number = i + 9, total = 0;
    for (counting = i; counting <= number; counting++)
    {
        total += counting;
    }
    printf("second result = %d \n", total);



    // solution - 03 : next 10 numbers after i (example : if i = 27 then 28 to 37)
    int initial, range = i + 10, outcome = 0;
    for(initial = i + 1; initial <= range; initial++){
        outcome += initial;
    }
    printf("third result = %d \n", outcome);


    return 0;
}