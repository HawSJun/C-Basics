#include <stdio.h>

int main()
{
    int iTest = 20;

    switch (iTest)
    {
    case 10:
        // iTest가 10일 때 실행
        break;
    case 20:
        // iTest가 20일 때 실행
        break; // break가 없으면 아래로 계속 실행됨
    default:
        // case가 일치하지 않으면 실행
        break;
    }

    switch (iTest)
    {
    case 10:           // 만약, case 10: 이 실행되면 break가 나올때까지 계속 실행
    case 20:
    case 30:
        break;
    default:
        break;
    }

    // if-else 구문으로 바꾸면
    if (iTest == 10 || iTest == 20 || iTest == 30)
    {
        // iTest가 10, 20, 30 중 하나일 때 실행
    }
    else
    {
        // 조건이 아니면 실행
    }

    // 삼항 연산자
    iTest == 20 ? iTest = 100 : iTest = 200;

    // 삼항 연산자를 if-else 구문으로 변경
    if (iTest == 20)
    {
        iTest = 100;
    }
    else
    {
        iTest = 200;
    }

    return 0;
}