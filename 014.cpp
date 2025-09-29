// 014. 섭씨온도를 입력하면 화씨온도를 출력하는 프로그램을 작성하시오. 
#include <stdio.h>

int main()
{
	int f,c;
	
	printf("섭씨온도:");
	scanf_s("%d", &c);

	f = (c * (9.0 / 5.0)) + 32;
	printf("화씨온도: %d\n", f);

	return 0;

}