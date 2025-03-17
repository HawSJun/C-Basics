//#include <stdio.h>
//
//typedef struct addr {
//	char name[20];
//	int age;
//	char tel[20];
//	char addr[100];
//}Addr;
//
//void print_list(Addr* list, int size);
//
//int main()
//{
//	Addr list[] = { {"홍길동", 100, "010-123-1234", "몰라" },
//	{ "김철수", 33, "010-222-2222", "부산" },
//	{ "김영희", 24, "010-333-3333", "울산" }
//	};
//
//
//	int size = sizeof(list) / sizeof(list[0]);
//
//	print_list(list, size);
//
//	/*for (int i = 0; i < 3; i++) {
//		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
//	}*/
//
//	return 0;
//}
//
//void print_list(Addr* list, int size)
//{
//	for (int i = 0; i < size; i++) {
//		printf("----------주소 %d번째----------\n", i+1);
//		printf("%s, %3d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
//	}
//}


#include <stdio.h>
#include <stdlib.h>  // malloc, free 사용을 위한 헤더

typedef struct addr {
    char name[20];
    int age;
    char tel[20];
    char addr[100];
} Addr;

void print_list(Addr* list, int size);
// Addr* list : Addr 구조체형 변수들의 배열의 첫 번째 요소를 가리키는 포인터
// Addr 구조체 포인터로, 배열의 첫 요소를 가리킴
// 포인터 연산을 통해 배열의 각 요소에 접근할 수 있음


int main() {
    int size;

    // 사용자가 입력할 주소 개수 입력
    printf("입력할 주소 개수를 입력하세요: ");
    scanf_s("%d", &size);

    // 동적 메모리 할당
    Addr* list = (Addr*)malloc(size * sizeof(Addr));
    if (list == NULL) {
        printf("메모리 할당 실패\n");
        return 1;  // 프로그램 종료
    }

    // 사용자 입력 받기
    for (int i = 0; i < size; i++) {
        printf("\n[%d번째 주소 정보 입력]\n", i + 1);
        
        // 이름 입력 (문자열)
        printf("이름: ");
        scanf_s("%s", list[i].name, (unsigned)sizeof(list[i].name));
        
        // 나이 입력 (정수)
        printf("나이: ");
        scanf_s("%d", &list[i].age);
        
        // 전화번호 입력 (문자열)
        printf("전화번호: ");
        scanf_s("%s", list[i].tel, (unsigned)sizeof(list[i].tel));
        
        // 주소 입력 (문자열)
        printf("주소: ");
        scanf_s("%s", list[i].addr, (unsigned)sizeof(list[i].addr));
    }

    // 리스트 출력
    print_list(list, size);

    // 동적 메모리 해제
    free(list);

    return 0;
}

void print_list(Addr* list, int size) {
    printf("\n========== 주소록 출력 ==========\n");
    for (int i = 0; i < size; i++) {
        printf("---------- 주소 %d번째 ----------\n", i + 1);
        printf("이름: %s\n", list[i].name);
        printf("나이: %d\n", list[i].age);
        printf("전화번호: %s\n", list[i].tel);
        printf("주소: %s\n", list[i].addr);
    }
}