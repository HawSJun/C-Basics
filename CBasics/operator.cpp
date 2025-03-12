int main()
{
	// 연산자

	// 대입 연산자, =

	// 산술	연산자
	// +, - ,*, /, %(모듈러스, 나머지 연산자, 피연산자가 모두 정수인 경우 사용)
	int data = 10 + 10;
	// data = data + 10;
	data += 20; // 일반적인 덧셈 연산자는 본인 자신이 증가하려면 data = data + 20; 이렇게 해야함

	data = 10 % 3; // 10. % 3. 실수는 나머지 연산자 사용 불가능

	data = 10. / 3.; // double에서 int 형변환을 통해 데이터가 손실될 수 있음

	data = (int)(10. / 3.);

	// 실수를 상수로 표현할 경우 소수점 뒤에 f 를 붙이면 float 자료형으로,
	// f 를 붙이지 않으면 double 자료형으로 인식한다.
	// 0.1f, 0.1; // float, double

	// 증감 연산자
	// ++, --
	// 한 단계 증가 또는 감소

	++data; // 전위
	data++; // 후위
	// 후위 연산자로 사용하는 경우, 연산자 우선순위가 가장 나중으로 밀린다.

	int a = 0;

	data = 0;

	a = 10;
	data = ++a; // data = 11, a = 11
	data = a++; // data = 10, a = 11
	//  전위건 후위건 간에 변수 공간 자체의 값이 실제로 증가함. 

	--data;
	data--;

	// 논리 연산자
	// !(역), &&(곱), ||(합)
	// 참(Ture), 거짓(False)
	// 참   : 0 이외의 모든 값, 주로 1
	// 거짓 : 0
	
	int truefalse = false;

	bool IsTrue = 100; // bool : true, false

	IsTrue = true;
	IsTrue = !IsTrue;

	int iTrue = 0;
	iTrue = !iTrue;

	iTrue = 100 && 200; // 1
	iTrue = 0 && 200; // 0

	iTrue = 0 || 0; // 0

	// 비교 연산자
	// ==, !=, <, <=, >, >=
	// 참, 거짓


	return 0;
}