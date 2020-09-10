#include <stdio.h>
void rotateLeft(int* pa, int* pb, int* pc) {
	int d = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = d;
}
void rotateRight(int* pa, int* pb, int* pc) {
	int d = *pc;
	*pc = *pb;
	*pb = *pa;
	*pa = d;
}
int main() {
	int a = 10, b = 20, c = 30;
	printf("%d:%d:%d\n", a, b, c);
	for (; ;) {
		char q;
		scanf(" %c", &q);
		if (q == '1') {
			rotateLeft(&a, &b, &c);
		} else if (q == '2') {
			rotateRight(&a, &b, &c);
		} else break;
		printf("%d:%d:%d\n", a, b, c);
	}
	return 0;
}
