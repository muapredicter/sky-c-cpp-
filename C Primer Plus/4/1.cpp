#include <stdio.h>
#include <string.h>

int main()
{
    int len = 0;
    char name[20];
    printf("请输入名字:");
    scanf("%s", name);
    len = strlen(name);
    printf("开始打印:\n");
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("%*s\n", len + 3, name);
    return 0;
}
