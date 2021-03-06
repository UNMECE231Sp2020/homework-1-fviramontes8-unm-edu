#include <stdio.h>

struct _complex {
	double real;
	double imag;
};
typedef struct _complex Complex;

void print_complex(Complex c);

void complex_call(Complex (*ptr)(Complex, Complex) ,Complex c1, Complex c2);
void complex_call_dos(double (*ptr)(Complex), Complex c);

void logic_handler(Complex (*ptr)(Complex, Complex),Complex c1, Complex c2);
void complex_handler(Complex (*ptr)(Complex),Complex c1);
Complex complex_add(Complex c1, Complex c2);
Complex complex_sub(Complex c1, Complex c2);
Complex complex_mult(Complex c1, Complex c2);
Complex complex_div(Complex c1, Complex c2);

Complex complex_conj(Complex c);

double magnitude(Complex c);
double phase(Complex c);
