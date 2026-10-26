#include<stdio.h>
int main(){

    // making the following pattern
    /*
        A
        B B
        C C C
        D D D D
    */

    char m, n;
    int x, y, z = 5, p;

    printf("enter a character : ");
    scanf("%c", &m);


    n = ("%d", m);

    for(x = 1; x <= z; x++){
        for(y = 1; y <= x; y++){
            p = n + x - 1;
            printf("%c ", p);
        }
        printf("\n");
    }

    return 0;
}