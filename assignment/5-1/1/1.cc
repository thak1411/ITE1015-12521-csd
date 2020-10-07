#include <iostream>
#include <sstream>
#include <string>
int main(int argc, char** argv) {
	if (argc < 3) return 0;
	int n;
	std::stringstream ss(argv[2]);
	ss >> n;
	for (int i = 0; i < n; ++i) {
		std::cout << argv[1] << '\n';
	}
	return 0;
}
