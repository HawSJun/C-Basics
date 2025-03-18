#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mbstring.h>
#include <wchar.h>
#include <assert.h>


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
void StrCat(wchar_t* _pDest, unsigned int _iBufferSize, const wchar_t* _pSrc)
{
	// 예외처리
	// 이어붙인 최종 문자열 길이가, 목적지 저장 공간을 넘어서려는 경우
	int iDestLen = GetLength(_pDest);
	int iSrcLen = GetLength(_pSrc);

	if (_iBufferSize < iDestLen + iSrcLen + 1) // Null 문자 공간까지 계산
	{
		assert(nullptr);
	}
	
	// 문자열 이어 붙이기
	// 1. Dest 문자열의 끝을 확인(문자열이 이어 붙을 시작 위치)
	iDestLen; // Dest 문자열의 끝 인덱스

	// 2. 반복적으로 Src 문자열을 Dest 끝 위치에 복사하기
	// 3. Src 문자열의 끝을 만나면 반복문 종료

	for (int i = 0; i < iSrcLen + 1; ++i)
	{
		_pDest[iDestLen + i] = _pSrc[i];
	}
}
int StrCmp(const wchar_t* _left, const wchar_t* _right)
{
	int leftLen = GetLength(_left);
	int rightLen = GetLength(_right);

	int iLoop = leftLen;
	int iReturn = 0;
	
	if (leftLen < rightLen)
	{
		iLoop = leftLen;
		iReturn = -1;
	}
	else if(leftLen > rightLen)
	{
		iLoop = rightLen;
		iReturn = 1;
	}

	for (int i = 0; i < iLoop; ++i)
	{
		if (_left[i] < _right[i])
		{
			return -1;
		}
		else if(_left[i] > _right[i])
		{
			return 1;
		}
	}
	return iReturn;
}

int main()
{
	wchar_t szName[10] = L"Raimond";		// 문자열은 읽기전용 메모리에 있음.(데이터 초기화영역) 

	//int iLen = wcslen(szName);
	
	// 문자열 길이 
	int iLen = GetLength(szName);

	/*char sName[10] = "Raimond";
	int clen = strlen(sName);*/

	// 문자열 이어 붙이기
	wchar_t szString[10] = L"abc";
	StrCat(szString, 10, L"def");
	
	// wcscat_s(szString, 100, L"def");
	// wcscat_s(szString, 100, L"ghi");

	int iRet = wcscmp(L"abc", L"abc");	// 문자열이 완벽하게 일치하면 0,  
										// 0을 기준으로 왼쪽이 -1, 오른쪽 1

	iRet = StrCmp(L"abcdef", L"abc");

	return 0;
}

// 과제
// wcscmp 함수 직접 구현해 보기
// 문자열이 완벽하게 일치하면 0
// 왼쪽이 우선순위 높으면 즉 값이 낮으면 -1
// 오른쪽은 1
// 길이가 더 짧은면 우선순위