// Program to calculate factorial of a given number

#include <stdio.h>

int factorial(int n) {
	if (n < 0) {
		printf("Not defined for -ve numbers");
		return -1;
	}
	int result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

int main(void) {
	int num = 5;
	printf("Factorial of %d is %d\n", num, factorial(num));
	return 0;
}

