#include <stdio.h>

// 전역변수
int g_i = 0; 

// 헤더와 파일을 분할해서 구현하다 보면
// 전역변수의 장점이 사라짐
// 선언한 전역변수는 해당 파일에서만 인식함!!
// 다른 파일에서는 전역변수 유무를 인식하지 못함


#include "func.h"
// func.h 헤더 파일 참조!
// 실제 구현은 func.cpp에 구현

void Test();

int main()
{
	int i = Mul(10, 20); 
	// func.h에 int Mul(int a, int b); 선언이 있음
	// 최종 빌드를 완료하고 나면 호출하고자 하는 함수는 func.cpp에 연결이 됨

	return 0;
}