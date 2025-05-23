﻿#include <stdio.h>

int main()
{
	int a = 5;
	int c = 7;
	// * : asterisk
	// & : 주소 연산자

	int* ptr = &c;
	// ptr은 int형 변수를 가리키는 포인터 변수이며, a의 주소를 저장한다
	// ptr은 주소를 저장하는 변수이다.
	// 그 주소로 접근했을 때(*ptr), 해당 메모리 공간의 데이터를 int 타입으로 해석하겠다.
	// int형 변수의 주소를 저장하는 변수
	
	// 포인터 변수에 저장되어 있는 값은 다른 변수의 주소이다.
	// // 따라서 직접적으로 데이터를 저장하기 보다는
	// 다른 메모리 공간이나 그 공간에 저장되어 있는 데이터를 (간접적으로) 가리키는 역할을 한다.
	
	int* a_ptr = &a;
	
	*a_ptr = 8;		// 간접 접근 , 역참조
	printf("%d %d", a, *a_ptr);		// 8 8


	return 0;
}