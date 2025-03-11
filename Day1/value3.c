#include <stdio.h>

int main()
{
	int r = 10;
	const double pi = 3.14;		// 변수이름을 상수화
	// const를 사용하여 변수를 선언하면, 그 변수는 읽기 전용이 되어 값이 변경되지 않는다!

	double cf = 2 * pi * r;

	// pi = 3.15;
	double* dp = &pi;	// 포인터로 간접 참조하여 값을 변경하면 가능!
	*dp = 4.0;

	printf("원둘레 : %.2lf\n", cf);
	printf("pi : %lf\n", pi);

	return 0;
}