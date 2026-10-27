#include<stdio.h>
#include<math.h>

// Binary to Octal
void octal_convert(int binary){
	
	// bin to dec
	int decimal = 0, i = 0, reminder_dec;
	while(binary != 0){
		reminder_dec = binary % 10;
		decimal = decimal + (reminder_dec * pow(2,i));
		binary = binary / 10;
		i++;
	}
	
	// dec to oct
	int octal = 0, base = 1, reminder_oct;
	while(decimal != 0){
		reminder_oct = decimal % 8;
		octal = octal + (reminder_oct * base);
		base = base * 10;
		decimal = decimal / 8;
	}
	printf("Octal number : %d \n", octal);
}
int main(){
	int binary;
	printf("enter binary number: ");
	scanf("%d", &binary);
	
	octal_convert(binary);
	
	return 0;
}