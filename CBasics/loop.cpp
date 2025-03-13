#include <stdio.h>		// 표준 입출력 헤더 파일

int main()
{
	// 반복문
	for (int i = 0; i < 4; ++i) // 0, 1, 2, 3
	{
		printf("Output Test\n");

		continue;
		break;
	}

	for (int i = 0; i < 4; ++i) // 0, 1, 2, 3
	{
		if (i % 2 == 1)
		{
			continue;
		}

		printf("Output Test\n");
	}

	int i = 0;

	while (i < 2)
	{
		printf("while Output\n");
		++i;
	}

	return 0;
}