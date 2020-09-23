#include <iostream>
void getSumDiff(int a, int b, int& sum, int& diff) {
	sum = a + b;
	diff = a - b;
}
int main() {
	int a, b, sum, diff;
	std::cin >> a >> b;
	getSumDiff(a, b, sum, diff);
	std::cout << "sum:" << sum << '\n';
	std::cout << "diff:" << diff << '\n';
	return 0;
}
