// 016. cm로 입력한 키를 피트와 인치로 변환하라. 1피트는 12인치이고 1인치는 2.54cm이다.
#include <stdio.h>

int main()
{
	double cm;
	int fe, inc;

	printf("키(cm):");
	scanf_s("%lf", &cm);

	inc = cm / 2.54;
	fe = inc / 12;
	
	printf("%d 피트 %d 인치", fe, inc);

}