
#include <stdio.h>

int main()
{
	/* 변수선언 */
	int num;		// 자료형 변수명
	num = 10;		// 오른쪽에 있는 값을 왼쪽에 값을 넣어라!!
	int num2 = 10;	// 변수의 초기화
	num = num2;
	// 100 = num;
	char ch = 'A';	// 문자타입의 변수 선언
	double db = 3.14;

	printf("num의 값 : %d\n", num);
	printf("num2의 값 : %d\n", num2);
	printf("ch의 값 : %c\n", ch);
	printf("db의 값 : %lf\n", db);

	// Rvalue 와 Lvalue
	// 리터럴 : 변하지 않는 값(Rvalue)
	// 변수 : 저장할 수 있는 공간의 이름
	// 변수명이 없으면 메모리 주소에 직접 접근야함.

	signed char ch2 = 0;	// -128 ~ 127
	unsigned char ch3 = 0;	// 0 ~ 255(양수만)

	unsigned int num3;
	num3 = 123456;
	printf("num3 : %d\n", num3);
	num3 = -1;
	printf("num3 : %d\n", num3);
	printf("num3 : %u\n", num3);

	return 0;
}