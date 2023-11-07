#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <numbers>
#pragma warning(disable:4996)

int main() {
	int number = 0;
	int count = 0;
	int current = 0;
	int past = 0;
	int fib = 0;

	do {
		printf("Enter number of fibbonaci number you want to see: ");
		scanf("%d", &number);
		rewind(stdin);
	} while (number > 44); //more than 44 will overflow

	printf("\n%d, ", current);
	current = 1;
	printf("%d, ", current);
	for (count = 0; count <= number; count++) {
		fib = past + current;
		printf("%d, ", fib);
		past = current;
		current = fib;
	}

	return 0;
}