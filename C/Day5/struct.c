/*
	struct(구조체) - 사용자 정의 자료형
	기존 자료형을 묶어서 만든 복합 자료형(타입)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Human {			// 구조체 선언 struct 구조체명
	char name[100];		// 멤버변수
	int age;			// 멤버변수
};

int main()
{
	/* . : 멤버 접근 연산자 */
	struct Human h;		// Human 구조체의 변수 h 선언
	h.age = 30;			// h 객체의 멤버 age에 30을 저장한다.
	//h.name = "hong kildong";
	strcpy(h.name, "hong kildong");
	// strcpy() 함수는 문자열을 복사하는 기능을 제공하며, 이를 통해 구조체 멤버 변수에 문자열을 저장


	printf("저의 이름은 %s이고 나이는 %d입니다.\n", h.name, h.age);

	char str[100] = "hong kildong";		// 주소에 대입연산자 사용할 수 없다.
	//printf("%s\n", str);
	char str2[100];
	str2[0] = 'h';
	str2[1] = 'o';
	str2[2] = 'n';
	str2[3] = 'g';
	str2[4] = 'k';
	str2[5] = 'i';
	str2[6] = 'l';
	str2[7] = 'd';
	str2[8] = 'o';
	str2[9] = 'n';
	str2[10] = 'g';
	str2[11] = '\0';
	printf("%s\n", str2);

	////str2 = "kim chulsu";	// l-value에 주소는 올 수가 없다. 변수만 가능! str2는 주소
	return 0;
}
