#include <stdio.h>

int main()
{
    int num;
    printf("숫자 맞추기 게임입니다!\n");
    printf("정수 하나를 입력하세요> ");

    while (1) {
        scanf_s("%d", &num);
        if (num == 32) {
            printf("정답입니다!!\n");
            break;
        }
        else if (num > 32) {
            printf("틀렸습니다!!\n");
            printf("숫자가 너무 큽니다.\n");
            printf("다시 입력해주세요.\n");
        }
        else {
            printf("틀렸습니다!!\n");
            printf("숫자가 너무 작습니다.\n");
            printf("다시 입력해주세요.\n");
        }
    }
        return 0;
}