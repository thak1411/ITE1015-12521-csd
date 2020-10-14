#include "intset.h"
#include <iostream>
#include <string>
int printIVec(std::vector < int > v) {
	for (int i = 0; i < v.size(); ++i) {
		std::cout << v[i] << ' ';
	}
	std::cout << '\n';
	return 0;
}
int main() {
	std::string s;
	IntegerSet is;
	for (; ;) {
		int x;
		std::cin >> s;
		if (s == "quit") break;
		std::cin >> x;
		if (s == "add") is.addNumber(x), printIVec(is.getAll());
		else if (s == "del") is.deleteNumber(x), printIVec(is.getAll());
		else if (s == "get") std::cout << is.getItem(x) << '\n';
	}
	return 0;
}
