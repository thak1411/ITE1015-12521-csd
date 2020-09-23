#include <iostream>
int main() {
	int n;
	int* p;
	scanf("%d", &n);
	p = new int[n];
	for (int i = 0; i < n; ++i) p[i] = i;
	for (int i = 0; i < n; ++i) std::cout << p[i] << ' ';
	std::cout << '\n';
	delete[] p;
	return 0;
}
