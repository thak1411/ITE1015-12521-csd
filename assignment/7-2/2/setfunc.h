#ifndef __SETFUNC_H__
#define __SETFUNC_H__

#include <iostream>
#include <sstream>
#include <set>

std::set < int > parseSet(const std::string&);
void printSet(const std::set < int >&);
std::set < int > getIntersection(const std::set < int >&, const std::set < int >&);
std::set < int > getUnion(const std::set < int >&, const std::set < int >&);
std::set < int > getDifference(const std::set < int >&, const std::set < int >&);

#endif
