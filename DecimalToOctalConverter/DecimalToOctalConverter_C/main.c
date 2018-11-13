/*
 Created by: Jacob (Jake) Kendrick
*/

#include <stdio.h>
#include <stdlib.h>

int octalConverter(int* x);

int main (){

	int* number = malloc(sizeof(int));


	printf("Please type in a Decimal number: ");
	scanf_s("%d", number);
	printf("Your number in Decimal is: %d\n", *number);

	octalConverter(number);

	printf("Your number in Octal is: %d\n", *number);

	free(number);

	return 0;
}

//Converts a int to its octal representation.
int octalConverter(int* x) {

	char str[100];

	_itoa_s(*x, str, 100, 8); //Converts an int to base 8 then to a string (the final argument in the function is the base converter)

	*x = atoi(str);//Converts the string back to an int (now in base 8)

	return *x;
}