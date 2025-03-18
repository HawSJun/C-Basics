#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*char ch1;
	char ch2 = 'A';
	if ((ch2 >= 'A') && (ch2 <= 'Z')) {
		ch1 = ch2 + ('a' - 'A');
	}
	printf("대문자 : %c\t", ch2);
	printf("소문자 : %c\n", ch1);*/

	// 대소문자 변환 프로그램
	char ch1;
	char ch2;

	printf("문자를 입력하세요 : ");
	scanf("%c", &ch2);

	if ((ch2 >= 'A') && (ch2 <= 'Z')) {
		ch1 = ch2 + ('a' - 'A');
		printf("소문자 : %c\n", ch1);
	}
	else if ((ch2 >= 'a') && (ch2 <= 'z')) {
		ch1 = ch2 - ('a' - 'A');
		printf("대문자 : %c\n", ch1);
	}
	else {
		printf("알파벳이 아닙니다.\n");
	}
	return 0;
}