#include <stdio.h>

int main()
{
	int num = 10;
	switch (num) {
	case 10:
		printf("빙고");
		break;
	case 50:
		printf("작음");
		break;
	case 200:
		printf("큼");
		break;
	default:
		printf("이것도 저것도 아님");
		break;
	}
	return 0;
}

// switch(조건식) ~ case: