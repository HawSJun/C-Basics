/*
	함수 : 입력과 출력이 있는 함수
	함수 원형
	함수 원형, 함수 호출, 함수 정의
*/

//#include <stdio.h>
//
//int func(int a, int b);		// 함수 선언, 함수 원형
//
//
//
//int main()
//{
//
//
//	/*int result = func(10, 20);
//	printf("호출 후 리턴된 값 : %d\n", result);*/
//
//	return 0;
//}
//
//int func(int a, int b) {
//	int res = a + b;
//	return res;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculate(int a, int b, char op);

int main() {
    int num1, num2;
    char op;

    printf("계산기 프로그램입니다.\n");
    printf("첫번째 정수를 입력하세요.\n");
    scanf_s("%d", &num1);
    printf("두번째 정수를 입력하세요.\n");
    scanf_s("%d", &num2);

    getchar();

    printf("연산자를 입력하세요.\n");
    scanf("%c", &op);

    int result = calculate(num1, num2, op);
    printf("결과: %d\n", result);

    return 0;
}

int calculate(int num1, int num2, char op) {
    switch (op) {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if (num2 != 0) {
            return num1 / num2;
        }
        else {
            printf("0으로 나눌 수 없습니다.\n");
            return 0;
        }
    default:
        printf("잘못된 연산자입니다.\n");
        return 0;
    }
}


