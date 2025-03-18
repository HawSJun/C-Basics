#include <stdio.h>

typedef struct _tagMyST
{
	int a;		// 멤버
	float f;
}MYST;

int main()
{
	MYST s = {};		// MYST가 자료형, s가 변수
						// 만약, MYST 타입이 아니라 다른 타입의 주소를 받아오면

	MYST* pST = &s;

	*pST;		// s 변수

	(*pST).a = 100;		// 구조체라서 세부적으로 들어가야함!
	(*pST).f = 3.14f;
	
	// pST->a = 100;
	// pST->f = 3.14f;


	s.a;				// a는 int를 지칭하는 멤버

	return 0;
}