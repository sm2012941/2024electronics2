#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct point{
	int x;
	int y;
};

/*

int getArea(struct point p1, struct point p2){
	return abs(p2.x-p1.x) * abs(p2.y-p1.y);
};

int main(int argc, char *argv[]) {
	struct point p1, p2;
	printf("Input the coordinate p1 (x y): ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("Input the coordinate p2 (x y): ");
	scanf("%d %d", &p2.x, &p2.y);
	int area;
	area = getArea(p1, p2);
	printf("Area: %d", area);
}

*/

int getArea(struct point *pPtr1, struct point *pPtr2){
	return abs(pPtr2->x - pPtr1->x) * abs(pPtr2->y - pPtr1->y);
}

int main(int argc, char *argv[]) {
	struct point p1, p2;
	struct point *pPtr1, *pPtr2;
	printf("Input the coordinate p1 (x y): ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("Input the coordinate p2 (x y): ");
	scanf("%d %d", &p2.x, &p2.y);
	int area;
	area = getArea(&p1, &p2);
	printf("Area: %d", area);
}
