#include <stdio.h>

void myStrInput(char str[]);

//void myStrInput(char* ps, int size);

int main()
{
    char str[100];

    myStrInput(str);
    //myStrInput(str, 100);
    printf("입력한 문자열 : %s\n", str);

    return 0;
}

void myStrInput(char str[])
{
    int i = 0;
    char ch;
  
    while ((ch = getchar()) != '\n' && i < 99) {
        str[i++] = ch;
    }
    str[i] = '\0';
}

//void myStrInput(char* ps, int size)
//{
//    int i = 0;
//    while (1) {
//        ps[i] = getchar();
//        if (ps[i] == '\n' || i >= (size - 1))
//            break;
//        i++;
//    }
//    ps[i] = '\0';
//}
