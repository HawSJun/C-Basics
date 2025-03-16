/*
	섭씨(c)를 화씨(f)로 바꾸는 프로그램 작성
	fahrenheit = (celsius * 9.0 / 5.0) + 32;
*/

#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf("Celsius   Fahr\n");

	while (celsius <= upper) {
		fahr = (celsius * 9.0 / 5.0) + 32.0;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius += step;
	}

	return 0;
}