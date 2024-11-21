#include <stdio.h>

int power(int base, int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; i++) {
		result = result * base;
	}
	return result;
}

int main(void) {
	int base = 5;
	int exp = 4;
	printf("%d\n", power(base, exp));
	return 0;
}
