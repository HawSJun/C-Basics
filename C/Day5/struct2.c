#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct mystruct {
	char name[20];
	int age;
	double height;
	char* str;
};

int main()
{
	struct mystruct s;		// mystruct 구조체 변수 선언

	strcpy(s.name, "홍길동");
	s.age = 30;
	s.height = 170.2;

	s.str = (char*)malloc(sizeof(char)*100);

	printf("인삿말 : ");
	gets(s.str);

	printf("이름 : %s\n", s.name);
	printf("나이 : %d\n", s.age);
	printf("키 : %.1f\n", s.height);
	printf("인사말 : %s", s.str);
	
	free(s.str);

	return 0;
}

//struct  mystruct {
//	int num;
//	double grade;
//};
//
//
//int main()
//{
//	struct mystruct s;
//
//	s.num = 100;
//	s.grade = 99.9;
//
//	printf("s.num : %d\ns.grade : %.1f", s.num, s.grade);
//	return 0;
//}