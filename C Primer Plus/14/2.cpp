#include <stdio.h>

void menu()
{
    printf("To choose a function, enter its letter label:");
    printf("a) Show number of empty seats");
    printf("b) Show list of empty seats");
    printf("c) Show alphabetical list of seat");
    printf("d) Assign a customer to a seat");
    printf("e) Delete a seat assignment");
    printf("f) Quit");
}

int main()
{
    char input;
    do
    {
        menu();
        printf("请选择：");
        scanf("%c", &input);
        switch (input)
        {
        case 'a':
            // 操作a
            break;
        case 'b':
            // 操作b
            break;
        case 'c':
            // 操作c
            break;
        case 'd':
            // 操作d
            break;
        case 'e':
            // 操作e
            break;
        case 'f':
        {
            printf("退出程序");
             break;
        }
        default:
        {
            printf("输入错误，重新选择：");
        }
        }
    } while (1);
}