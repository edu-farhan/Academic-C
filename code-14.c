#include<stdio.h>
int main(){

    // solution - 01 : checking for palindrome number
    int a, b,c = 0, d;
    printf("enter value : ");
    scanf("%d", &a);
    d = a;
    while(a > 0){
        b = a % 10;
        c = c * 10 + b;
        a /= 10;
    }
    if(c == d){
        printf("%d is palindrome \n", d);
    }
    else{
        printf("%d is not palindrome \n", d);
    }


    
    // solution - 02 : making a palindrome number : 234432 or 1221 or 4567887654 (DO NOT USE THIS)
    int start, mid, out, i = 0;
    printf("enter starting and highest number : ");
    scanf("%d %d", &start, &mid);

    // issue : if characters are there instead of numbers, it goes to a infinite loop

    if(start < mid){
        // increasing
        while(i <= (mid - start)){
            out = start + i;
            printf("%d ", out);
            i++;
        }
        //decreasing
        for(out = mid; out >= start; out--){
            printf("%d ", out);
        }
    }
    else if(start > mid){
        //decreasing
        for(out = start; out >= mid; out--){
            printf("%d ", out);
        }
        // increasing
        while(i <= (start - mid)){
            out = mid + i;
            printf("%d ", out);
            i++;
        }
    }
    else{
        printf("starting number and middle number can't be same.");
    }


    return 0;
}