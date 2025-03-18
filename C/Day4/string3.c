/*
	scanf, gets - 공백까지 압력 가능
	stdin - 표준 입력 버퍼(입력 스트림) 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[100];

	/* scanf */
	/*printf("문자열 입력>> ");
	scanf("%s", str);

	printf("문자열 : %s ", str);
	scanf("%s\n", str);
	printf("다음 문자열 : %s\n", str);*/

	/* gets */
	/*printf("공백을 포함한 입력 >> ");
	gets(str);
	printf("입력 문자열 : %s\n", str);*/

	/* fgets */
	printf("공백을 포함한 입력 >> ");
	fgets(str, sizeof(str), stdin);
	printf("입력 문자열 : %s\n", str);
	
	return 0;
}