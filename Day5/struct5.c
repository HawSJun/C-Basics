#include <stdio.h>  // 표준 입출력 라이브러리 포함 (printf, scanf_s 사용을 위해 필요)

// 시력을 저장하는 구조체 정의
typedef struct vision {
    double left;   // 왼쪽 시력 (double 타입)
    double right;  // 오른쪽 시력 (double 타입)
} Vision;

// 좌우 시력을 교환하는 함수 원형 선언
Vision exchange(Vision);

int main() // 프로그램의 시작점 (main 함수)
{
    Vision rot;  // Vision 구조체 타입 변수 선언 (사용자의 입력을 저장할 변수)

    printf("시력 입력>> ");  // 사용자에게 시력 입력을 요청하는 출력문

    // 사용자로부터 왼쪽, 오른쪽 시력을 입력받음
    // scanf_s("%lf %lf", &변수1, &변수2); -> %lf는 double 형 입력받을 때 사용
    scanf_s("%lf %lf", &rot.left, &rot.right);

    // 사용자가 입력한 rot 구조체를 exchange 함수에 전달하여 좌우 시력을 교환
    rot = exchange(rot);        // exchange() 함수 호출

    // 좌우 시력이 교환된 값을 출력 (소수점 1자리까지)
    printf("바뀐 시력 : %.1f, %.1f\n", rot.left, rot.right);

    return 0;  // 프로그램 정상 종료
}

// Vision 구조체를 매개변수로 받아 좌우 시력을 교환하여 반환하는 함수
Vision exchange(Vision a) {
    double temp = a.left;  // 임시 변수 temp에 왼쪽 시력 저장
    a.left = a.right;      // 왼쪽 시력에 오른쪽 시력 값을 대입
    a.right = temp;        // 오른쪽 시력에 원래 왼쪽 시력 값을 대입 (교환 완료)
    return a;              // 교환된 Vision 구조체 반환
}
