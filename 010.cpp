// 010.실수 0.1을 소수점 아래 20자리까지 출력하고, 오차가 생기는 이유를 설명하시오.

#include <stdio.h>

int main()
{
	double x = 0.1;

	printf("%.20f\n", x);

	return 0;
}