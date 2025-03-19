#include <stdio.h>


// 사용자 정의 자료형
typedef struct _tagMyST
{
	int a;			// int 파트에 이름을 a라고 지음, 변수x
	float f;		// 내가 정의한 자료가 이렇게 구성되어 있다고 설명해주는 과정, 실체가 있는건 아님.
}MYST;

typedef struct _tagBig
{
	MYST k;
	int i;
	char c;
}BIG;

typedef struct NewStruct
{
	int a;
	short s;
}NEWST;

typedef int INT;			// 타입 재정의(자료형(type)에 대한 새로운 이름을 정의하는 키워드)

int main()
{
	// 구조체
	MYST t = {100, 3.14f};			// 초기화할 수 있음.
	t.a = 10;
	t.f = 10.2312f;

	int iSize = sizeof(MYST);		// 8바이트

	INT a;

	//struct NewStruct a;
	NEWST n;

	// C 문법에서는 NewStruct 자료형으로 변수를 선언하려면
	// NewStruct a; 앞에 struct를 명시해줘야함.
	// but, typedef로 새로운 이름을 부여하면 struct를 명시 안해줘도됨.

	return 0;
}