#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <numbers>
#pragma warning(disable:4996)

int main() {
	int number = 0;
	int root = 0;
	int found = 0;

	printf("Please enter a perfect number(Non-perfect number does not work): ");
	scanf("%d", &number);

	for (root = 1; root < 10000; root++) {
		if (number / root == root) {
			printf("\nThe perfect number for %d is %d.\n", number, root);
			found++;
		}
	}
	if (found == 0) {
		printf("\nYou entered a number that is not perfect number. \n");
	}

	return 0;
}