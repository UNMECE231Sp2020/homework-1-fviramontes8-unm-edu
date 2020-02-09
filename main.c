#include <stdio.h>
#include "my_complex.h"



int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};

	return 0;
	
	void (*arr_ptr[])(Complex) = {complex_add, complex_sub, complex_mult, complex_div};
	void (*arr_ptr[])(double, double) = {magnitude, phase};
}
//test hahah
