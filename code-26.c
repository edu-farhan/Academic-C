#include<stdio.h>
int main(){

    // break & continue statement
    int i;
    for(i = 0; i < 6; i++){
        if( i == 2){
            continue;
        }
        if(i == 4){
            break;
        }
        printf("%d \n", i);
    }


    return 0;
}
