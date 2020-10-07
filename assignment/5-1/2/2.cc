#include <iostream>
#include <string>
struct Person {
	std::string name;
	double score;
};
double parseFloat(const char* str) {
	double sign = 1, res = 0, exp = 0, pow = 1;
	int piv = 0;
	if (str[0] == '-') sign = -1, piv = 1;
	for (; str[piv]; ++piv) {
		if (str[piv] >= '0' && str[piv] <= '9') {
			res *= 10.;
			res += str[piv] - '0';
		} else if (str[piv] == '.') {
			++piv;
			break;
		} else {} // invalid input //
	}
	for (; str[piv]; ++piv) {
		if (str[piv] >= '0' && str[piv] <= '9') {
			exp *= 10.;
			exp += str[piv] - '0';
			pow *= 10.;
		} else {} // invalid input //
	}
	return sign * (res + exp / pow);
}
int main(int argc, char** argv) {
	if (argc < 2) return 0;
	Person* p = new Person[argc / 2];
	int id = 0;
	for (int i = 1; i < argc; i += 2, ++id) {
		p[id].name = argv[i];
		p[id].score = parseFloat(argv[i + 1]);
	}
	for (int i = 0; i < id; ++i) {
		std::cout << "Name:" << p[i].name << ", Score:" << p[i].score << '\n';
	}
	delete[] p;
	return 0;
}
