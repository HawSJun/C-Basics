#include <stdio.h>

int main()
{
	int ary[5] = { 1, 2, 3, 4, 5 };		// 정수형 배열 선언(20바이트)
	int ary2[] = {6, 7, 8, 9, 10};		// 배열의 크기를 생략할 수 있음
	
	int ary3[5] = { 1, 2, 3 };			// 나머지는 0으로 초기화됨
	// int ary4[];				      
	
	for (int i = 0; i < 5; i++)
	{
		printf("ary[%d] : %d\t", i, ary[i]);
		printf("ary2[%d] : %d\n", i, ary2[i]);
	}

	ary[2] = 100;
	printf("ary[2] : %d\n", ary[2]);

	int ary4[] = { 1, 2, 3 };
	printf("배열의 크기 : %d\n", sizeof(ary4));
	printf("배열 방 한개의 크기 : %d\n", sizeof(ary4[0]));
	printf("배열 방의 갯수 : %d\n", sizeof(ary4) / sizeof(ary4[0]));
	printf("배열 이름 : %p\n", ary4);									// 배열의 시작 주소
	printf("배열 첫번째 방 주소 : %p\n", &ary4[0]);
	printf("배열 두번째 방 주소 : %p\n", ary4 + 1);
	printf("배열 두번째 방 주소 : %p\n", &ary4[1]);


	int ary5[5] = { 0, };				// 배열의 모든 방을 0으로 초기화
	int size = sizeof(ary5) / sizeof(ary5[0]);

	for (int i = 0; i < size; i++)
	{
		printf("점수 : ");
		scanf_s("%d", &ary5[i], sizeof(ary5[i]));
	}
	for (int i = 0; i < size; i++)
	{
		printf("int ary5[%d] : %d\t", i, ary5[i]);
	}
	// printf("int ary[5] : {%d, %d, %d, %d, %d}\n", ary5[0], ary5[1], ary5[2], ary5[3], ary5[4]);
	return 0;
}

// 배열의 이름 : 배열의 시작 주소
// 배열의 장점 : 동일한 자료형을 연속적으로 사용할 수 있음
// 배열의 단점 : 크기가 정해져 있음

// 배열의 크기를 생략하면 컴파일러가 자동으로 배열의 크기를 계산해줌
// 배열의 크기를 생략하면 초기화 값의 개수만큼 배열의 크기가 정해짐