﻿#include <stdio.h>

int main(int argc, char ** argv)		// char* argv[] = char ** argv
{
	int i = 0;
	printf("전달갯수 : %d\n", argc);
	for (i = 0; i < argc; i++) {
		//printf("전달 값 : %s", i, argv[i]);

	}
	return 0;
}