#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <numbers>
#pragma warning(disable:4996)

int main() {
	int list1[6] = { 4,5,2,3,1,6 };
	int list2[6] = { 8,7,6,9,4,5 };
	int list3[12];
	int i = 0;
	int j = 0;
	int count = 0;

	for (i = 0; i < 6; i++) {
		list3[i] = list1[i];
		list3[i + 6] = list2[i];
	}

	for (i = 0; i < 12; i++) {
		count = 0;
		for (j = 0; j < 12; j++) {
			if (i != j) {
				if (list3[i] == list3[j]) {
					list3[j] = 0;
					count++;
				}
			}
		}
		if (count != 0) {
			list3[i] = 0;
		}
	}

	for (i = 0; i < 12; i++) {
		if (list3[i] != 0) {
			printf("%d, ", list3[i]);
		}
	}

	return 0;
}