#include <iostream>
#include <sstream>
void magicSquare(int n, int** mat) {
	int x = 0, y = n / 2, c = 1;
	for (int i = n * n; i--; ) {
		mat[x][y] = c++;
		int xx = (x - 1 + n) % n;
		int yy = (y + 1) % n;
		if (mat[xx][yy]) ++x;
		else x = xx, y = yy;
	}
}
int main(int argc, char** argv) {
	if (argc < 2) return 0;
	std::stringstream ns(argv[1]);
	int n;
	int** mat;
	ns >> n;
	if ((n & 1) == 0 || n < 3) return 0;
	mat = new int*[n];
	for (int i = 0; i < n; ++i) {
		mat[i] = new int[n];
		for (int j = 0; j < n; ++j) {
			mat[i][j] = 0;
		}
	}
	magicSquare(n, mat);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			std::cout << mat[i][j] << " \n"[j + 1 == n];
		}
	}
	for (int i = 0; i < n; ++i) {
		delete[] mat[i];
	}
	delete[] mat;
	return 0;
}
