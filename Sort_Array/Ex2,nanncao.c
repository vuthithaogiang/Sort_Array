

#include<stdio.h>
#define SIZE 30

void getElementArray(int* array, int size) {
	for (int i = 0; i < size; i++)
	{
		printf("array[%d] = ", i);
		scanf("%d", &array[i]);

	}
}

void showElementArray(int* array, const int size) {

	for (int i  = 0; i < size; i ++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

void sortArrayByASC(int* array, int leftIndex, int rightIndex) {

	if (leftIndex < rightIndex) {

		int p = partition(array, leftIndex, rightIndex);

		sortArrayByASC(array, leftIndex, p -  1);
		sortArrayByASC(array, p + 1, rightIndex);
	}

}

int partition(int* array, int left, int right) {

	int pivot = array[right];

	int i = left;

	for (int j = left; j < right; j++) {

		if (array[j] > pivot) {
			int tmp = array[j];
			array[j] = array[i];
			array[i] = tmp;

			i++;
		}
	}

	//swap array[i], array[right]
	int value = array[i];
	array[i] = array[right];
	array[right] = value;

	return i;
}
int main() {

	int array[SIZE];
	int size;


	printf("Enter size of elements array: ");
	scanf("%d", &size);

	if (size > 0) {

		getElementArray(array, size);

		printf("\nAll of elements that just enter from keyboard: ");

		showElementArray(array, size);

		int j, k;

		printf("\nEnter value j (0 <= j <= sizeArray): ");
		scanf("%d", &j);

		printf("\nEnter value k ( j < k < sizeArray): ");
		scanf("%d", &k);

		sortArrayByASC(array, j, k - 1);

		printf("\nElements array after sorted by ascending from position j - k: ");

		showElementArray(array, size);

	}
	else {
		printf("\nInvalid size nof array.");
	}



	return 0;
}