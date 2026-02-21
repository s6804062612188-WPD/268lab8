#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 100

//week 7
int random1toN(int);

//week 8 (this week)
void printAr(int numAr[], int numArSize, int cLimit);
int checkNum(int numAr[], int numArSize, int target);
int searchNum(int numAr[], int numArSize, int target);

int main() {
	srand(time(NULL));
	int list[size];
	for (int i=0; i<size; i=i+1) {
		int rn;
		do {
			rn = random1toN(size);
		} while(!checkNum(list, i, rn));
		list[i] = rn;
	}
	printAr(list, size, 20);
}

int random1toN(int N) {
	return 1+rand()%(N);
}

void printAr(int numAr[], int numArSize, int cLimit) {
	for (int i=0; i<numArSize; i=i+1) {
		printf("%3d", numAr[i]);
		((i+1)%cLimit==0 && i!=0)? printf("\n"):printf(" ");
	}
	printf("\n");
}

int checkNum(int numAr[], int numArSize, int target) {
	int unique=1;
	if ( searchNum(numAr, numArSize, target) ) unique=0;
	return unique;
}

int searchNum(int numAr[], int numArSize, int target) {
	for (int i=0; i<numArSize; i=i+1) {
		if (target == numAr[i]) {
			return 1;
		}
	}	
	return 0;
}
