

#include <stdio.h>

int main()
{
	char str[100] = "banana";
	char str2[6] = "apple";			// char 배열에 문자열을 넣을 때는 널 문자까지 고려해서 배열의 크기를 정해야 함
	char str3[7] = { 'o', 'r', 'a', 'n', 'g', 'e' };	// 문자열 끝에는 널 문자가 있음
	char str4[4];

	str4[0] = 'a';
	str4[1] = 'b';
	str4[2] = 'c';  str4[3] = '\0'; // 널 문자를 넣어주지 않으면 문자열로 인식하지 않음

	printf("str : %s\n", str);
	printf("str2 : %s\n", str2);
	printf("str3 : %s\n", str3);
	printf("str3[6] : %s\n", str3[6]);	// 문자열의 끝에는 널 문자가 있음
	printf("str4 : %s\n", str4);		
	printf("str 나머지 방 : %s\n", str[10]);

	// str = str2;	// 배열의 이름은 상수이기 때문에 다른 배열의 이름을 대입할 수 없음
	strcpy(str, str2);			// 문자열을 복사할 때는 strcpy 함수를 사용
	printf("str : %s\n", str);

	strcpy(str, "dog");
	printf("str : %s\n", str);

	str[0] = 'D';				// 문자열은 작은 따옴표로 표현
	printf("str : %s\n", str);

	return 0;
}