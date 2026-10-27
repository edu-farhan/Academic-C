#include<stdio.h>

// Octal to Binary
void binary_convert(int number){
	
	// oct to dec
	int decimal = 0, i = 0, reminder_dec;
	while(number != 0){
		reminder_dec = number % 10;
		decimal = decimal + (reminder_dec * pow(8,i));
		number = number / 10;
		i++;
	}
	
	// dec to bin
	int binary = 0, base = 1, reminder_bin;
	while(decimal != 0){
		reminder_bin = decimal % 2;
		binary = binary + (reminder_bin * base);
		base = base * 10;
		decimal = decimal / 2;
	}
	printf("binary number : %d", binary);
}
int main(){
	int number;
	printf("enter octal number : ");
	scanf("%d", &number);
	
	binary_convert(number);
	
	return 0;
}