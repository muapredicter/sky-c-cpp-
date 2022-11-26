#include "system.h"

void menu()
{
    printf("*********************************\n");
    printf("****     massage system      ****\n");
    printf("*********************************\n");
    printf("****1.add            2.del   ****\n");
    printf("****3.search         4.modify****\n");
    printf("****5.show           6.sort  ****\n");
    printf("****0.exit                   ****\n");
    printf("*********************************\n");
}

int main()
{

    int input;
    struct massage con;
    Initsystem(&con);
    do
    {
        menu();
        printf("请选择：");
        scanf("%d",&input);
        switch (input)
        {
        case ADD:
            ADDmassage(&con);
            break;
        case DEL:
            DELmassage(&con);
            break;
        case SEARCH:
            SEARCHmassage(&con);
            break;
        case MODIFY:
            MODIFYmassage(&con);
            break;
        case SHOW:
            SHOWmassage(&con);
            break;
        case SORT:
            SORTmassagebyage(&con);
            break;
        case EXIT:
            printf("退出程序\n");
            break;
        default:
            printf("选择错误，重新输入：\n");
            break;
        }
    } while (input);
}