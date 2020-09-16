#include <iostream>
#include <string>
int add(int i, int j) {
	return i + j;
}
std::string add(std::string i, std::string j) {
	return i + std::string("-") + j;
}
int main() {
	int a, b;
	std::string c, d;
	std::cin >> a >> b >> c >> d;
	std::cout << add(a, b) << '\n' << add(c, d) << '\n';
	return 0;
}
