#include "setfunc.h"
#include <iostream>
#include <string>

int getOperator(const std::string& s) {
	for (int i = s.find('}') + 1; s[i]; ++i) {
		if (s[i] != ' ') {
			if (s[i] == '*') return 1;
			else if (s[i] == '+') return 2;
			else if (s[i] == '-') return 3;
			else return -1;
		}
	}
	return -1;
}

int main() {
	std::string str;
	for (; ;) {
		int op = -1;
		std::getline(std::cin, str, '\n');
		if (str == "0") break;
		op = getOperator(str);
		if (op == -1) break;
		auto st1 = parseSet(str.substr(0, str.find('}')));
		auto st2 = parseSet(str.substr(str.rfind('{')));
		std::set < int > st;
		if (op == 1) {
			st = getIntersection(st1, st2);
		} else if (op == 2) {
			st = getUnion(st1, st2);
		} else {
			st = getDifference(st1, st2);
		}
		printSet(st);
	}
	return 0;
}
