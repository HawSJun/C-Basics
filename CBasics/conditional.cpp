#define HUNGRY  0x1		// 16진수 표기를 통해 비트 상태를 표현할 때 가독성을 높일 수 있습니다.
#define THIRSTY 0x2
#define TIRED   0x4
#define FIRE	0x8

#define COLD	0x10     // 0123456789ABCDEF. 15넘어가면 0x10 (16) 0x20 (32) 0x40 (64) 0x80 (128) 
#define POSION  0x20	 // 0x100 (256) 0x200 (512) 0x400 (1024) 0x800 (2048) 
#define POSION  0x40	 // 0x100 (256) 0x200 (512) 0x400 (1024) 0x800 (2048) 
#define POSION  0x80	 // 0x1000 (4096) 0x2000 (8192) 0x4000 (16384) 0x8000 (32768) 
						 // 0x10000 (65536) 0x20000 (131072) 0x40000 (262144) 0x80000 (524288) 
#define POSION  0x100	 // 0x100000 (1048576) 0x200000 (2097152) 0x400000 (4194304) 0x800000 (8388608) 0x1000000 (16777216) 
#define POSION  0x200	 // 0x2000000 (33554432) 0x4000000 (67108864) 0x8000000 (134217728) 0x10000000 (268435456) 
#define POSION  0x400	 // 0x20000000 (536870912) 0x40000000 (1073741824) 0x80000000 (2147483648)
#define POSION  0x800

// define 사용으로 인한 이점
// 1. 코드의 가독성을 높일 수 있다.
// 2. 코드의 유지보수를 쉽게 할 수 있다.


int main()
{
	// 구문
	// if, else

	int data = 0;

	if (0 && 200)
	{
		data = 100;
	}

	if (data == 100)
	{
		// if 가 참인 경우 수행
	}
	else if (100)
	{

	}
	else
	{
		// if 가 거짓인 경우 수행
	}

	// switch case
	int iTest = 10;
	switch (iTest)
	{
	case 10:

		break;
	case 20:

		break;
	default:

		break;
	}

	int iTest = 10;
	if (iTest == 10)
	{

	}
	else if (iTest == 20)
	{

	}
	else
	{

	}

	int iTest = 20;
	switch (iTest)
	{
	case 10:
	case 20:
	case 30:

		break;
	default:

		break;
	}

	if (iTest == 10 || iTest == 20 || iTest == 30)
	{

	}
	else
	{

	}

	//  삼항 연산자
	// :? true : false

	iTest == 20 ? iTest = 100 : iTest = 200;

	if (iTest == 20)
	{
		iTest = 100;
	}
	else
	{
		iTest = 200;
	}

	// 비트 연산자
	// 쉬프트 <<, >>
	unsigned char byte = 1;
	byte <<= 3; // 2^n 배수

	byte >>= 1; // 2^n 나눈 몫

	// 비트 곱(&), 합(|), 배타적 논리합 XOR(^), 부정(~)
	// 비트 단위로 연산을 진행
	// & : 둘 다 1인 경우 1
	// | : 둘 중 하나라도 1인 경우 1
	// 배타저 논리합 XOR : 같으면 0, 다르면 1
	// 부정(~) : 1 -> 0, 0 -> 1

	unsigned int iStatus = HUNGRY;

	// 상태 추가
	iStatus |= HUNGRY; // 0000 0001
	iStatus |= THIRSTY; // 0000 0010
	// int iStatus = HUNGRY; // 맨위 #define 전처리기 구문으로 정의

	// 상태 확인
	if (iStatus & HUNGRY)
	{

	}

	// 특정 자리 비트 제거
	iStatus &= ~THIRSTY;



	return 0;
}