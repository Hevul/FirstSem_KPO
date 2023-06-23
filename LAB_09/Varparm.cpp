#include "Varparm.h"

namespace Varparm {
	int ivarparm(int x, ...) {
		int* p = &x;
		int mult = 1;
		for (int i = 1; i <= x; i++) {
			mult *= p[i];
		}
		return mult;
	}
	int svarparm(short x, ...) {
		int* p = (int*)(&x);
		int Индекс_Максимального_числа = 1;
		for (int i = 2; i <= x; i++) {
			if (p[Индекс_Максимального_числа] < p[i]) {
				Индекс_Максимального_числа = i;
			}
		}
		return p[Индекс_Максимального_числа];
	}
	double fvarparm(float x, ...) {
		double* p = (double*)(&x + 1);
		double sum = x;
		int i = 0;
		while (p[i] != (double)FLT_MAX) {
			sum += p[i++];
		}
		return sum;
	}
	double dvarparm(double x, ...) {
		double* p = &x;
		double sum = 0;
		int i = 0;
		while (p[i] != DBL_MAX) {
			sum += p[i++];
		}
		return sum;
	}
}