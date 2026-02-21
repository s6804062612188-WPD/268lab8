#include <stdio.h>
int checkscore(char std[]);
void printScores(char *ans);

int charkeys[10]={'D','B','D','C','C','D','A','E','A','D'};
int main() {
    char ans[8][10]={
    	{'A','B','A','C','C','D','E','E','A','D'},//	7
		{'D','B','A','B','C','A','E','E','A','D'},//	6
		{'E','D','D','A','C','B','E','E','A','D'},//	5
		{'C','B','A','E','D','C','E','E','A','D'},//	4
		{'A','B','D','C','C','D','E','E','A','D'},//	8
		{'B','B','E','C','C','D','E','E','A','D'},//	7
		{'B','B','A','C','C','D','E','E','A','D'},//	7
		{'E','B','E','C','C','D','E','E','A','D'}};//	7
			
   	printScores(&ans[0][0]);
}

int checkscore(char std[]) {
	int score=0;
	for (int i=0;i<10;i=i+1) {
		if (charkeys[i]==std[i]) {
			score+=1;
		}
	}
	return score;
}

void printScores(char *ans) {
	for (int i=0;i<8;i=i+1) {
		printf("std %d => %d\n", (i+1), checkscore(ans+i*10) );
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
