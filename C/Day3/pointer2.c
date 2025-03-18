/*
	pointer - 주소의 크기는 컴퓨터 환경에 따라 다름
	포인터 변수의 크기는 타입에 상관없이 일정하다, 왜냐하면 주소의 크기는 일정하기 때문이다.
*/
#include <stdio.h>

int main()
{
	char ch;
	int n;
	char* pch = &ch;
	int* pn = &n;

	printf("char 주소 크기 : %d\t", sizeof(&ch));
	printf("int 주소 크기 : %d\n", sizeof(&n));
	printf("char 포인터 크기 : %d\t", sizeof(pch));
	printf("int 포인터 크기 : %d\n", sizeof(pn));

	return 0;
}

// 64비트 컴퓨터에서 주소의 크기는 8바이트
// 32비트 컴퓨터에서 주소의 크기는 4바이트

// 1KBYTE = 1024BYTE
// 1MBYTE = 1024KBYTE = 2^20BYTE
// 1GBYTE = 1024MBYTE = 2^30BYTE
// 32비트 4GBYTE = 2^32BYTE = 4,294,967,296BYTE

// 2^10 = 1024