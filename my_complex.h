#include <stdio.h>

struct _complex {
	double real;
	double imag;
};


typedef struct _complex Complex;

void  fnc_Call_2_Complex(FNC PTR HERE ,Complex a, Complex b)
{
	printf("something about the function")
}


void fnc_Call_Double_Complex(double, Complex **pointer)
{

}

void print_complex(Complex c);

Complex complex_add(Complex c1, Complex c2);
Complex complex_sub(Complex c1, Complex c2);
Complex complex_mult(Complex c1, Complex c2);
Complex complex_div(Complex c1, Complex c2);

Complex complex_conj(Complex c);


double magnitude(Complex c);
double phase(Complex c);
