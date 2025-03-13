
#include <stdio.h>

void printAry(int*, int);
void inputAry(int*, int);

int main()
{
    int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    //int ary2[] = { 1, 2, 3 };

    int size = sizeof(ary) / sizeof(ary[0]);
    // int size2 = sizeof(ary2) / sizeof(ary2[0]);


    inputAry(ary, size);

    printAry(ary, size);
    // printAry(ary2, size2);

    return 0;
}

void inputAry(int* p, int _size)
{
    printf("배열 %d개 입력\n", _size);
    for (int i = 0; i < _size; i++)
    {
		printf("ary[%d] : ", i);
        scanf_s("%d", &p[i]);
    }
}

void printAry(int* p, int _size)
{
    for (int i = 0; i < _size; i++)
    {
        printf("ary[%d] : %d\n", i, p[i]);
    }
}
