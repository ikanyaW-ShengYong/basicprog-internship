#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <numbers>
#pragma warning(disable:4996)

int main() {
	int i;
	for (i = 1; i <= 100; i++) {
		if (i%3 == 0) {
			if (i % 5 == 0) {
				printf("FizzBuzz, ");
			}
			else {
				printf("Fizz, ");
			}
		}
		else if (i % 5 == 0) {
			printf("Buzz, ");
		}
		else {
			printf("%d, ", i);
		}
	}

	return 0;
}