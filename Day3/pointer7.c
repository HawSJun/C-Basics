#include <stdio.h>

int main()
{
	const int num = 10;
	//num = 20;

	int num2 = 10;
	num2 = 20;

	int* pnum2 = &num2;
	*pnum2 = 30;
	printf("num2 : %d\n", num2);

	const int* pn2 = &num2;			// 데이터 상수(포인터 변수를 통한 데이터 변경 불가)
	// *pn2 = 100;
	num2 = 0;

	int num3 = 40;
	int* const pnum3 = &num3;		// 포인터 상수(포인터 변수가 가리키는 주소의 변경 불가)
	*pnum3 = 100;
	printf("num3 : %d\n", num3);
	// pnum3 = &num2;

	const int* const pn5 = &num2;
	// *pn5 = 1000;
	// pn5 = &num3;
	num2 = 40;

	return 0;
}