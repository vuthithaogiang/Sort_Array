
#include<stdio.h>
#include<string.h>

int main() {
	char str[80];

	printf("Enter string: ");
	scanf("%79[^\n]", str);

	printf("\nThe string that just enter from key board: \"%s\"", str);

	printf("\nLength of string %d character\n", strlen(str));

	return 0;
}