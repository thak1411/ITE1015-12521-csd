#include "sorted.h"
#include <iostream>
#include <sstream>
#include <string>
void printIVec(std::vector < int > v) {
	for (int i = 0; i < v.size(); ++i) {
		std::cout << v[i] << ' ';
	}
	std::cout << '\n';
}
int main() {
	SortedArray sa;
	std::string s;
	std::stringstream ss;
	for (; ;) {
		std::getline(std::cin, s, '\n');
		if (s == "ascend") printIVec(sa.getSortedAscending());
		else if (s == "descend") printIVec(sa.getSortedDescending());
		else if (s == "max") std::cout << sa.getMax() << '\n';
		else if (s == "min") std::cout << sa.getMin() << '\n';
		else if (s == "quit") break;
		else {
			int x;
			ss.clear();
			ss.str(s);
			for (; ss >> x; ) {
				sa.addNumber(x);
			}
		}
	}
	return 0;
}
