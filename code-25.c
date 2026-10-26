#include<stdio.h>
#include<math.h>

// binary ----> decimal
int main(){
    long long int binary, binary_value;
    printf("enter binary: ");
    scanf("%lld", &binary);

    binary_value = binary;

    long long int i = 0, decimal = 0, reminder;

    while(binary != 0){
        reminder = binary % 10;
        // power function : pow(base, exponent)
        decimal += (reminder * pow(2,i));  // decimal = decimal + (reminder * (2 ** i))
        binary /= 10; // binary = binary / 10
        i++;
    }
    printf("%d in binary = %d in decimal \n", binary_value, decimal);


    return 0;
}