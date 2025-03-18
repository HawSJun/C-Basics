#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mbstring.h>
#include <wchar.h>

unsigned int GetLength(const wchar_t* _pStr)
{
	int i = 0;	// 문자 갯수 체크 용도

	while ('\0' != _pStr[i])
	{	
		//wchar_t c = *(_pStr + i);		// _pStr[i]

		/*if ('\0' == c)
		{
			break;
		}*/

		++i;
	}
	return i;
}

int main()
{
	wchar_t szName[10] = L"Raimond";		// 문자열은 읽기전용 메모리에 있음.(데이터 초기화영역) 

	//int iLen = wcslen(szName);
	
	// 문자열 길이 
	int iLen = GetLength(szName);
	printf("%d", iLen);

	/*char sName[10] = "Raimond";
	int clen = strlen(sName);*/

	// 문자열 이어 붙이기
	wcscat_s()
	return 0;
}