#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 입력 scanf */
int main()
{
	int inputVal;
	printf("정수를 입력하세요 : ");
	scanf("%d", &inputVal);		// scanf로 입력 받을 때는 & 주소연산자 사용!
	// scanf에는 문자를 입력할 수 없다!! 별도로 printf 사용해야함.

	printf("입력한 정수는 %d 입니다.\n", inputVal);

	int n1, n2;
	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &n1, &n2);

	printf("입력한 두 값은 %d, %d 입니다.\n", n1, n2);

	char str[20];
	printf("문자열을 입력하세요 : ");
	scanf("%s", str, sizeof(str));

	printf("입력한 문자열 : %s\n", str);

	printf("char 크기 : %d\n", sizeof(char));			// 1byte
	printf("int 크기 : %d\n", sizeof(int));				// 4byte
	printf("float 크기 : %d\n", sizeof(float));			// 4byte
	printf("double 크기 : %d\n", sizeof(double));		// 8byte

	char name[20];
	int age;
	printf("나이와 이름을 입력하세요 : ");
	scanf("%d %s", &age, name);

	printf("저의 나이는 %d이고 이름는 %s입니다.", age, name);

	int a;
	char ch;
	scanf("%d", &a);
	getchar();
	scanf("%c", &ch);
	// 입출력버퍼 때문에 정수만 입력하고 종료됨(정수 입력하고 엔터키 때문에)
	// 실행하기 위해서는 scanf(" %c", &ch); or getchar(); 사용

	return 0;
}