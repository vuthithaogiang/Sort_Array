

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#define SIZE 20

void init(int array[]) {
	
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = 1 + rand() % 6;
	}
}

void showArray(int* array) {
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", array[i]);

		if ((i+1) % 5 == 0) {
			puts("");
		}
	}

}

int getMax(int* array) {
	int max = array[0];
	for (int i = 1; i < SIZE; i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}
	return max;
}

double getAvg(int* array) {
	

	int sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		sum += array[i];
	}

	return (double)sum / SIZE;
}

bool haveValue(int* array, int value) {
	for (int i = 0; i < SIZE; i++) {
		if (array[i] == value) {
			return true;
		}
	}
	return false;
}

void findValue(int* array, int value) {
	if (haveValue(array, value)) {
		
		for ( int i = 0; i < SIZE; i++)
		{
			if (array[i] == value) {
				printf("array[%d] = %d\n", i, value);
			}
		}
	}
	else {
		printf("\nDon't hane number %d in array.", value);
	}

}

int main() {

	int array[SIZE];
	init(array);
	printf("Elements of array:\n");
	showArray(array);
	printf("\nMax in array = %d", getMax(array));
	printf("\nAvg = %f", getAvg(array));

	int value;
	printf("\nEnter value number that need to find in array: ");
	scanf("%d", &value);

	findValue(array, value);

	return 0;

}