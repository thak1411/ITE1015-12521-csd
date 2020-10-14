#include "intset.h"

IntegerSet::IntegerSet() {}
IntegerSet::~IntegerSet() {}
void IntegerSet::addNumber(int x) {
	num.push_back(x);
	std::sort(num.begin(), num.end());
	num.erase(std::unique(num.begin(), num.end()), num.end());
}
void IntegerSet::deleteNumber(int x) {
	auto iTer = std::find(num.begin(), num.end(), x);
	if (iTer == num.end()) return;
	num.erase(iTer);
}
int IntegerSet::getItem(int x) {
	if (x < 0 || x >= num.size()) return -1;
	return num[x];
}
std::vector < int > IntegerSet::getAll() {
	return num;
}
