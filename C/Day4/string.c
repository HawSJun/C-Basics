/*
	문자열
*/
#include <stdio.h>

int main()
{
	char str[100] = "orange";		// 스택 영역에 위치한 지역 변수에 저장

	printf("%s\n", str);
	printf("%s\n", "orange");		// 프로그램이 시작될 때 데이터 영역(일반적으로 읽기 전용 영역 또는 정적 영역)에 저장
									// 문자열 리터럴 자체는 프로그램 전체에서 사용할 수 있도록 메모리에 상주
	printf("%p\n", "orange");
	printf("%c\n", *"orange");
	printf("%c\n", *("orange" + 1));
	printf("%c\n", "orange"[2]);

	return 0;
}

// 메모리 영역
// 힙 : 사용자에게 할당 된 메모리 영역
// 스택 : 지역변수, 매개변수
// 데이터 : 전역변수, static
// Read Only : 문자열 상수, 리터럴