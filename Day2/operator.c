#include <stdio.h>

int main()
{
	int n = 30;
	int res;

	res = (n > 10) && (n < 20);
	printf("res : %d\n", res);

	res = (n < 10) || (n > 20);
	printf("res : %d\n", res);

	res = (n >= 30);
	printf("res : %d\n", res);

	res = !(n >= 30);				// Ture -> False, False -> True
	printf("res : %d\n", res);

	res = ~(n >= 30);				// 비트연산자 NOT, 0을 1로 1을 0으로
	printf("res : %d\n", res);

	res = n << 1;					// 좌측으로 이동 시 맨 오른쪽에 있는 비트는 0으로 채워짐
	printf("res : %x\n", res);

	res = res >> 1;					// 우측으로 이동하면 맨 왼쪽에 있는 비트는 부호에 따라 비트가 달라짐
	printf("res : %x\n", res);

	int n2 = 143;					// 0b 1000 1111

	res = n2 << 1;					// 0b 1 0001 1110
	printf("res : %x\n", res);

	res = n2 >> 1;					// 0b 1100 0111
	printf("res : %x\n", res);

	return 0;
}

// 0을 기준으로 False, True
// 0 이외의 값은 True
// 최상위비트 MSB 부호비트 0 양수, 1 음수