

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int inputNumber() {

	int number;
	printf("Enter integer number: ");
	scanf("%d", &number);

	return number;
}
bool isPrime(int number) {
	if (number < 2) {
		return false;
	}
	else {
		int q = sqrt(number);

		for (int  i = 2; i <= q; i++)
		{
			if (number % i == 0) {
				return false;
			}
		}
	}
	return true;
}
void checkNumber(int num) {

	if (isPrime(num)) {
		printf("\nNumber %d is prime number.", num);
	}
	else {
		printf("\nNumber %d is not prime number.", num);
	}
	
}

int main() {

	int number = inputNumber();
	checkNumber(number);

	return 0;
}