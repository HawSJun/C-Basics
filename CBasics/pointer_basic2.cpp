#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// '값에 의한 호출 call by value'
// 함수를 호출할 때, 변수의 값 자체를 복사하여 전달하는 방식
// 함수 내부에서 값을 변경해도, 원래 변수에는 영향 없음
//void swap(int a, int b)		// 여기서 int a, int b는 해당 함수 안에서 사용되는 지역변수
//{
//	printf("%p %p\n", a, b);
//
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main()
//{
//	int a = 123;		// 여기 주소랑 swap 함수 안에서 매개변수로 사용하고 있는 a,b와 주소가 다름
//	int b = 456;		// 값이 복사만 된 것!!
//
//	printf("%p %p\n", &a, &b);
//
//	swap(a, b);
//	printf("%d %d", a, b);
//
//	return 0;
//}

// 주소를 넣어 값을 변경할 수 었다. 즉, 포인터를 매개변수로 사용
// '주소(포인터)에 의한 호출 call by pointer'
// 함수를 호출할 때, 변수의 주소를 전달하여 원본을 직접 변경하는 방식
// 함수 내부에서 값을 변경하면, 원래 변수도 함께 변경됨
void swap(int* a, int* b)		// 여기서 int a, int b는 해당 함수 안에서 사용되는 지역변수
{
	printf("%p %p\n", a, b);

	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 123;		// 여기 주소랑 swap 함수 안에서 매개변수로 사용하고 있는 a,b와 주소가 다름
	int b = 456;		// 서로 다른 존재라서 주소가 다름 이걸 '값에 의한 호출 call by value'
	// 값이 복사만 된 것!!!

	printf("%p %p\n", &a, &b);

	swap(&a, &b);
	printf("%d %d", a, b);

	return 0;
}


// 포인터 앞에도 & 붙여서 주소를 출력할 수 있음.
// 그거는 포인터 변수 자체의 주소를 출력
// 포인터가 가리키고 있는 주소를 의미하는건 아님!!