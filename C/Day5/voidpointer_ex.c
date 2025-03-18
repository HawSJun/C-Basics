#include <stdio.h>

void func(int(*fp)(int, int));
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main() {
    int op;
    printf("연산을 선택하세요 : ");
    scanf_s("%d", &op);

    if (op == 1) {
        func(add);
    }
    else if (op == 2) {
        func(sub);
    }
    else if (op == 3) {
        func(mul);
    }
    else if (op == 4) {
        func(div);
    }
    else {
        printf("잘못된 선택입니다.\n");
    }

    return 0;
}

void func(int(*fp)(int, int)) {
    int a, b;
    printf("두 값을 입력하세요: ");
    scanf_s("%d %d", &a, &b);
    printf("결과: %d\n", fp(a, b));
}

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    return a / b;
}