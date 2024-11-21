#include <stdio.h>

int sumEven(int n) {
	int sum = 0;
	if (n == 0) {
		return sum;
	}
	if (n % 2 != 0) {
		return sumEven(n - 1);
	} else {
		return (n + sumEven(n - 1));
	}
}


int sumOdd(int n) {
	int sum = 0;
	if (n == 0) {
		return sum;
	}
	if (n % 2 == 0) {
		return sumOdd(n - 1);
	} else {
		return (n + sumOdd(n - 1));
	}
}


int main(void) {
	int final = 15;
	int finalResultEven = sumEven(final);
	int finalResultOdd = sumOdd(final);
	printf("Even sum: %d, Odd sum: %d\n",
		finalResultEven, finalResultOdd);
}
