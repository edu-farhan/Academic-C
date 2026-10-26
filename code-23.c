#include<stdio.h>

// function - arithmetic operation
void arithmetic(float m, float n){
    char symbol;
    printf("enter an operation - (+) or (-) or (*) or (/): ");
    // put a space before %c to avoid input buffer.
    scanf(" %c", &symbol);

    float result;

    switch(symbol){
        case '+' :
            result = m + n;
            printf("answer: %.2f \n", result);
            break;
        case '-' :
            result = m - n;
            printf("answer: %.2f \n", result);
            break;
        case '*' :
            result = m * n;
            printf("answer: %.2f \n", result);
            break;
        case '/' :
            result = m / n;
            printf("answer: %.2f \n", result);
            break;
        default :
            printf("enter proper number or operation \n");
    }
}
int main(){
    float a, b;
    printf("enter two number: ");
    scanf("%f %f", &a, &b);

    arithmetic(a, b);


    return 0;
}