/*
	구조체 포인터 : 
*/

#include <stdio.h>

typedef struct score {
	int kor;	// 멤버변수
	int eng;
	int mat;
}Score;

int main()
{
	Score s = { 100,80,85 };
	Score* ps = &s;						
	// Score 구조체 변수 s의 주소를 가리키는 Score 타입의 포인터 ps를 선언
	// ps는 s의 메모리 주소를 저장하고 있어, ps를 사용하면 s의 멤버 변수에 접근

	printf("국어 : %d\n", ps->kor);
	printf("영어 : %d\n", ps->eng);
	printf("수학 : %d\n", ps->mat);	// ps->kor, (*ps).kor, s.kor 다 같은 값


	return 0;
}

/*
	구조체 변수를 통해서 멤버에 접근하는 방법은? .(멤버접근 연산자)
	구조체 포인터를 통해서 멤버에 접근하는 방법은? -> (화살표 연산자, 애로우연산자), 간접멤버접근연산자
*/

// 멤버 변수란 구조체(struct)나 클래스(class) 내부에 선언된 변수를 의미