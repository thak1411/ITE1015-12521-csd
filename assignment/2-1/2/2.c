#include <stdio.h>
typedef struct {
	int xpos, ypos;
}Point;

Point getScale2xPoint(const Point* p) {
	Point np;
	np.xpos = p->xpos * 2;
	np.ypos = p->ypos * 2;
	return np;
}

void swapPoints(Point* p1, Point* p2) {
	Point k = *p1;
	*p1 = *p2;
	*p2 = k;
}

int main() {
	Point p1, p2;
	scanf("%d%d", &p1.xpos, &p1.ypos);
	printf("Calling getScale2xPoint()\n");
	p2 = getScale2xPoint(&p1);
	printf("P1 : %d %d\nP2 : %d %d\n", p1.xpos, p1.ypos, p2.xpos, p2.ypos);
	printf("Calling swapPoint()\n");
	swapPoints(&p1, &p2);
	printf("P1 : %d %d\nP2 : %d %d\n", p1.xpos, p1.ypos, p2.xpos, p2.ypos);
	return 0;
}
