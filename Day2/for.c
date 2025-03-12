#include <stdio.h>

int main()
{	
	/* for(초기식; 조건식; 중감식) { } */
	for (int i = 0; i < 10; i++) {
		printf("i : %d\n", i);
	}

	int sum = 0;
	for (int num = 1; num < 11; num++) {
		sum += num;
	}
	printf("1 ~ 10까지 합은 %d 입니다.", sum);
	return 0;
}