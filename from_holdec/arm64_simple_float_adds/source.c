#include <stdio.h>


float add_float(float a, float b) {
	return a+b;
}

double add_double(double a, double b) {
	return a+b;
}

long double add_long_double(long double a, long double b) {
	return a+b;
}

int main() {
	printf("float:       %2ld %f\n", sizeof(float), add_float(1.0, 0.1));
	printf("double:      %2ld %f\n", sizeof(double), add_double(1.0, 0.1));
        printf("long double: %2ld %Lf\n", sizeof(long double), add_long_double(1.0, 0.1));
                  

  return 0;
}
