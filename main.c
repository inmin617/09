#include <stdio.h>
#define ROWS 3
#define COLS 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void addMatrix(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS])
{
	int i, j;
	
    for (i=0; i<ROWS; i++)
	{
        for (j=0; j<COLS; j++) 
		{
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void printMatrix(int C[ROWS][COLS])
{
	int i, j;
	 for (i=0; i<ROWS; i++) {
        for (j=0; j<COLS; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n"); // 한 행렬이 출력되면 개행 문자를 출력하여 다음 줄로 넘어갑니다.
    }
}

int main(void)
{
	int A[ROWS][COLS]= { // 더하기 대상 행렬 
		{2, 3, 0},
		{8, 9, 1},
		{7, 0, 5}};
		
	int B[ROWS][COLS]={ // 더하기 대상 행렬 
		{1, 0, 0},
		{0, 1, 0},
		{0, 0, 1}};
	
	int C[ROWS][COLS]; // 덧셈 결과 행렬 

	
	addMatrix(A, B, C);
	printMatrix(C) ;
	
	return 0;
}
