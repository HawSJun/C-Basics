#include <stdio.h>

int main()
{
    int num;
    printf("���� ���߱� �����Դϴ�!\n");
    printf("���� �ϳ��� �Է��ϼ���> ");

    while (1) {
        scanf_s("%d", &num);
        if (num == 32) {
            printf("�����Դϴ�!!\n");
            break;
        }
        else if (num > 32) {
            printf("Ʋ�Ƚ��ϴ�!!\n");
            printf("���ڰ� �ʹ� Ů�ϴ�.\n");
            printf("�ٽ� �Է����ּ���.\n");
        }
        else {
            printf("Ʋ�Ƚ��ϴ�!!\n");
            printf("���ڰ� �ʹ� �۽��ϴ�.\n");
            printf("�ٽ� �Է����ּ���.\n");
        }
    }
        return 0;
}