#include <stdio.h>

int main()
{
	int ary[5];
	int* pa = ary; // ary 자체가 배열의 시작 주소를 나타내므로 별도로 & 연산자를 사용할 필요가 없습니다.

	*(pa + 0) = 10;
	printf("*pa : %d, ary[0] : %d\n", *pa, ary[0]);
	printf("pa : %d\n", pa + 0);
	printf("pa + 1 : %d\n", (pa + 1));

	*(pa + 1) = 20;
	printf("*(pa + 1) : %d, ary[1] : %d\n", *(pa + 1), ary[1]);
	printf("pa[i] : %d\n", pa[1]);			// [ ] == *(   ) : 포인터 연산식
	return 0;
}