#include<stdio.h>
#include<math.h>

// Binary to Decimal
void decimal_convert(int binary){
	int decimal = 0, i = 0, reminder;
	
	while(binary != 0){
		reminder = binary % 10;
		decimal = decimal + (reminder * pow(2,i));
		binary = binary / 10;
		i++;
	}
	printf("decimal number : %d \n", decimal);
}
int main(){
	int binary;
	printf("enter binary number: ");
	scanf("%d", &binary);
	
	decimal_convert(binary);
	
	return 0;
}