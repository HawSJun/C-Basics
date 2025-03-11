// 전역변수
int global = 0;

int ADD(int left, int right)
{
	return left + right;
}


// 함수
int main()
{
	// 변수
	// 1. 지역변수. 함수 내에서 선언된 변수(main 함수 내에서 선언된 변수)
	// 2. 전역변수. 함수 밖에서 선언된 변수
	// 3. 정적변수
	// 4. 외부변수


	// 지역변수
	int iName = 0;

	// 괄호 안에 선언된 변수(함수, 지역)
	{
		// 변수명 규칙
		int iName = 100; // 우선순위
		iName;
		{
			{

			}
		}
	}

	iName = 100;

	// 함수
	int data = 0;
	data = ADD(10, 20);


	return 0;
}