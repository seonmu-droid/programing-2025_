// 013.연도를 입력받아 윤년인지 평년인지 출력하시오.

#include <stdio.h>

int main()
{
	int year, result;
	printf("연도를 입력하시오:");
	scanf_s("%d", &year);

	if ((year % 4 == 0) && (year % 100 != 0) || (year % 200 == 0))
		printf("윤년입니다.");
	else
		printf("평년입니다.");
	
	return 0;
}