#include <iostream>
#include <string>
int main() {
	std::string s1, s2, s3;
	std::cin >> s1 >> s2;
	s3 = s1 + s2;
	std::cout << s3 << '\n' << s1.front() << '\n' << s2.back() << '\n';
	return 0;
}
