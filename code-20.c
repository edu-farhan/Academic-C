#include<stdio.h>

// function - area of a circle
void circle_area(float r){
    float pi = 3.14;
    float area = pi * r * r;
    printf("area of a circle with radius of %.2f is %.2f \n", r, area);
}
int main(){
    float n;
    printf("enter radius: ");
    scanf("%f", &n);
    
    circle_area(n);


    return 0;
}