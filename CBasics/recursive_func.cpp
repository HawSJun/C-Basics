#include <stdio.h>

// 함수 : 특정 작업을 수행하는 코드의 모음
// 함수를 사용하는 이유 : 코드 재사용
// Factorial

int Factorial(int _iNum)
{
	int iValue = 1;

	for (int j = 0; j < _iNum - 1; ++j)
	{
		iValue *= (j + 2);

	}
	Factorial(10);  // 스택오버플로우 : 재귀함수가 무한히 호출되어 스택이 가득차는 현상

	return iValue;
}

// 레지스터는 함수의 매개변수 전달, 임시 값 저장, 반환값 전달 등 중요한 역할을 합니다.
// 재귀함수 : 함수가 자기 자신을 호출하는 함수
// 재귀함수는 가독성, 구현이 용이
// 성능면에서는 비효율적
// 문제해결을 스택 메모리 함수를 호출 할 때마다 스택에 쌓아가면서 각각에 스택에 남아있는
// 데이터들을 역으로 되돌아 나오면서 재활용하는 식
// 방식 자체가 스택에 남아있는 즉, 함수가 호툴될 때 발생하는 스택을 마치 변수처럼 활용하는거라
// 하나의 함수에서 변수를 여러개 선언해서 해결할거를 여러번의 함수를 호출해서 각각의 스택에 남아있는
// 값들을 현재 지역변수들 처럼 마치 활용하는 개념
// 함수 호출 비용과 해제 비용이 발생

// 재귀함수 팩토리얼
int Factorial_Re(int _iNum)
{
	if (_iNum == 1)
	{
		return 1;
	}
	return _iNum * Factorial_Re(_iNum - 1);
}

// 피보나치 수열
// 1 1 2 3 5 8 13 21 34 55...
int Fibonacci(int _iNum)
{
	if (1 == _iNum || 2 == _iNum)
	{
		return 1;
	}

	int iPrev1 = 1;
	int iPrev2 = 1;
	int iValue = 0;

	for (int i = 0; i < _iNum; ++i)
	{
		iValue = iPrev1 + iPrev2;
		iPrev1 = iPrev2;
		iPrev2 = iValue;
	}
}

// 피보나치 수열 재귀함수
int Fibonacci_Re(int _iNum)
{
	if (1 == _iNum || 2 == _iNum)
	{
		return 1;
	}

	return Fibonacci_Re(_iNum - 1) + Fibonacci_Re(_iNum - 2);
}


int main()
{
	int iValue = Factorial(4);
	iValue = Factorial(10);

	iValue = Factorial_Re(10);

	iValue = Fibonacci(7);
	iValue = Fibonacci_Re(8);

	return 0;
}