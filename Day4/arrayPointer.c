/*
	배열 포인터 : 포인터
*/

#include <stdio.h>

int main()
{
	/*int a = 10;
	int* pa = &a;

	int ary[] = { 1,2,3 };
	int(* pary) = ary;	*/		// 배열을 가리키는 포인터 (* pary)

	int ary[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };		// 2차원 배열
	//int** pary = ary;
	
	int (*pary)[4];
	pary = ary;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf(" %d", pary[i][j]);
		}
		printf("\n");
	}


	return 0;
}

//int(*pary)[4];				// int형 변수 4개위 배열을 가리키는 배열 포인터
//
//int* pary[4];				// 포인터 배열
