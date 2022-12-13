#include <stdio.h>

int num=0;
int fx()
{
    return ++num;
}

int main()
{
    int n;
    printf("请输入一个数字:\n");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        fx();
    }
    printf("fx函数被调用的次数:%d\n",num);
    return 0;
}