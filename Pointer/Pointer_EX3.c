
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define SIZE 80

bool checkStringSymmetric(char str[]) {
	int size = strlen(str);

	 for(int i = 0; i < size ; i ++ )
	{ 
		 if (str[i] != str[size - 1 - i]) {
			 return false;
		 }

	}
	 return true;
}

int main() {

	char str[SIZE];

	printf("Enter string: ");
	scanf("%s", str);

	printf("The string that just enter from key board: \"%s\"\n", str);


	auto isSymmetric = checkStringSymmetric(str);

	if (isSymmetric == true) {
		printf("\nString is symmetric.");
	}
	else {
		printf("\nString is not symmetric.");
	}


	return 0;
}
