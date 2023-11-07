#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <numbers>
#pragma warning(disable:4996)

int main() {
	int round = 0;
	int i = 0;
	int intermidate = 0;
	int num[11] = {21, 400, 8, -3, 77, 99, -16, 55, 111, -36, 28};

	for (round = 0; round <= 10; round++) {
		for (i = 0; i < 10; i++) {
			if (num[i] > num[i + 1]) {
				intermidate = num[i];
				num[i] = num[i + 1];
				num[i + 1] = intermidate;
			}
		}
	}

	for (i = 0; i < 9; i++) {
		printf("%d, ", num[i]);
	}
	printf("%d", num[10]);

	return 0;
}
