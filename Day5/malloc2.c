#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];   // 입력 받을 문자열을 저장할 배열 (최대 100글자까지 입력 가능)
    char* ps[5];     // 5개의 문자열을 저장할 수 있는 포인터 배열 (각각의 요소는 문자열을 가리키는 포인터)
    int i;           // 반복문에서 사용할 변수

    for (i = 0; i < 5; i++) {  // 5번 반복하여 문자열을 입력받음
        printf("%d번째 문자열을 입력하세요>> ", i + 1);
        gets(str);  // 표준 입력을 통해 문자열을 읽어옴 (보안 취약점이 있는 함수이므로 사용을 권장하지 않음, 대신 fgets 사용 가능)

        /* 문자열 저장 */
        ps[i] = (char*)malloc(strlen(str) + 1); // 입력받은 문자열 크기 + 1(널 문자 포함)만큼 동적 메모리 할당
        if (ps[i] == NULL) {  // 메모리 할당이 실패하면 프로그램 종료
            printf("메모리 할당 실패!\n");
            exit(1);
        }

        strcpy(ps[i], str); // 입력받은 문자열을 동적 메모리에 복사
    }

    printf("\n--- 저장된 문자열 출력 ---\n");
    for (i = 0; i < 5; i++) {  // 저장된 문자열을 출력
        printf("heap[%d] : %s\n", i, ps[i]);
    }

    // 동적 메모리 해제
    for (i = 0; i < 5; i++) {  // 동적 할당된 메모리를 해제하여 메모리 누수를 방지
        free(ps[i]); // 동적으로 할당한 메모리는 사용이 끝난 후 반드시 free()로 해제해야 메모리 누수(memory leak) 를 방지할 수 있음.
    }

    return 0; // 프로그램 종료
}
