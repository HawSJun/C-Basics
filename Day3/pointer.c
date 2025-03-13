/*
	pointer - 주소
	포인터 변수 - 주소를 저장하는 변수
*/

#include <stdio.h>

int main()
{
	//int p;		// int 타입의 변수 선언
	//int* p;		// int 타입의 주소를 저장하는 포인터 변수 선언
	//char* pc;	// char 타입의 주소를 저장하는 포인터 변수 선언
	
	int num = 100;
	printf("num의 주소 : %p\n", &num);
	printf("nume의 값 : %d\n", num);

	int* p = &num;	// num의 주소를 p에 저장
	printf("포인터 변수 p에 저장된 값 : %p\n", p);
	printf("포인터 변수 p가 가라키는 곳의 값 : %d\n", *p);		// *p : 간접 참조 연산자

	num += 1;
	printf("num : %d, *p : %d\n", num, *p);

	*p += 1;
	printf("num : %d, *p : %d\n", num, *p);

	return 0;
}

// 포인터 변수 크기는 4바이트

// p(포인터 변수의 값)		
// p는 num의 주소를 저장하는 포인터 변수입니다.
// 즉, p 자체가 num의 주소를 가지고 있으므로 p를 출력하면 num의 주소가 출력됩니다.
// 
// &p(포인터 변수의 주소)
// &p는 포인터 변수 p 자체의 주소입니다.
// 즉, p라는 변수도 메모리의 특정 위치에 저장되므로, & p를 출력하면 포인터 변수 p가 저장된 메모리의 주소가 출력됩니다.