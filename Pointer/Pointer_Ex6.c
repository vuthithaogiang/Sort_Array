

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

void getElementarray(int* const array, const int n) {
	for (int i = 0; i < n; i++)
	{
		printf("array[%d] = ", i);
		scanf("%d", &array[i]);
	}
}

void showArray(const int* const array, const int n) {
	for (int i = 0; i < n; i++)
	{
		printf("%5d", array[i]);
	}
	printf("\n");
}

bool isPrime(int number) {
	if (number < 2) {
		return false;
	}
	else {
		int q = sqrt(number);

		for (int i = 2; i <= q; i++) {
			if (number % i == 0) {
				return false;
			}
		}
	}
	return true;
}


void findPrimeInArray(int* const numbers, const int n) {
	for (int i = 0; i < n; i++) {
		if (isPrime(numbers[i])) {
			printf("%d ", numbers[i]);
		}
	}
}
int main() {
	int n;
	int* aPtr;

	printf("Enter number of size of array: ");
	scanf("%d", &n);

	aPtr = (int*)malloc(n * sizeof(int));
	getElementarray(aPtr, n);

	printf("\nArray just enter is: ");
	showArray(aPtr, n);

	printf("\nNumbers are prime in array: ");
	findPrimeInArray(aPtr, n);

	free(aPtr);



	return 0;
}