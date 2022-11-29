// Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

void swap(int* a, int* b) {
	int tmp = *a; // lay gia tri tai dia chi con tro a
	               // toan tu phan giai dia chi
	*a = *b;
	*b = tmp;
}

int main()
{
	int a, b;
	printf("Enter a: ");
	scanf("%d", &a);

	printf("Enter b: ");
	scanf("%d", &b);

	int* aPtr ; 

	// gan d/c cua b cho aPtr;

	aPtr = &b;
	
	swap(&a, aPtr);
	

	printf("\na, b after swapped: %d %d ", a, b);

	printf("\nAddress of a: %p", &a);

	printf("\nAddress of b: %p", &b);

	printf("\nValue of aPtr: %p", aPtr);

	


	return 0;
}
