#include <stdio.h>

void sort(int thing[][2]) {
	for (int i=0; i<4; i=i+1) {
		for (int j=0; j<3-i; j=j+1) {
			if ( thing[j][0] < thing[j+1][0] ) {
				int temp0=thing[j][0];
				int temp1=thing[j][1];
				thing[j][0]=thing[j+1][0];
				thing[j][1]=thing[j+1][1];
				thing[j+1][0]=temp0;
				thing[j+1][1]=temp1;
			}
		}
	}
}

int main() {
	int history[4][2];
	for (int i=0; i<4; i=i+1) {
		printf("input your score from attempt #%d:\t",i+1);
		scanf("%d", &history[i][0]);
		history[i][1]=i+1;
	}
	
	sort(history);
	printf("\nyour best attempts were (in order):\t");
	for (int i=0;i<3;i=i+1) {
		printf("%d", history[i][1]);
		(i==2)? printf("\n"):printf(",");
	}
}
