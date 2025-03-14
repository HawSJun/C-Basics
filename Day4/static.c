/*
	static
*/

#include <stdio.h>

void incFunc();
void incFunc2();

int main()
{
	for (int i = 0; i < 5; i++) {
		incFunc();
		incFunc2();
	}
	//scnt++;				// 외부에서 정적변수의 접근은 불허한다.
	return 0;
}

void incFunc() {
	int cnt = 0;
	cnt++;
	printf("cnt : %d\t", cnt);
}
void incFunc2() {
	static int scnt = 0;		// 정적변수(정적변수의 수정은 선언된 블록안에서만 가능하다.)
	scnt++;
	printf("scnt : %d\n", scnt);
}