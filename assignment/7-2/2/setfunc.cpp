#include "setfunc.h"

std::set < int > parseSet(const std::string& str) {
	int l1 = str.find('{'), r1 = str.find('}'), x;
	std::set < int > st;
	if (l1 == std::string::npos || l1 == std::string::npos) return st;
	std::stringstream ss;
	ss.str(str.substr(l1 + 1, r1 - l1 - 1));
	for (; ss >> x; ) {
		st.insert(x);
	}
	return st;
}
void printSet(const std::set < int >& st) {
	std::cout << "{ ";
	for (auto iTer = st.begin(); iTer != st.end(); ++iTer) {
		std::cout << *iTer << ' ';
	}
	std::cout << "}\n";
}
std::set < int > getIntersection(const std::set < int >& st1, const std::set < int >& st2) {
	std::set < int > st;
	for (auto iTer = st1.begin(); iTer != st1.end(); ++iTer) {
		if (st2.find(*iTer) != st2.end()) st.insert(*iTer);
	}
	return st;
}
std::set < int > getUnion(const std::set < int >& st1, const std::set < int >& st2) {
	std::set < int > st;
	for (auto iTer = st1.begin(); iTer != st1.end(); ++iTer) {
		st.insert(*iTer);
	}
	for (auto iTer = st2.begin(); iTer != st2.end(); ++iTer) {
		st.insert(*iTer);
	}
	return st;
}
std::set < int > getDifference(const std::set < int >& st1, const std::set < int >& st2) {
	std::set < int > st;
	for (auto iTer = st1.begin(); iTer != st1.end(); ++iTer) {
		if (st2.find(*iTer) == st2.end()) st.insert(*iTer);
	}
	return st;
}
