#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define STUDENTNUM 4

struct student {
	int ID;
	int score; 
};

void main(void) {
	struct student s[STUDENTNUM];
	int total_score = 0;
	int max_score = 0;
	int max_ID = 0;
	
	int i;
	for (i=0; i<STUDENTNUM; i++){
		printf("Input the ID: ");
		scanf("%d", &s[i].ID);
		printf("Input the score: ");
		scanf("%d", &s[i].score);
		total_score += s[i].score;
		
		if(s[i].score > max_score){
			max_score = s[i].score;
			max_ID = s[i].ID;
		}
	}
	
	double avg = (double)total_score/STUDENTNUM;
	
	printf("The average of the score: %f\n" ,avg);
	printf("The higheset score - ID: %d, score: %d", max_ID, max_score);
	
}
