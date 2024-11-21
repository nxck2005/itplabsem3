// Program to find LCM of two numbers

#include <stdio.h>

// GCD using Euclidean Algorithm
int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main(void) {
	int a, b;
	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);
	int lcmResult = lcm(a, b);
	printf("%d\n", lcmResult);
}

