/* 출력 */
#include <stdio.h>

int main()
{
	printf("정수출력: %d\n", 10);			// 정수 출력
	printf("실수 출력: %lf\n", 3.14);		// 실수 출력
	printf("실수 출력: %.2f\n", 3.14f);
	printf("실수 출력: %.4lf\n", 3.141592);

	printf("%d 그리고 %d", 10, 20);

	/* 진수 */
	printf("%d\n", 100);
	printf("%d\n", 0xc);			// 0x는 16진수

	// 10진수 : 0 ~ 9 까지
	// 16진수 : 10 진수 + a(10)
	// 10(A) 11(B) 12(C) 13(D) 14(E) 15(F)
	// 1바이트 (byte) = 8비트 (bit)
	// 1니블(nibble) = 4비트(bit)


	// 1001 1100
	//  9    12
	//  9    C

	/* 문자 */
	printf("%c\n", 'a');	// 문자는 ''로 감싼다. 문자 출력시 %c

	printf("홍길동\n");
	printf("%s\n", "홍길동");	// 문자열 출력시 %s, 문자열은 ""로 감싼다.

	printf("%s, %d\n", "HSJ", 30);
	printf("%s, %s\n", "HSJ", "010-1111-2222");


	printf("문자 a : %c\n", 'a');
	printf("문자 a : %d\n", 'a');	// ASCII 코드 97
	printf("문자 A : %d\n", 'A');	// ASCII 코드 65

	// int : 4byte, char : 1byte

	return 0;
}