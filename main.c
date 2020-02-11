#include <stdio.h>
#include "my_complex.h"

int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};
	Complex (*fn1[4])(Complex, Complex) = {complex_add, complex_sub, complex_mult, complex_div};
	double (*fn2[2])(Complex) = {phase, magnitude};

	int i;
	for(i=0; i<4; i++) {
		fn1[i](a, b);
	}

	int j;
	for(j=0; j<2; j++) {
		fn2[j](a);
		fn2[j](b);
	}

	return 0;
}
