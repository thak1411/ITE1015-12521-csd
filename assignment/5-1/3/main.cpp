#include <iostream>
#include "minmax.h"
int parseInt(const char* str) {
	int sign = 1, eax = 0, piv = 0;
	if (str[0] == '-') sign = -1, piv = 1;
	for (; str[piv]; ++piv) {
		if (str[piv] >= '0' && str[piv] <= '9') {
			eax *= 10;
			eax += str[piv] - '0';
		} else {} // invalid input //
	}
	return sign * eax;
}
int main(int argc, char** argv) {
	if (argc < 2) return 0;
	int* ar = new int[argc - 1];
	int min = -1, max = -1;
	for (int i = 0; i < argc - 1; ++i) {
		ar[i] = parseInt(argv[i + 1]);
	}
	getMinMax(ar, argc - 1, min, max);
	std::cout << "min: " << min << '\n' << "max: " << max << '\n';
	delete[] ar;
	return 0;
}
