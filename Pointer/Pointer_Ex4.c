
#include<stdio.h>
#include<string.h>
#define SIZE 5

void getElementArray(int* numbers) {
	int size = SIZE;
	for (int i = 0; i < size; i++)
	{
		printf("array[%d] = ", i);
		scanf("%d", &numbers[i]);
	}
}

void showElementArray(int* numbers) {
	int size = SIZE;

	for (int i = 0; i < size; i++)
	{
		printf("%d  ", numbers[i]);
	}
	printf("\n");
}

void sumElementArray(int* numbersA, int* numbersB, int* result) {
	int size = SIZE;
	for (int i = 0; i < size; i++)
	{
		result[i] = numbersA[i] + numbersB[i];
	}

	
}

int main() {
	int arrayNumbersA[SIZE];

	int arrayNumbersB[SIZE];

	

	printf("Get elements for array A: \n");
	getElementArray(arrayNumbersA);

	printf("Getelements for array numbers B: \n");
	getElementArray(arrayNumbersB);

	printf("\nAll of elements in array A: ");
	showElementArray(arrayNumbersA);

	printf("\nAll of elements in array B: ");
	showElementArray(arrayNumbersB);

	int sumOfArray[SIZE];

	sumElementArray(arrayNumbersA, arrayNumbersB, sumOfArray);

	printf("Sum of elements array A and array B are: \n");

	showElementArray(sumOfArray);


	return 0;
}