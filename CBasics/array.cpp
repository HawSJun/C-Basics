﻿#include <stdio.h>

int main()
{
	// 배열
	// 메모리가 연속적으로 구조가 잡혀있다.

	int iArray[10] = { };	// 전체를 0으로 초기화

	iArray[12] = 10;
	// 유효한 인덱스 0 ~ 9 초과해서 접근하기 때문에 다른 변수 쪽으로 값이 들어올 수 있음.
	// 선언한 배열의 수를 넘어서 접근하면 다른 변수나 스택의 데이터를 덮어쓸 가능성 있어 메모리 손상이 일어날 수 있음

	iArray[4] = 10;
	// [4]는 인덱스를 지칭, 배열의 인덱스는 0부터 시작
	// 특정 요소로 접근할 때 인덱스를 이용하여 선언한 배열의 n번째 요소에 접근 가능

	return 0;
}