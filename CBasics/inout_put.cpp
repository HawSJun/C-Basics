#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];  // 이름을 저장할 배열
    int age;
    char ch;

    // gets()를 사용하여 이름 입력받기
    printf("이름을 입력하세요: ");
    fgets(name, sizeof(name), stdin);  // ⚠️ 보안상 위험 → fgets(name, sizeof(name), stdin) 사용 권장

    // 나이 입력받기
    printf("나이를 입력하세요: ");
    scanf("%d", &age);
    getchar(); // 숫자 입력 후 남아있는 개행 문자 제거

    // puts()를 사용하여 입력받은 정보 출력
    printf("\n[입력된 정보]\n");
    printf("이름: ");
    puts(name);
    printf("나이: %d\n", age);

    // 문자 입력 및 대문자로 변환하여 출력
    printf("\n한 문자를 입력하세요: ");
    ch = getchar();  // 문자 입력받기

    // putchar()를 사용하여 변환된 문자 출력
    printf("입력한 문자의 대문자: ");
    putchar(toupper(ch)); // 소문자를 대문자로 변환하여 출력
    printf("\n");

    return 0;
}