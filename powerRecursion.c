#include <stdio.h>

int power(int base, int exponent) {
	if (exponent == 0) {
		return 1;
	} else {
		return base * power(base, exponent - 1);
	}
}

int main(void) {
	int base, exponent;
	printf("base: ");
	scanf("%d", &base);
	printf("exponent: ");
	scanf("%d", &exponent);
	int result = power(base, exponent);
	printf("Result: %d\n", result);
}
