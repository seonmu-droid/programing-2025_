// 007. 변수 x를 입력받아 10진수, 8진수, 16진수로 출력하라  X값을 입력하시오 : 123

#include <stdio.h>

int main()
{
	int x;
	
	printf("x의 값을 입력하시오:");
	scanf_s("%d", &x);

	printf("DEC : %d\n", x);
	printf("OCT : %o\n", x);
	printf("HEX : %x\n", x);
}