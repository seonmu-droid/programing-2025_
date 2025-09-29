//세 개의 double형의 실수를 입력받은 후,합계와 평균값을 계산하시오.

#include <stdio.h>

int main()
{
	double x, y, z;
	printf("세 개의 실수 입력:");
	scanf_s("%lf %lf %lf", &x, &y, &z);

	double sum;
	sum = x + y + z;
	printf("합계 = %lf\n", sum);

	double avg;
	avg = sum / 3;
	printf("평균 = %lf\n", avg);

	return 0;
}