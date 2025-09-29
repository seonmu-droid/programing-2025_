// 015.3개의 정수를 입력받아, 최대값을 출력하는 프로그램을 조건연산자를 사용하여 작성하시오.
#include <stdio.h>
int main()
{
	int a, b, c, max;
	printf("3개 정수 입력:");
	scanf_s("%d %d %d", &a, &b, &c);

	max = (a > b) ? a : b;
	max = (max > c) ? max : c;

	printf("max = %d\n", max);
	
	return 0;
}
