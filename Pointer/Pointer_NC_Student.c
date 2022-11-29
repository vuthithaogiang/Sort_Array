
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 100

void getGradeForStudents(int** grades, const int row, const int col) {
	for (int i = 0; i < row; i++) {
		printf("\nEnter grades for student[%d]:\n", i);
		for (int j = 0; j < col; j++) {
			printf("Grade level %d = ", j +1);
			scanf("%d", &grades[i][j]);
		}
	}
}

void showGradesForStudents(const int** grades, const int row, const int col) {

	
	for (int i = 0; i < row; i++)
	{
		

		for (int j = 0; j < col; j++)
		{
			

			printf("%5d", grades[i][j]);
		}

		printf("\n");
	}
}

int main() {
	float** gradeStudents;

	int row = 3; // so hs
	
	int col = 4; // 4 dau diem

	gradeStudents = (int**)malloc(row * sizeof(int*)); // cap phat hang

	for (int i = 0; i < row; i++) {
		gradeStudents[i] = (int*)malloc(col * sizeof(int)); // cap phat cot
	}


	getGradeForStudents(gradeStudents, row, col);

	printf("Transcripts of studnets:\n");

	showGradesForStudents(gradeStudents, row, col);

	// thu hoi bo nho

	for (int i = 0; i < row; i++)
	{
		free(gradeStudents[i]); // giai phong tung hang
	}

	free(gradeStudents);

	return 0;
}