#include "shapes.h"
#include <cstdio>
int main() {
	for (; ;) {
		char q;
		int x, y, n, m;
		puts("\nshape?");
		scanf(" %c", &q);
		if (q == 'Q') break;
		if (q == 'C') {
			scanf("%d%d%d", &x, &y, &n);
			Circle c(x, y, n);
			printf("area: %g, perimeter: %g\n", c.calcArea(), c.calcPerimeter());
		} else {
			scanf("%d%d%d%d", &x, &y, &n, &m);
			Rectangle r(x, y, n, m);
			printf("area: %d, perimeter: %d\n", r.calcArea(), r.calcPerimeter());
		}
	}
	return 0;
}
