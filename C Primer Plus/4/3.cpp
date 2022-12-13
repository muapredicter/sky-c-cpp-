#include <stdio.h>
#include <string.h>

int main()
{
    int x, y;
    char fname[20], lname[20];
    printf("输入姓氏: ");
    scanf("%s", fname);
    printf("输入名字: ");
    scanf("%s", lname);
    x = strlen(fname);
    y = strlen(lname);
    printf("%s %s\n", fname, lname);
    printf("%*d %*d\n", x, x, y, y);
    printf("%s %s\n", fname, lname);
    printf("%-*d %-*d\n", x, x, y, y);
    return 0;
}
