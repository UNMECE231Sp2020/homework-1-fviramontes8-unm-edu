#include <stdio.h>
#include "my_complex.h"



int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};

	Complex (*arr_ptr[])(Complex, Complex) = {complex_add, complex_sub, complex_mult, complex_div};
	double (*arr_ptr2[])(Complex) = {magnitude, phase};


	for(int i = 0; i<4; i++)
	{
		complex_call((*arr_ptr[i]),a, b);
	}
	
	for(int i = 0; i < 2; i++)
	{
		complex_call_dos((*arr_ptr2[i]),(a));
		complex_call_dos((*arr_ptr2[i]),(b));
	}

	return 0;
}

