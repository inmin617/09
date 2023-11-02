#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, average;
	int sum;
	int grade[SIZE];
	printf("input 5 scores: ");
	
	sum=0;
	for(i=0;i<SIZE;i++){
	
		scanf("%d", &grade[i]);
		sum+=grade[i];
	}

	average=sum/SIZE;
	printf("score average: %i\n", average);
	 
	return 0;
}
