# C-Cpp-Fundamentals
C와 C++ 기초

## 프로그래밍 언어 기초 다지기 전에....

### 컴퓨터 CS 

---
### C언어 동작 과정(원리)

- 전처리 -> 컴파일 -> 어셈블 -> 링크, 이 네가지 과정을 **Build** 라고 함

    ```
    .c --(전처리)--> .i --(컴파일)--> .s --(어셈블)--> .o --(링크)--> .exe
    ```

<img src="./image/c004.png" width="600">

- 전처리 단계(Preprocess)
    - 전처리기를 통해서 전처리문자(#include 등)들이 전처리 과정을 통해 해당 파일의 코드로 변환 **(.i)**

- 컴파일 과정(Compile)
    - 컴파일러를 통해 컴파일이 되면 고급언어인 코드들이 `저급언어`인 어셈블리어로 변환 **(.s)**

- 어셈블 과정(Assemle)
    - 어셈블러를 통해서 컴퓨터가 이해할 수 있는 `기계어`로 변환 되면서 파일이 생성 **(.o 또는 .obj)**

- 링크 과정(Link)
    - 여러 개의 오브젝트 파일과 라이브러리를 결합하여 하나의 `실행파일(.exe)`을 생성하는 과정
---
### 객체지향(Object-Oriented Programming) VS 절차지향(Procedural-Oriented Programming)

<img src="./image/c008.png" width="700">

- 객체지향 사용 분야
    - 대규모 프로젝트 (코드의 재사용성과 유지보수가 중요할 때)
    - 협업이 필요한 프로젝트 (클래스 단위로 역할을 나눌 수 있음)
    - GUI 애플리케이션, 모바일 앱, 게임 개발 등

- 절차지향 사용 분야
    - 소규모 프로젝트 (빠르게 구현이 필요할 때)
    - OS, 임베디드 시스템 개발 (하드웨어와 밀접한 관계)
    - 연산 속도가 중요한 프로그램 (C 언어 기반으로 최적화 가능)
---
### 자료형(Data Type)

- [자료형](./CBasics/data_type.cpp)

- 변수를 선언할 때 어떠한 자료의 형태를 나태내는지 설명하는 것
- 변수를 선언할 때 사용, 변수의 크기와 형태를 결정

<img src="./image/c007.png" width="600">

- 비트와 바이트

    ```
    1 byte = 8bits
    ```
    - 비트(bit): 정보의 최소 단위로, 0 또는 1을 표현
    - 바이트(byte): 8비트로 구성된 정보 단위로, 하나의 문자나 작은 범위의 정수를 표현

    <img src= "./image/c001.png" width="600">

    - MSB(Most Significant Bit)
        - 왼쪽 끝에 위치한 최상위 비트, 부호 비트로 양수(0)/음수(1) 

    - LSB(Least Significant Bit)
        - 오른쪽 끝에 위치한 비트

- **정수형 자료형**

    - unsigned (부호 없는)
        - unsigned는 양수만 표현하기 때문에 `0 ~ 255` 표현

        ```c
        unsigned char c = 0;
        c = 255; 
        c = -1;    // -1은 2의 보수로 인해 255로 표현
        ```

        - 오버플로우(Overflow)
        ```C / C++
        unsigned cahr c = 0;
        c = 256;

        만약, c = 256 이면,
        char는 1바이트의 크기 0 ~ 255 사이의 값만 표현하기 때문에 `1 0000 0000` 9bit가 되므로 0으로 표현
        ```
        
        <img src= "./image/c002.png" width="600">

    - signed (부호 있는)
        - 1바이트 양수, 음수 둘다 표현
        - -128 ~ 0 ~ 127, 음수, 양수를 다 표한하기 떄문에 최상위 비트를 부호비트로 사용

        ```c
        char c1 = 0;
        c1 = 255        // 255를 넣었는데 -1로 표현됨
        c1 = -1; 
        ```

    - 2의 보수
        - 양수는 이진수 그대로 표현
        - 음수는 해당 양수의 이진수에서 모든 비트를 반전시키고, 그 결과에 1을 더한 값이 됨
            ```
            1101 0101 2의 보수 -> 비트 반전 -> 0010 1010 -> 마지막 비트에 1을 더함 - > 0010 1011
            ```

- **실수형 자료형**

    - 정수와 실수는 메모리를 다루는 방식 자체가 다르다.(표현 방식이 다르다.)
    - 특정 비트값이 정확하게 정해져있는 정수와는 달리 실수 표현방식은 `정밀도`에 의존한다
        - 여기서 정밀도란?
            - 컴퓨터는 실수를 유한한 비트 수로 표현하기 때문에, 모든 실수를 정확하게 저장할 수 없다. 
            따라서, 실수를 표현할 때 근사값으로 저장되며, 이 근사값이 실제 값과 얼마나 일치하는지의 정도를 정밀도라고 함.

    - 부동 소수점
        - 소수점의 위치가 고정되지 않고 부동하는 방식

        <img src="./image/c006.png" width="800">

        - 부호 비트 (1bit) : 처음 1bit는 숫자가 양수인지 음수인지를 나타냄. 0은 양수, 1은 음수를 나타낸다.
        - 지수 부분(8bit) : 실수의 유효 숫자를 나타내며, 소수점 이하의 값. 부동 소수점에서는 첫 번째 비트가 항상 1로 고정되고, 이를 숨겨진 비트라고 부른다.
        - 가수 부분(23bit)  : 가수에 소수점의 위치를 지정하는 역할. 이 값은 실수의 크기를 조정하고, 부동 소수점에서 숫자의 범위를 확장하는 데 사용.

        - 10진수 13.25를 부동 소수점으로 변환
            ```
            부호 비트 : 0 (양수)
            지수 부분 : 13 = 0000 1101
            가수 부분 : 0.25 = 01         // 2^-1(0.5), 2^-2(0.25), 2^-3(0.0125)....
            13.25를 부동소수점 변환 : 1101.01
            부동소수점 정규화 : 1.10101 × 2^3 (가수 x 밑수^지수)
            ```
        - 정규화 : 가수의 첫번째 자리가 밑수보다 작은 한자리 자연수로 바꾸는 것을 의미
---
### 연산자

- [연산자1](./CBasics/operator.cpp) / [연산자2](./Day2/operator.c)

<img src="/image/c005.png" width="900">

- 산술 연산자

    - 종류 : +, -, *, /, %

    ```c
    int data = 10 + 10;     // data에 20 저장
    data = data = 20;       // data += 20;  같은 의미

    data = 10 % 3;          // % (모듈러스, 나머지 연산자) : 피연산자가 모두 정수인 경우 사용

    실수를 상수로 표현할 경우 소수점 뒤에 f 를 붙이면 float 자료형으로, 
    f 를 붙이지 않으면 double 자료형으로 인식
    (0.1f, 0.1; // float, double)
    ``` 

- 증감 연산자

    - 종류 : ++, --

    ```c
    ++data;     // 전위 증감
    data++;     // 후위 증감

    전위 연산자는 우선적으로 수행되며, 후위 연산자는 다른 연산이 먼저 수행된 후에 실행된다.

    data = 0;

	a = 10;
	data = ++a;     // data = 11, a = 11
	data = a++;     // data = 10, a = 11

	전위 증감과 후위 증감 상관없이 변수 공간 자체의 값이 실제로 증가함. 
    ```

- 논리 연산자

    - 종류 : !(NOT), &&(AND), ||(합)
        - ||(OR) : 두 피연산자 중 하나라도 참이면 참을 반환. 둘 다 거짓일 때만 거짓을 반환

    - bool 자료형 : 참과 거짓을 표현하는 논리 자료형, 1바이트 크기를 가지며, 0과 1만을 저장할 수 있습니다.

    ```c
    int truefalse = false;
	bool IsTrue = 100;          // bool : true, false

    참(Ture), 거짓(False)
	참   : 0 이외의 모든 값, 주로 1
	거짓 : 0
    ```

- 비교 연산자
    - 종류 : =, !=, <, <=, >, >=

- 삼항 연산자
    
    - if - else 문으로 간단하게 표현 가능

    ```c
    조건식 ? 참일 때 값 : 거짓일 때 값;

    iTest == 20 ? iTest = 100 : iTest = 200;
    ```

- 비트 연산자 : [연산자1](./CBasics/conditional.cpp) / [연산자2](./Day2/shift.c)
    - 종류 : 쉬프트 연산자 (<<, >>), 비트 논리 연산자 ( &(AND), |(OR), ^(XOR), ~(NOT) )
        - ^(XOR) : 같으면 0, 다르면 1

    ```c
    unsigned char byte = 1;

	byte <<= 3; // 2^n 배수

	byte >>= 1; // 2^n 나눈 몫

    좌측으로 이동 시 맨 오른쪽에 있는 비트는 0으로 채워짐

	우측으로 이동하면 맨 왼쪽에 있는 비트는 부호에 따라 비트가 달라짐
    (음수일 경우 1로 채워지고, 양수일 경우 0으로 채워짐)
    ```
---
### 조건문

- if / else : [조건문](./CBasics/if_else.cpp)
    
    ```c
    if ( 조건식 )
    {
        // if 가 참인 경우 수행
    }
    else if ( 조건식 )
    {
        // if 가 거짓이고 else if가 참이면 수행
    }
    else 
    {
        // if, else if 가 다 거짓이면 실행
    }
    ```

- switch-case : [조건문](./CBasics/switch_case.cpp)

    - 정수형 변수만 사용 가능 (float 불가능)
    - 비교 연산 (>, <, &&, ||) 사용 불가 
    - switch-case 문을 if-else 문으로 변경 가능
 
    ```c
    int iTest = 20;

    switch (변수 : 20)
    {
    case 값(10):
        // 값이 10일 경우 수행
        break;
    case 값(20):
        // 값이 20일 경우 실행
        break;
    default:
        // 위의 모든 case가 실행되지 않을 때 실행
        break;
    }
    ```
---
### 전처리기 #define

- [전처리기](./CBasics/conditional.cpp)

- 전처리기 지시문으로, 특정 기호나 값을 매크로로 정의하는 역할
- 이를 통해 코드 내에서 특정한 값을 일괄적으로 치환하거나, 간단한 매크로 함수를 정의할 수 있습니다.

    ```c
    #define HUNGRY 1

    unsigned int iStatus = HUNGRY;       // iStatus의 값은 1이다.
    ```

-  define 사용으로 인한 이점
    - 코드의 가독성을 높일 수 있다.
    - 코드의 유지보수를 쉽게 할 수 있다.
        - 일일이 수정할 필요 없이 #define에서만 값을 변경하면 일괄 적용
---
### 변수(Variable)

- 값을 저장할 수 있는 메모리 공간, 프로그램의 데이터를 저장하는 기본 단위!

    - **지역 변수** : [지역변수/전역변수](./CBasics/variable.cpp)

        - 함수 내부에 선언된 변수를 의미. 해당 블록 내부에서만 유효하며, 블록이 끝나면 메모리에서 해제

        - 동일한 블록 내에서 같은 이름의 변수를 중복 선언하면 `재정의 오류` 발생!!

            ```c
            int main()
            {
                int iName = 0;  // iName 선언 (main 함수의 지역 변수)

                {
                    int iName = 100;
                    iName = 300;
                }

                int iName = 200;    // 동일한 범위(main 함수)에서 iName 다시 선언 (오류 발생)

                iName = 200;  // 기존 변수를 재사용 (변수 재선언X, 값 변경만)

                return 0;
            }
            ```

    - **전역 변수** : [지역변수/전역변수](./CBasics/variable.cpp)

        - 함수 밖에서 선언된 변수. 프로그램이 시작될 때 생성되며, 프로그램이 종료될 때까지 메모리에 존재
        - 프로그램 내 어디서든 접근 가능

            ```c
            int g_i = 0;    // 전역변수

            void Test()
            {
                ++g_i;
            }

            int main()
            {
                int a = 0;
                g_i = 0;
            }
            ```

    - **정적 변수** : [정적변수](./CBasics/static_extern_var.cpp) / [헤더파일](./CBasics/common.h)/ [참조파일](./CBasics/func.cpp)

        - static 키워드를 사용
        - 정벽변수는 함수 안에서 사용했을 때, 그 함수 안에서만 접근가능하지만, 함수의 호출과 종료에 상관없이 프로그램 실행내내 유지 시킬 수 있는 Data 영역에 저장된 변수를 만들고 싶을 때 정적변수로 선언

        - `main.cpp`에 선언된 정적변수

            ```c
            #include "common.h"

            static int g_iStatic = 0;   // 정적변수, 각자 파일 전용으로 만들어짐

            void Test()
            {
                static int i = 0;   // 함수 안에 선언된 정적변수, Test 함수 안에서만 사용 가능.
                                    // c++ 문법 기준 static 변수 선언한 초기화 구문은 최초 한번만 실행
            }

            int main()
            {
                g_iStatic;      // main.cpp 정적변수
                //i = 50;         // Test 함수 내의 static 변수 i는 main에서 지칭할 수 없다.
                return 0;
            }
            ```

        - `func.cpp`에 선연된 정적변수

            ```c
             #include "common.h"

            static int g_iStatic = 0;   // main.cpp에 선언된 정적변수와 다름!!

            int Add(int a, int b)
            {
                g_iStatic; 
                return 0;
            }
            ```

        - `common.h`에 정적변수를 선언 - main.cpp와 func.cpp에 참조

            ```c
            // 모든 파일이 공통적으로 접근할 수 있는 헤더 파일
            // main.cpp와 func.cpp에 참조를 시켜도 정적변수는 각 파일 전용으로 사용!

            static int g_iStatic = 0;
            ```

    - **외부 변수** : [외부변수](./CBasics/static_extern_var.cpp) / [헤더파일](./CBasics/common.h)/ [참조파일](./CBasics/func.cpp) / [Extern선언](./CBasics/extern_test.cpp)

        - extern 키워드 사용
        - 전역적(Global)으로 사용 가능: 한 파일에서 정의된 변수를 다른 파일에서도 사용할 수 있음.
        - 메모리 할당: 정의된 외부 변수는 데이터 영역에 위치하며, 프로그램 실행 중 유지됨.
        - 단 한 번만 정의되어야 함: 같은 변수의 정의가 여러 곳에 존재하면 컴파일 에러 발생

        - `common.h`
            ```c
            //extern int g_iExtern = 0;   // extern은 헤더에 배치할 경우 초기화를 넣으면 안됨!!
            extern int g_iExtern;   // g_iExtern 변수가 있다라고 알려주는 역할 함!
                                    // 즉, 변수가 외부 파일에서 정의되었음을 명시하는 역할
            ```

        - `test.cpp`
            ```c
            // common.h 파일에 g_iExtern 변수가 있다라고 알려주고 선언은 어떤 파일에 해도 상관 없다!
             extern int g_iExtern = 0;
            ```
---
#### Lvalue 와 Rvalue

- Lvalue : 좌변에 올 수 있는 값, 메모리 주소를 가지며 수정이 가능한 값

    - 메모리 주소(& 연산자로 확인 가능)를 가짐
    - 변할 수 있는 값 (예: int x = 10; x = 20; → x 값이 변할 수 있음)
    - 참조형(&) 변수로 받을 수 있음

        ```c
        int x = 10; // x는 Lvalue
        x = 20; // x는 Lvalue이므로 좌변에 올 수 있음

        int& ref = x; // Lvalue 참조는 Lvalue에만 할당 가능
        ```
            
- Rvalue : 우변에만 올 수 있는 값, 보통 임시적인 값을 의미. 
           즉, 특정한 메모리에 저장되지 않거나, 한 번 생성된 후 더 이상 변경되지 않는 값

    - 식의 우변(Right)에 올 수 있음 (x = 10 + 20; 에서 10 + 20 부분)
    - 주소가 없음 (일반적으로)
    - 수정할 수 없음
    - C++11부터 Rvalue 참조 (int&&) : 임시 객체(Rvalue)를 직접 참조할 수 있도록 하는 기능

        ```c
        int a = 10 + 20; // 10 + 20은 Rvalue

        int& ref = 10; // 오류! Lvalue 참조는 Rvalue를 받을 수 없음

        int&& rref = 10; // Rvalue 참조는 Rvalue를 받을 수 있음

        int&& rref2 = x; // 오류! Lvalue는 Rvalue 참조(int&&)에 할당할 수 없음

        ```

    - `리터럴(Literal)` : 값 자체를 의미하는 상수

        ```c
        int x = 10; // 10은 Rvalue

        int& ref = 10; // 오류! Lvalue 참조는 Rvalue를 받을 수 없음

        const int& ref = 10; // const Lvalue 참조는 Rvalue를 받을 수 있음

        const char* str = "Hello"; // "Hello"는 문자열 리터럴인데, 문자열 리터럴은 예외적으로 Lvalue
        ```
---
### 반복문

- [반복문](./CBasics/loop.cpp)

- for 문
    - 반복 횟수가 정해진 경우

    ```c
    for (/* 반복자 초기화 */; /* 반복자 조건 체크 */; /* 반복자 변경(증가/감소) */) {
    // 반복 실행할 코드
    }
    ```

- while 문
    - 조건이 참인 동안 반복

    ```c
    while (조건) {
    // 반복 실행할 코드
    }
    ```

- do-while 문
    - 최초 한번 실행 후 조건에 따라 반복

    ```c
    do {
    // 반복 실행할 코드
    } while (조건);
    ```
- 반복문 제어하는 데 사용되는 키워드

    - `break` : 현재 실행 중인 반복문을 즉시 종료하고 반복문 바깥으로 이동
    - `continue` : 현재 반복을 건너뛰고 다음 반복을 진행
---
### 함수(Function)

- [함수](./CBasics/function.cpp) / [함수구현](./C/Day2/func3.c)

- 특정 작업을 수행하는 코드 블록으로, 필요할 때 호출하여 사용

- 함수의 특징
    - 코드 재사용 가능
    - 프로그램을 모듈화하여 가독성을 높임
    - 디버깅이 용이
    - 유지보수 용이

- 함수 기본 구조

    - `함수 선언` : 함수가 사용될 것임을 미리 알리는 역할

        ```c
        반환형 함수이름(매개변수 리스트);   // 매개변수 : 함수가 외부에서 값을 전달받는 변수

        int add(int a, int b);
        ```

    - `main 함수`

        ```c
        int main(void) {
        실행할 코드;
        return 0;
        }
        
        int main() {
        int result = add(3, 5);
        printf("3 + 5 = %d\n", result);
        return 0;
        }
        ```

    - `함수 정의` : 함수의 실제 동작을 구현하는 부분

        ```c
        반환형 함수이름(매개변수 리스트) {
        실행할 코드;
        return 반환값;  // 반환형이 void일 경우 return 생략 가능
        }

        int add(int a, int b) {
        return a + b;
        }
        ```
#### 재귀함수(Recursive Function)

- [재귀함수](./CBasics/recursive_func.cpp)

- 함수가 자기 자신을 호출하는 함수

- 재귀함수의 특징
    - 가독성, 구현이 용이
    - 성능면에서는 비효율적
    - 함수 호출 비용과 해제 비용이 발생

- 스택 오버플로우(Stack Overflow)

    ```c
    int Factorial(int _iNum)
    {
        int iValue = 1;

        for (int j = 0; j < _iNum - 1; ++j)
        {
            iValue *= (j + 2);

        }
        Factorial(10);      // 스택오버플로우 : 재귀함수가 무한히 호출되어 스택이 가득차는 현상
        
	    return iValue;
        // return iValue;는 현재 현재 함수 실행이 끝나면 실행되지만, 그 전에 Factorial(10);이 계속 호출되므로 함수가 끝나지 않는다.
    }
    ```
---
### 배열(Array)

- [배열1](./CBasics/array.cpp) / [배열2](./C/Day3/array.c)

- 동일한 데이터 타입의 값들을 연속된 메모리 공간에 저장하는 자료 구조
- 배열의 이름은 배열의 시작 주소
---
### 구조체(Structure)
---
### 분할구현
---
### 포인터(Pointer)

- [포인터](./CBasics/pointer.cpp)

- 주소를 저장하는 변수
- 주소 연산(&) : 변수의 주소를 가져옴.
- 역참조 연산(*) : 포인터가 가리키는 주소의 값을 가져오거나 변경함.

    ```c
    int main() {
        int a = 10;     // 정수형 변수 선언
        int *ptr;       // 정수형 포인터 변수 선언
        ptr = &a;       // 변수 a의 주소를 ptr에 저장

        // a의 값 출력, 즉, 포인터를 통한 간접 참조, *ptr은 ptr이 가리키는 주소의 값 *ptr == a 
        printf("a의 값: %d\n", *ptr);
        printf("a의 주소: %p\n", ptr);  // a의 주소 출력
        printf("ptr의 주소: %p\n", &ptr);  // ptr 변수 자체의 주소 출력

        return 0;
    }
    ```
    
- 포인터 변수에서 주소의 증감은 자료형 사이즈를 단위로 함!

    ```c
    int i = 0;
    pInt = &i;

    pInt += 1;		
    // pInt는 int* 변수이기 때문에, 가리키는 곳을 int로 해석한다.
    // 주소 값을 1 증가한다는 의미는 다음 int 위치로 접근하기 위해서 sizeof(int) 단위로 증가하게 된다.
    ```

- 주소의 단위(byte), 주소를 표현하는 방식(정수)!!!!!
- float을 하면 주소를 표현하는 방식이 실수 표현방식의 부동소수점 방식으로 32비트가 채워져있음. 그래서 int 관점에서 해석을 하게 되면 큰 숫자가 됨
- `포인터 변수의 크기`
    - 포인터 변수의 크기는 운영체제와 컴파일러의 아키텍처(주소 공간 크기)에 의해 결정된다.
    - 32비트 운영체제 기반 : 4바이트(32비트)
    - 64비트 운영체제 기반 : 8바이트(64비트)

#### 포인터와 배열

- [포인터/배열](./CBasics/pointerArray.cpp) / [예제](./CBasics/pointerArray_ex.cpp)

- 배열의 특징
    - 메모리가 연속적인 구조이다!!
    - 배열의 이름은 배열의 시작 주소이다.

        ```c
        int iArr[10] = {};

        // int 단위로 접근
        *(iArr + 0) = 10;		// iArr[0] = 10
        *(iArr + 1) = 10;		// iArr[1] = 10
        ```