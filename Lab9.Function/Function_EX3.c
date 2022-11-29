
#include<stdio.h>

int inputNumber() {
	int number;
	printf("Enter value of number: ");
	scanf("%d", &number);
	return number;
}

int sum(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}
int multi(int a, int b) {
	return a * b;
}

double div(int a, int b) {
	
		return (double)a / b;
	
}

int main() {
	int choice = 0;
	int number1, number2;
	
	

	do {
		printf("\nCALCULATE");
		printf("\n===================================");
		printf("\n1. Enter value of numbers.");
		printf("\n2. Calculate sum two numbers.");
		printf("\n3. Calculate sub two numbers.");
		printf("\n4. Calculate multi two numbers.");
		printf("\n5. Calculate div two numbers.");
		printf("\n===================================");
		printf("\nYour choice? ");

		scanf("%d", &choice);

		switch (choice) {
		case 1:
		{
		
			number1 = inputNumber();
			number2 = inputNumber();
			break;
		}
		case 2:
		{
			printf("Sum = %d.", sum(number1, number2));
			break;
		}
		case 3:
		{
			printf("Sub = %d.", sub(number1, number2));
			break;
		}
		case 4:
		{
			printf("Multi = %d.", multi(number1, number2));
		}
		case 5:
		{
			if (number2 == 0) {
				printf("Please numnber number 2 != 0.");
			}
			else {
				printf("Div = %f", div(number1, number2));
			}
			break;
		}
		default:
			printf("\nThanks for using!");
			break;
		}


	} while (choice != 0);

	return 0;
}