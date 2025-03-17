/*
	void pointer - 비어있는 포인터
*/
#include <stdio.h>

int main()
{
	int n = 10;
	double db = 3.14;

	//int pn = &n;
	//double* pdb = &db;

	void* p;

	p = &n;		// (int*)p = &n; 안됨!
	printf("*p : %d\n", *(int*)p);		// *p 에러, 명시적으로 *(int*)p

	p = &db;
	printf("*p : %.1f\n", *(double*)p);

	return 0;
}