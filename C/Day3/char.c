#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch1;
	char ch2;

	scanf("%c%c", &ch1, &ch2); // ENTER 키를 누르면 입력버퍼에 ENTER 키가 남아있음

	printf("[%c%c]", ch1, ch2); 

	return 0;
}