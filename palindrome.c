#include <stdio.h>

int isPalindrome(int num) {
	if (num < 0) {
		return 0;
	}

	int original = num, reversed = 0;
	while (num > 0) {
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}
	return original == reversed;
}

int main(void) {
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	if (isPalindrome(num)) {
		printf("Is a palindrome\n");
	} else {
		printf("Not a palindrome\n");
	}
	return 0;
}
