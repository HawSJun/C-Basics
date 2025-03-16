/*
	ex1_4에서 화씨온도가 0일때부터 300일 때까지 계산했다.
	300도에서 0도까지를 계산하는 프로그램을 작성해봐라. 즉, 온도 변환표를 역순으로 만들어라
*/

#include <stdio.h>

int main()
{
	int fahr;

	for (fahr = 300; fahr >= 0; fahr -= 20) {
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
	}
	return 0;
}

#include <stdio.h>

int main()
{
	int fahr;
	int lower = 0;
	int step = 20;

	for (fahr = 300; fahr >= lower; fahr -= step) {
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
	}
	return 0;
}


#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
	int fahr;

	for (fahr = LOWER; fahr >= UPPER; fahr -= STEP) {
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
	}
	return 0;
}