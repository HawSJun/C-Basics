/*
	두 값을 바꾸는 알고리즘
*/

#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	printf("변경 전 a : %d, b : %d\n", a, b);

	int temp = a;
	a = b;	// a와 b의 값을 서로 바꾸려면 임시 변수가 필요함
	b = temp;
	printf("변경 후 a : %d, b : %d\n", a, b);

	return 0;
}
