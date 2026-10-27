#include<stdio.h>

// Decimal to Binary
void binary_convert(int number){
	int binary = 0, base = 1, reminder;

	while(number != 0){
		reminder = number % 2;
		binary = binary + (reminder * base);
		base = base * 10;
		number = number / 2;
	}
	printf("binary number : %d", binary);
}
int main(){
	int number;
	printf("enter decimal number : ");
	scanf("%d", &number);
	
	binary_convert(number);
	
	return 0;
}