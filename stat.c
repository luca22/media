#include "stat.h"

double media(double* x, unsigned int n) {

	double res = 0;

	if (n == 0) {


		return res;
	}

	else {

		for (unsigned int i = 0; i < n; i++) {

			res += x[i];

		}
	
		return res / n;
	
	}

}
