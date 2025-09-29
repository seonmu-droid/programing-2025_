// 008. 실수 0.123456789을 %f와 %e(지수형)으로 출력하라

#include <stdio.h>

int main()

{
	float f = 0.123456789;
	double d = 0.123456789;

	printf("%f\n", f);
	printf("%e\n", f);

	printf("%f\n", d);
	printf("%e\n", d);

	float x = 2e10; // 지수형으로 표현한 숫자 2* 10의 10승
	printf("%f\n", x);

	int y = 2e10;
	printf("%d\n", y);

	long long z = 2e10;
	printf("%lld\n", z);


}