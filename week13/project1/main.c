#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int id;
	char name[20];
	float grade;
};

void main(void) {
	
	struct student s1;

	s1.id = 24;
	strcpy(s1.name, "Eunju");
	s1.grade = 4.2 ;
	
	printf("ID: %d\n", s1.id);
	printf("name: %s\n", s1.name);
	printf("grade: %f\n", s1.grade);
	
}
