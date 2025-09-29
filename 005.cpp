// 사각형의 폭과 높이를 입력받아 면적과 둘레를 계산하시오

#include <stdio.h>

int main()
{
	int x;
	int y;
	printf("폭 입력:");
	scanf_s("%d", &x);
	printf("높이 입력:");
	scanf_s("%d", &y);

	float area;
	area = x * y;
	printf("면적=%f\n", area);

	float peri;
	peri = 2 * (x + y);
	printf("둘레=%f\n", peri);

	return 0;
}