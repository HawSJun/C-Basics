#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 10; i++) {
		if (i % 2 == 0) continue;		// 건너뛴다
		// if (i == 7) break;				// 반복문을 빠져나온다
		if (i >= 7) break;
		printf("%d\n", i);
	}


	for (int i = 1; i < 10; i++) {	
		printf("%d단\n", i);		// 단
		for (int j = 1; j < 10; j++) {		// 곱한는 것
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
	return 0;
}