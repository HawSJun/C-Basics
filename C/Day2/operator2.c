#include <stdio.h>

int main()
{

	int n = 20, n2 = 20;
	int res;

	res = (n > n2) ? n : n2;
	printf("res : %d\n", res);

	res = n++;
	printf("res : %d, n : %d\n", res, n);
	res = ++n2;
	printf("res : %d, n2 : %d\n", res, n2);


	return 0;
}