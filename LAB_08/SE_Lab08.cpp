#include <iostream>
using namespace std;

int defaultparm(int a, int b, int c, int d, int e, int f = 9, int g = 10) {
	return (a + b + c + d + e + f + g) / 7;
}

void main() {
	int r;
	r = defaultparm(1, 3, 2, 4, 5);
	cout << r << endl;
	r = defaultparm(1, 3, 2, 4, 5, 7, 6);
	cout << r << endl;
}