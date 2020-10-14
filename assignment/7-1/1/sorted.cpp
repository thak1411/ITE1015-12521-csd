#include "sorted.h"

SortedArray::SortedArray() {}
SortedArray::~SortedArray() {}

void SortedArray::addNumber(int x) {
	this->num.push_back(x);
}
std::vector < int > SortedArray::getSortedAscending() {
	std::sort(num.begin(), num.end(), std::less < int >());
	return num;
}
std::vector < int > SortedArray::getSortedDescending() {
	std::sort(num.begin(), num.end(), std::greater < int >());
	return num;
}
int SortedArray::getMax() {
	if (num.size() < 1) return 0;
	return *std::max_element(num.begin(), num.end());
}
int SortedArray::getMin() {
	if (num.size() < 1) return 0;
	return *std::min_element(num.begin(), num.end());
}
