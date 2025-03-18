/*
	전역변수
*/

#include <stdio.h>

void incFunc(int* cnt);

//int cnt = 0;			// 전역변수는 초기화를 안해주면 자동으로 0으로 초기화

int main()
{
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		incFunc(&cnt);
		printf("cnt : %d\n", cnt);
	}
	cnt++;
	printf("cnt : %d\n", cnt);
	return 0;
}

// void incFunc(int cnt) // 지역변수는 매개변수가 필요
void incFunc(int* cnt)
{
	//cnt++;
	//printf("incFunc cnt : %d\n", cnt);
	*cnt = *cnt + 1;
}


// 지역변수의 값을 증가 시킬려면 포인터를 사용하면 된다.