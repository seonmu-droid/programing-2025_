// 009.숫자 하나를 지수형으로 입력받아 %f와 %e로 출력하시오. 지수형 : 1.23e12 
#include <stdio.h>

int main()
{
	float f = 1.23e12;

	printf("지수형:");
	scanf_s("%f", &f);
	printf("%%f : %f\n", f);
	printf("%%e : %e\n", f);

}