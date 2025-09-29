// 원화를 달러화로 환산하는 프로그램을 작성하시오.
#include <stdio.h>

int main()
{
	float rate;
	printf("환율:");
	scanf_s("%f", &rate);

	int won;
	printf("원화:");
	scanf_s("%d", &won);

	float dollar;
	dollar = won / rate;
	printf("달러:%f \n", dollar);

	return 0;
}