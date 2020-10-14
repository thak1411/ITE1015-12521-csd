#ifndef __INTSET_H__
#define __INTSET_H__

#include <algorithm>
#include <vector>

class IntegerSet {
private:
	std::vector < int > num;
public:
	IntegerSet();
	~IntegerSet();
	void addNumber(int);
	void deleteNumber(int);
	int getItem(int);
	std::vector < int > getAll();
};

#endif
