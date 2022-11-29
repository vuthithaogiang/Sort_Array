

#include<stdio.h>
#include<string.h>
#define SIZE 30

int findCharacterInString(char str[], int leftIndex, int rightIndex, char c) {

	while (leftIndex <= rightIndex) {

		auto mid = leftIndex + (rightIndex - leftIndex) / 2;

		if (str[mid] == c) {
			return mid;

		}
		if (str[mid] < c) {
			leftIndex = mid + 1;
		}
		if (str[mid] > c) {
			rightIndex = mid - 1;
		}
	}

	return -1;
}


int main() {

	char str[SIZE];

	char c;

	printf("enter string: ");
	scanf("%[^\n]", str);

	char tmp;
	scanf("%c", &tmp);

	printf("Enter character that need to find in string: ");
	scanf("%c", &c);

	int indexOfCharacterInStrind = findCharacterInString(str, 0, strlen(str) - 2, c);

	printf("%d", indexOfCharacterInStrind);




	return 0;
}