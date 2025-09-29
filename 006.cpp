// 연봉을 입력받아 10억을 모으는데 걸리는 시간을 계산하시오.

#include <stdio.h>

int main()
{
	float x;
	printf("연봉을 입력하시오:");
	scanf_s("%f", &x);

	double year;
	year = 1000000000 / (x *10000);
	printf("10억을 모으는데 걸리는 시간:%lf \n ", year);

	return 0;

}
