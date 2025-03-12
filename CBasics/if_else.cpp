#include <stdio.h>

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
    else
    {
        // if 가 거짓인 경우 수행
    }

    if (/* 조건식 */)
    {
        // if 가 참인 경우 수행
    }
    else if (/* 다른 조건식 */)
    {
        // if 가 거짓이고 else if가 참이면 수행
    }
    else if (/* 또 다른 조건식 */)
    {
        // if 가 거짓이고 위의 else if가 거짓이고 이 else if가 참이면 수행
    }
    else
    {
        // if, else if ,else if 가 다 거짓이면 실행
    }

    // switch case 
    // ...

    // 삼항 연산자 
    // :?

    return 0;
}