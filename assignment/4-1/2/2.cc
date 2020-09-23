#include <iostream>
int min(int i, int j) {
	return i < j ? i : j;
}
int max(int i, int j) {
	return i > j ? i : j;
}
int main() {
	int n, mi, ma;
	int* p;
	std::cin >> n;
	p = new int[n];

	for (int i = 0; i < n; ++i) std::cin >> p[i];
	mi = ma = p[0];
	for (int i = 1; i < n; ++i) {
		mi = min(mi, p[i]);
		ma = max(ma, p[i]);
	}
	std::cout << "min: " << mi << '\n';
	std::cout << "max: " << ma << '\n';
	delete[] p;
	return 0;
}
