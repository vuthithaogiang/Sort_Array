

#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define PI 3.14

double getValueSide() {
	double value ;
	printf("Enter value: ");
	scanf("%lf", &value);
	
	return value;
}

bool isTriangle(double a, double b, double c) {
	if (a <= 0 || b <= 0 || c <= 0) {
		return false;
	}
	else if (a + b > c && a + c > b && b + c > a) {
		return true;
	}
	return false;
}

double calculateAreaTriangle(double a, double b, double c) {
	double p = (a + b + c) / 2;

	return sqrt(p * (p - a) * (p - b) * (p - c));
}

double calculateAreaRectangle(double lenght, double width) {
	return lenght * width;
}

int main() {
	int choice = 0;
	do {
		printf("\nCALCULATE AREA.");
		printf("\n===================");
		printf("\n1. Triangle.");
		printf("\n2. Rectangle.");
		printf("\n3. Trapezium.");
		printf("\n4. Circle.");
		printf("\n5. Exit.");
		printf("\n===================");

		printf("\nYour choice? ");

		scanf("%d", &choice);

		switch (choice)

		{

		case 1:
		{
			double side1 = getValueSide();
			double side2 = getValueSide();
			double side3 = getValueSide();

			if (isTriangle(side1, side2, side3)) {
				printf("\nResult area of triangle = %lf", calculateAreaTriangle(side1, side2, side3));
			}
			else {
				printf("\nInvalid value side of triangle.");
			}
			break;
		}
		case 2:
		{
			double length = getValueSide();
			double width = getValueSide();

			if (length > 0 && width > 0) {

				printf("\nResult area of rectangle = %lf", calculateAreaRectangle(length, width));

			}
			else {
				printf("\nInvalid value side of rectangle.");
			}
			break;
		}
		case 3:
		{
			double height = getValueSide();

			double smallBottonSide = getValueSide();

			double bigBottonSide = getValueSide();


			if (height > 0 && smallBottonSide > 0 && bigBottonSide > 0) {

			}
			else {
				printf("\nInvalid value side of trapezium.");
			}
			break;
		}
		case 4:
		{

		}
		case 5:
		{
			printf("\nThanks for using!");
			break;
		}
		default:
			printf("\nInvalid choice. Please try again!");
			break;
		}


	} while (choice != 0);

	return 0;

}