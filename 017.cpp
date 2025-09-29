//17.

#include <stdio.h>
#include <math.h>

int main()
{
	double a, b;

	a = 0.3 - 0.2;
	b = 0.1;

	printf("a = %.20f\n", a);
	printf("b = %.20g\n", b);
	printf("fabs(a - b) = %.20f\n", fabs(a - b));

	if (fabs(a - b) < 1e-6f)
		printf("두 값을 같은 값으로 간주합니다. (epsilon = 1e-6f)");
	else
		printf("두  값은 다른 값으로 간주합니다.");
}