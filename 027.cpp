﻿#include <stdio.h>
int main()
{
	int  i = 0;

	while (i < 5)
	{
		printf("Hello World\n");
		i++;
	}

	int n;
	printf("구구단 단수 입력:");
	scanf_s("%d", &n);

	int ii = 1;

	while (ii <= 9)
	{
		printf("%d x %d = %d\n", n, ii, n * ii);
		ii++;
	}

	//제곱값을 출력하기
	i = 1;
	while (i <= 10)
	{
		printf("%5d %5d\n", i, i * i);
		i++;
	}
}