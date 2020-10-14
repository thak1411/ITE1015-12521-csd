#ifndef __SORTED_H__
#define __SORTED_H__

#include <functional>
#include <algorithm>
#include <vector>

class SortedArray {
private:
	std::vector < int > num;
public:
	SortedArray();
	~SortedArray();

	void addNumber(int);
	std::vector < int > getSortedAscending();
	std::vector < int > getSortedDescending();
	int getMax();
	int getMin();
};

#endif
