#include <stdio.h>

/*  */

int main() {

	char str[50] = "abcqdefqpppoqaws";

	// 포인터를 활용해서 q 값을 찾고, q 를 Q 로 바꾸시오.
	char* pC = str;

	while (*pC != '\0') {	// 문자열의 끝을 만날 때까지 반복
		if (*pC == 'q') {	// q 를 찾으면
			*pC = 'Q';		// Q 로 바꿈
		}
		pC++;				// 다음 문자로 이동
	}

	printf("%s", str);		//  ---- > abcQdefQpppoQaws
	return 0;
}