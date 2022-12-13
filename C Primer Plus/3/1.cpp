#include <stdio.h>

int main()
{
    int n;
    printf("请输入一个ASCII码值:");
    do
    {
        scanf("%d",&n);
        if (n>=0&&n<=127)
        {
            printf("%c",n);
            break;
        }
        else
        {
            printf("输入错误重新输入：");
        }
    } while (1);
    return 0;
}