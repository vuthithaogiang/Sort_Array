

#include<stdio.h>
#define SIZE 20

void getElementArray(int* array, int size) {
	for (int i = 0; i < size; i++) {
		printf("array[%d] = ", i);
		scanf("%d", &array[i]);
	}
}

void showElementArray(int* array, int size) {
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

int isNumberInArray(int* array, int size, int number) {
	for (int i = 0; i < size; i++) {
		if (array[i] == number) {
			return 1;
			continue;
		}
	}
	return -1;
}


int findNumberSame(int* array1, int* array2, int size1, int size2, int* result) {
	int sizeOfResult = 0;
	for (int i = 0; i < size1; i++)
	{

		if (isNumberInArray(array2, size2, array1[i]) == 1) {
			result[sizeOfResult++] = array1[i];
		}
	}
	return sizeOfResult;
}

int main() {

	int array[SIZE];
	int arrayOther[SIZE];

	int sizeOfArray1;
	int sizeOfArray2;
	printf("Enter size of array 1: ");
	scanf("%d", &sizeOfArray1);
	getElementArray(array, sizeOfArray1);
	printf("\nElement array 1: ");
	showElementArray(array, sizeOfArray1);

	printf("Enter size of array 2: ");
	scanf("%d", &sizeOfArray2);
	getElementArray(arrayOther, sizeOfArray2);

	printf("\nElement array 2: ");
	showElementArray(arrayOther, sizeOfArray2);

	int result[SIZE];
	int size;

	size = findNumberSame(array, arrayOther, sizeOfArray1, sizeOfArray2, result);

	if (size == 0) {
		printf("\nDon't have emelement is the same in array 1 and array2.");
	}
	else {
		printf("\nElements that same in array 1 and array 2: ");
		showElementArray(result, size);

	}



	return 0;
}