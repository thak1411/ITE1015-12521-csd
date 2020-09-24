#include <iostream>
void rnSwap(int* i, int* j) {
	int k = *i;
	*i = *j;
	*j = k;
}
void rnSort(int* be, int* en) {
	for (int* i = en; i-- != be; ) {
		for (int* j = be; j != i; ++j) {
			if (*j > *(j + 1)) rnSwap(j, j + 1);
		}
	}
}
int main() {
	int* p;
	int n;
	std::cin >> n;
	p = new int[n];
	for (int i = 0; i < n; ++i) {
		std::cin >> p[i];
	}
	rnSort(p, p + n);
	for (int i = 0; i < n; ++i) {
		std::cout << p[i] << ' ';
	}
	std::cout << '\n';
	delete[] p;
	return 0;
}
