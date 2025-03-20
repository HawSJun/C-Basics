#include <stdio.h>

// 함수 정의가 main 함수보다 먼저 작성되면 함수선언 생략 가능!

// 함수 선언
int add(int a, int b);

int main(void) {
    int result = add(3, 5);  // add 함수 호출
    printf("3 + 5 = %d\n", result);
    return 0;
}

// 함수 정의
int add(int a, int b) {
    return a + b;
}


// 함수선언
// 반환형 함수이름(매개변수 리스트);

// 함수정의
// 반환형 함수이름(매개변수 리스트) {
// 실행할 코드;
// return 반환값;  // 반환형이 void일 경우 return 생략 가능
// }

// main 함수
// int main(void) {
// 실행할 코드;
// return 0;  // 정상 종료 시 0 반환
// }
