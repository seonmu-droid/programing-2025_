// 012.태양에서 오는 빛이 몇 분/ 몇 초 만에 지구에 도착하는 지를 계산해라. 빛의 속도는 1초에 30만 km를 이동한다. 태양과 지구 사이의 거리는 약 1억 4960만 km이다.

#include <stdio.h>

int main()
{
	double d = 149600000;
	double s = 300000;
	double t = d / s;

	int m = (int)(t / 60);
	double sec = t - m * 60;

	printf("%d분 %.2f초\n", m, sec);

	return 0;
}