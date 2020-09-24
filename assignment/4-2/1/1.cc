#include <iostream>
#include <string>
struct Person {
	std::string name;
	int age;
};
int main() {
	Person* pa;
	int n;
	std::cin >> n;
	if (n <= 0) return 0;
	pa = new Person[n];
	for (int i = 0; i < n; ++i) {
		std::cin >> pa[i].name >> pa[i].age;
	}
	for (int i = 0; i < n; ++i) {
		std::cout << "Name:" << pa[i].name << ", Age:" << pa[i].age << '\n';
	}
	delete[] pa;
	return 0;
}
