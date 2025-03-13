#include <stdio.h>

void swap(int *a, int *b);

int main()
{
	int a = 10;
	int b = 20;

	printf("호출 전 a : %d, b : %d\n", a, b);
	
	swap(&a, &b);

	printf("호출 후 a : %d, b : %d\n", a, b); // 함수 내에서 값이 바뀌지 않음

	return 0;
}

void swap(int *pa, int *pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
