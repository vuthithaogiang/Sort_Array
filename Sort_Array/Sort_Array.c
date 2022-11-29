// Sort_Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//  sort by  insertion: sap xep chen
#include <stdio.h>
#define SIZE 15

void getElementArray(int numbers[], int* size) {
	printf("Enter value size of array numbers: ");
	scanf("%d", size);

	for (int i = 0; i < *size; i++)
	{
		printf("array[%d] = ", i);
		scanf("%d", &numbers[i]);
	}

}

void showElementArray(int numbers[],  int size) {

	for  (int i = 0; i <size; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
}

void insertionSort(int numbers[], const int size) {
	for (int  i = 0; i < size; i++)
	{
		int key = numbers[i];
		int j = i - 1;

		while (j >= 0 && numbers[j] > key) {

			int tmp = numbers[j + 1];
			numbers[j + 1] = numbers[j];
			numbers[j] = tmp;

			j = j - 1;
		}

		numbers[j + 1] = key;
	}
}
 
int main()
{

	int numbers[SIZE];
	int sizeOfArray ;
	puts("Get array elements: ");

	getElementArray(numbers, &sizeOfArray);

	puts("\nAll of elements in arrya number: ");
	showElementArray(numbers, sizeOfArray);


	printf("\nElements pf array after sorted by ascending: ");
	insertionSort(numbers, sizeOfArray);

	showElementArray(numbers, sizeOfArray);


	return 0;
}
