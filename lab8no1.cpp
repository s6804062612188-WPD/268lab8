#include <stdio.h>

int findMax(int num[], int sizeNum);
void printAr(int myAr[], int sizeNum);
void addone(int number[], int add[], int sizeNum);
int addtwo(int number[], int pos[], int x, int sizeNum, int sizePos);
int addthree(int number[], int *pos, int sizeNum, int sizePos); 

int main() {
	int number[5] = {20,50,100,99,9};
	int size=sizeof(number)/sizeof(number[0]);
	int max;

	max = findMax(number, size);
	printAr(number, size);
	printf("Maximum of these number is %d\n", max);
}

void printAr(int myAr[], int sizeNum) {
	for (int i=0; i < sizeNum; i=i+1) {
		printf("number[%d] : %d\n",i,myAr[i]);
	}
}

int findMax(int num[], int sizeNum) {
	int maximum;
	maximum = num[0];
	for (int i=1; i < sizeNum; i=i+1) {
		if (num[i] > maximum) maximum = num[i];
	}
	return maximum;
}

void addone(int number[], int add[], int sizeNum) {
	for (int i=0; i < sizeNum; i=i+1) {
		number[i] += add[i];
	}
}

int addtwo(int number[], int pos[], int x, int sizeNum, int sizePos) {
	for (int i=0; i < sizePos; i=i+1) {
		if (pos[i] < sizeNum) {
			number[pos[i]] += x;
		} else {
			printf("error : index out of bounds\n");
		}
	}
}

int addthree(int number[], int *pos, int sizeNum, int sizePos) {
	for (int i=0; i<sizePos; i=i+1) {
		if ( *(pos+2*i+0) < sizeNum) {
			number[*(pos+2*i+0)] += *(pos+2*i+1);
		} else {
			printf("error : index out of bounds\n");
		}
	}
}

/* result
number[1] : 20
number[2] : 50
number[3] : 100
number[4] : 99
number[5] : 9
Maximum of these number is 100
*/
