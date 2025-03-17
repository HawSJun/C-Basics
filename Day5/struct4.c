#include <stdio.h>

typedef int int23mt;

struct human {
	char name[100];
	int age;
};

typedef struct myst {
	int a;
	int b;
}Mystruct;

int main()
{
	//struct human h = { "홍길동", 100 };
	//struct human h2 = { "강감찬", 100 };
	struct human h = { "홍길동", 110 },
		h2 = { "이순신", 110 },
		h3 = { "김유신", 200 };
	
	Mystruct m;

	int n1 = 100, n2 = 200, n3 = 300;

	return 0;
}