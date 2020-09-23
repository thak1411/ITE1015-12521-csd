#include <iostream>
#include <string>
void swapInt(int& i, int& j) {
	int k = i;
	i = j;
	j = k;
}
void swapString(std::string& i, std::string& j) {
	std::string k = i;
	i = j;
	j = k;
}
int main() {
	int n1, n2;
	std::string s1, s2;
	std::cin >> n1 >> n2 >> s1 >> s2;
	std::cout << "n1: " << n1 << ", n2: " << n2 << ", s1: " << s1 << ", s2: " << s2 << '\n';
	swapInt(n1, n2);
	swapString(s1, s2);
	std::cout << "n1: " << n1 << ", n2: " << n2 << ", s1: " << s1 << ", s2: " << s2 << '\n';
	return 0;
}
