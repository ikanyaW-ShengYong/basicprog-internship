#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <numbers>
#pragma warning(disable:4996)

int main() {
	int list1[6] = { 4,5,2,3,1,6 };
	int list2[6] = { 8,7,6,9,4,5 };
	int i = 0;
	int j = 0;

	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (list1[i] == list2[j]) {
				printf("%d, ", list1[i]);
			}
		}
	}

	return 0;
}