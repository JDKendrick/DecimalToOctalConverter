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

int octalConverter(int* x) {

	char str[100];

	_itoa_s(*x, str, 100, 8);

	*x = atoi(str);

	return *x;
}