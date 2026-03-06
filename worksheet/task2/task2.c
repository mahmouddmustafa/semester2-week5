/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Mahmoud Mustafa	
 * ID: 201868040
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	int n;
	
	printf("Enter a hexadecimal:");

	// if input contains invalid hex digit

	// Input string is read, to prevent overflow 8 characters is the limit
	if(scanf("%8s", hex) != 1) {
		return 1;
	}
	for(n = 0; hex[n] != '\0'; ++n) {
		int i;
		char a = hex[n];

		//0-15 Integer Value Conversion
		if (a >= '0' && a <= '9') {
			i = a - '0';
		} else if (a >= 'A' && a <= 'F') {
			i = a - 'A' + 10;
		} else if (a >= 'a' && a <= 'f') {
			i = a - 'a' + 10;
		} else {
			//If it is not between 0-9 or A-F it is an invalid character and cannot be a hexadecimal
			printf("Error: Invalid Hexadecimal\n");
			return 0;
		}
		//Multiply by base 16 to shift existing decimal value and adds new value
		decimal = (decimal * 16) + i;
	}

	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}