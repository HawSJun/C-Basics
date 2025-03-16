/*
	포인터 이해 확인 문제
*/

#include <stdlib.h>
#include <stdio.h>

void Test(int* a)
{
	*a = 500;
}


int main()
{	
	// 문제 1.
	short sArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int* pI = (int*)sArr;		// int 포인터로 강제 캐스팅

	int iData = *((short*)(pI + 2));	
	// int 포인터 pI + 2 : 8바이트
	// 4바이트 접근하기 전에 short 포인터로 바꿔서 접근하므로 2바이트 접근

	printf("1번 문제 정답 : %d\n", iData);		// 5

	// 문제 2.
	char cArr[2] = { 1, 1 };

	short* pS = (short*)cArr;

	iData = *pS;		// 000000001 00000001 : 2바이트 정수로 봤을때 256 + 1 = 257

	printf("2번 문제 정답 : %d\n", iData);


	int a = 100;

	Test(&a);	// 포인터를 사용해 주소를 전달하면, 함수 내에서 해당 주소의 값을 직접 수정할 수 있음.

	printf("출력 : %d\n", a);
	
	// scanf_s("%d", &a);
	// 콘솔 창으로부터 입력된 값을 읽어와서
	// 내가 전달해준 주소로 접근을 해서 넣어주고 나니깐 scanf가 종료되고 돌아오면 a 변수가 바껴있음  


	return 0;
}