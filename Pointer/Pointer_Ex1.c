
#include<stdio.h>
#define SIZE 5

void getElementArray(int* array, int size) {

	for (int i = 0; i < size; i++)
	{
		printf("array[%d] = ", i);
		scanf("%d", &array[i]);
	}
}

void showElementArray(int* array, const int size) {

	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
}
int main() {
	int numbers[SIZE];
	int size;

	printf("Enter size of array in [1 - 5]: ");
	scanf("%d", &size);
	getElementArray(numbers, size);
	printf("\nElements arraythat you just enter from keyboard: ");

	showElementArray(numbers, size);


	return 0;
}