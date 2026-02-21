#include <stdio.h>
int checkscore(char std[]);
void printScores(char *ans);

int charkeys[10] = {'D','B','D','C','C','D','A','A','A','D'};
int qCorrect[10] = {0,0,0,0,0,0,0,0,0,0};
int main() {
    char ans[8][10] = {
    	{'A','B','A','C','C','D','E','E','A','D'},//	7
		{'D','B','A','B','C','A','E','E','A','D'},//	6
		{'E','D','D','A','C','B','E','E','A','D'},//	5
		{'C','B','A','E','D','C','E','E','A','D'},//	4
		{'A','B','D','C','C','D','E','E','A','D'},//	8
		{'B','B','E','C','C','D','E','E','A','D'},//	7
		{'B','B','A','C','C','D','E','E','A','D'},//	7
		{'E','B','E','C','C','D','E','E','A','D'}};//	7
	printScores(&ans[0][0]);
	printf("the first question was answered correctly %d time", qCorrect[0]);
	(qCorrect[0]!=1)? printf("s"):0;
	printf("\n");
}

int checkscore(char std[]) {
	int score=0;
	for (int i=0;i<10;i=i+1) {
		if (charkeys[i]==std[i]) {
			score+=1;
			qCorrect[i]+=1;
		}
	}
	return score;
}

void printScores(char *ans) {
	for (int i=0;i<8;i=i+1) {
		printf("std %d => %d\n", (i+1), checkscore(ans+i*10) );
	}
}
