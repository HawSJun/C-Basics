/*
	함수 포인터
*/

#include <stdio.h>

int sum(int, int);
int sub(int, int);

int main()
{
	int (*fp)(int, int);
	int res;
	int res2;
	//res = sum(20, 10);
	//res2 = sub(20, 10);

	fp = sum;
	res = fp(20, 10);

	fp = sub;
	res2 = fp(20, 10);

	printf("res : %d\n", res);
	printf("res2 : %d\n", res2);

	return 0;
}

int sum(int a, int b)
{
	int res = a + b;

	return res;
}

int sub(int a, int b)
{
	int res2 = a - b;

	return res2;
}