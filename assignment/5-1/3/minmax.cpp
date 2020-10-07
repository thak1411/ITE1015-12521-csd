#include "minmax.h"
int rnMin(int i, int j) { return i < j ? i : j; }
int rnMax(int i, int j) { return i > j ? i : j; }
void getMinMax(int* arr, int len, int& min, int& max) {
	if (len < 1) return;
	min = max = arr[0];
	for (int i = 1; i < len; ++i) {
		min = rnMin(min, arr[i]);
		max = rnMax(max, arr[i]);
	}
}

