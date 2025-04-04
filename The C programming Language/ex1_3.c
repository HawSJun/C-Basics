﻿/*
	온도 변환표의 위에 항목의 제목이 붙도록 프로그램을 바꿔라
	섭씨(Celsius)와 화씨(Fahrenheit)
*/


#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Fahrenheit-Celsius table\n");
	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}
	return 0;
}

