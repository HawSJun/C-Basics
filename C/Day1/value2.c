
#include <stdio.h>

int main()
{
	/* 실수 자료형 */
	float f = 1.12345678912345;
	double d = 1.12345678912345;

	printf("float : %.20f\n", f);
	printf("double : %.20lf\n", d);

	/* 문자 자료형 */
	char str[10] = "banana";	// 문자타입 배열 선언

	printf("str : %s\n", str);
	printf("str[0] : %c\n", str[0]);
	printf("str[1] : %c\n", str[1]);
	printf("str[5] : %c\n", str[5]);
	printf("str[6] : %c\n", str[6]);
	// printf("str[6] : %s\n", str[6]);	// 문자열 끝에는 널 문자가 온다.

	char str2[6] = "apple";			// char str2[5] = "apple";	
	printf("str2 : %s\n", str2);	// null를 저장할 공간이 없어서 

	str2[0] = 'A';
	printf("str2 : %s\n", str2);

	/* 정수형 배열 */
	int ary[5] = { 1, 2, 3, 4, 5 };		// 정수형 배열 선언

	printf("ary[0] : %d\n", ary[0]);
	ary[3] = 400;
	printf("ary[3] : %d", ary[3]);

	for (int i = 0; i < 5; ++i)
	{
		printf("ary[%d] : %d\n", i, ary[i]);
	}

	return 0;
}

 //배열 : 동일한 자료형을 연속적으로 저장할 수 있는 공간

 //제어문
 //1. 반복 : for, while 
 //배열 : for
 //배열 이름 : 배열의 시작 주소, 주소 연산자 사용 x
 //2. 선택 : if, switch

 //변수 이름(주소x) : 변수를 저장할 수 있는 공간
