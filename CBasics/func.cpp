#include "func.h"
// func.h 파일을 참조
// Add라는 함수가 있다라고 선언
#include "common.h"

#include <stdio.h>

int Add(int a, int b)
{
	printf("g_iStatic 의 값은 : %d\n", g_iStatic);
	// static_var.cpp에 iStatic = 100; 이라고 선언되어 있는데, 실행결과는 0이 나온다.
	// 왜? func.cpp의 isStatic은 따로

	printf("g_iExtern 의 값은 : %d\n", g_iExtern);

	return a + b;
}

int Sub(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

// 함수 정의 : 함수의 실제 동작을 구현하는 부분