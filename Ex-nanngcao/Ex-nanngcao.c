// Ex-nanngcao.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#define SIZE 20

void getElementArray(int* numbers, int size) {

	for (int i = 0; i < size; i++)
	{
		printf("array[%d] = ", i);
		scanf("%d", &numbers[i]);
	}
}


void showElementArray(int numbers[], int size) {
	for (int i = 0; i < size; i++)
	{

		printf("%d ", numbers[i]);
	}
	printf("\n");
}

void sortArrayByASC(int* numbers, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = size - 1; j >= i; j--) {
			if (numbers[j - 1] > numbers[j]) {
				int tmp = numbers[j - 1];
				numbers[j - 1] = numbers[j];
				numbers[j] = tmp;
			}
		}
	}
}

int main()
{
	int arrayNumbers[SIZE];
	int size;

	printf("Enter size of array numbers: ");
	scanf("%d", &size);

	getElementArray(arrayNumbers, size);

	printf("\nElements of array: ");
	showElementArray(arrayNumbers, size);


	sortArrayByASC(arrayNumbers, size);

	printf("Array numbers after sorted by asceding: \n");
	showElementArray(arrayNumbers, size);
    return 0;
}

  