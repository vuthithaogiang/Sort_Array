// Lab9.Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int power(int a, int n) {
	int result = 1;
	if (n > 0) {
		for (int i = 1; i <= n; i++)
		{
			result *= a;
		}
	}
	else {
		n = -n;
		for (int i = 1; i <= n; i++)
		{
			result *= a;
		}

		result = 1.0 / result;

	}
	return result;
}

int main()
{
	int a, n;

	printf("Enter number a: ");
	scanf("%d", &a);

	printf("Enter number n: ");
	scanf("%d", &n);

	auto result = power(a, n);
	printf("\n%d ^ %d = %d", a, n, result);

	return 0;
}

