#include <stdlib.h>
#include <stdio.h>

int main()
{
	// 포인터 변수
	// 자료형 변수명
	int* pInt = nullptr;	// 자료형이 포인터 타입, 정수형 주소를 저장하는 변수

	// 주소를 저장
	// 주소 그 자체를 int 타입으로 보는게 아니라 주소로 접근했을때 그 주소 번지에 해당하는 실제 메모리 공간을 int로 보겠다.
	// int 변수가 아님!!, 주소를 저장하는 변수인데 주소 값을 넣어주면 그 주소로 갔을때 그곳을 int로 해석을 하겠다!
	// 주소를 저장하는 변수의 크기는 다 같다! 

	char* pCahr = nullptr;
	short* pshort = nullptr;

	// 포인터 변수의 크기는 8바이트다.
	int iSize = sizeof(pInt);

	int i = 0;
	pInt = &i;

	pInt += 1;		
	// pInt는 int* 변수이기 때문에, 가리키는 곳을 int로 해석한다.
	// 따라서 주소 값을 1 증가한다는 의미는 다음 int 위치로 접근하기 위해서 sizeof(int) 단위로 증가하게 된다.
	// 포인터 변수에서 주소의 증감은 자료형 사이즈를 단위로 함!

	printf("Size of char*  : %zu bytes\n", sizeof(char*));			// 8바이트
	printf("Size of int*   : %zu bytes\n", sizeof(int*));			// 8바이트
	printf("Size of double*: %zu bytes\n", sizeof(double*));		// 8바이트
	printf("Size of void*  : %zu bytes\n", sizeof(void*));			// 8바이트

	// 포인터 변수의 크기는 운영체제와 컴파일러의 아키텍처(주소 공간 크기) 에 의해 결정된다.
	// 32비트 시스템 : 모든 포인터는 4바이트(32비트)
	// 64비트 시스템 : 모든 포인터는 8바이트(64비트)

	// 포인터와 배열
	// 배열의 특징
	// 1. 메모리가 연속적인 구조이다!!
	// 2. 배열의 이름은 배열의	시작 주소이다.

	int iArr[10] = {};		// 0으로 모두 초기화

	// int 단위로 접근
	*(iArr + 0) = 10;		// iArr[0] = 10
	*(iArr + 1) = 10;		// iArr[1] = 10


	return 0;
}
