#include "system.h"

void Initsystem(struct massage *ps)
{
    ps->date = (struct Peoinfo *)malloc(MAX_TEMP * sizeof(struct Peoinfo));
    if (ps->date == NULL)
    {
        return;
    }
    ps->size = 0;
    ps->temp = MAX_TEMP;
    LOADmassage(ps);
}

void Cheaktemp(struct massage *ps);

void LOADmassage(struct massage*ps)
{
    struct Peoinfo temp;
    FILE*pfread=fopen("system_message.txt","rb");
    if(pfread==NULL)
    {
        printf("mistakeatLOADnassage:%s\n",strerror(errno));
        printf("加载失败\n");
        return;
    }
    while (fread(&temp,sizeof(Peoinfo),1,pfread))
    {
        Cheaktemp(ps);
        ps->date[ps->size]=temp;
        ps->size++;
    }
    fclose(pfread);
    pfread=NULL;

}

void Cheaktemp(struct massage *ps)
{
    struct Peoinfo *ptr;
    if (ps->size == ps->temp)
    {
        ptr = (struct Peoinfo *)realloc(ps->date, (ps->temp + 1)*(sizeof(Peoinfo)));
    }
    if (ptr != NULL)
    {
        ps->date = ptr;
        ps->temp += 1;
        printf("扩容成功\n");
    }
}

void ADDmassage(struct massage *ps)
{
    Cheaktemp(ps);
    printf("请输入名字:\n");
    scanf("%s", ps->date[ps->size].name);
    printf("请输入年龄:\n");
    scanf("%d", &(ps->date[ps->size].age));
    printf("请输入性别:\n");
    scanf("%s", ps->date[ps->size].sex);
    printf("请输入电话:\n");
    scanf("%s", ps->date[ps->size].tele);
    printf("请输入地址:\n");
    scanf("%s", ps->date[ps->size].addr);
    ps->size++;
    printf("添加成功\n");
}

void SHOWmassage(const struct massage *ps)
{
    if (ps->size == 0)
    {
        printf("无信息\n");
    }
    else
    {
        int i = 0;
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
        for (i = 0; i < ps->size; i++)
        {
            printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
                   ps->date[i].name,
                   ps->date[i].age,
                   ps->date[i].sex,
                   ps->date[i].tele,
                   ps->date[i].addr);
        }
    }
}

int FINDmassagebyname(struct massage *ps, char name[MAX_NAME])
{
    int i = 0;
    for (i = 0; i < ps->size; i++)
    {
        if (0 == strcmp(ps->date[i].name, name))
        {
            return i;
        }
    }
    return -1;
}

void DELmassage(struct massage *ps)
{
    char name[MAX_NAME];
    printf("请输入要删除人的名字：\n");
    scanf("%s", name);
    int i = 0;
    int pos = FINDmassagebyname(ps, name);
    if (pos == -1)
    {
        printf("要删除的人不存在\n");
    }
    else
    {
        int j = 0;
        for (j = i; j < ps->size - 1; i++)
        {
            ps->date[j] = ps->date[j + 1];
        }
        ps->size--;
        printf("删除成功\n");
    }
}

void SEARCHmassage(struct massage *ps)
{
    char name[MAX_NAME];
    printf("请输入要查找人的名字\n");
    scanf("%s", name);
    int pos = FINDmassagebyname(ps, name);
    if (pos == -1)
    {
        printf("要查找的人不存在");
    }
    else
    {
        printf("找到了\n");
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
        printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
               ps->date[pos].name,
               ps->date[pos].age,
               ps->date[pos].sex,
               ps->date[pos].tele,
               ps->date[pos].addr);
    }
}

void MODIFYmassage(struct massage *ps)
{
    char name[MAX_NAME];
    printf("请输入要修改人的名字\n");
    scanf("%s", name);
    int pos = FINDmassagebyname(ps, name);
    if (pos == -1)
    {
        printf("要修改人的信息不存在\n");
    }
    else
    {
        printf("请输入名字:\n");
        scanf("%s", ps->date[pos].name);
        printf("请输入年龄:\n");
        scanf("%d", &(ps->date[pos].age));
        printf("请输入性别:\n");
        scanf("%s", ps->date[pos].sex);
        printf("请输入电话:\n");
        scanf("%s", ps->date[pos].tele);
        printf("请输入地址:\n");
        scanf("%s", ps->date[pos].addr);
        printf("修改成功\n");
    }
}

void SORTmassagebyage(struct massage *ps)
{
    int i = 0;
    int j = 0;
    int tmp;
    for (i = 0; i < ps->size - 1; i++)
    {
        for (j = 0; j < ps->size - 1 - i; i++)
        {
            if (ps->date[j].age > ps->date[j + 1].age)
            {
                tmp = ps->date[j].age;
                ps->date[j].age = ps->date[j + 1].age;
                ps->date[j + 1].age = tmp;
            }
        }
    }
}

void DESsystem(struct massage *ps)
{
    free(ps->date);
    ps->date=NULL;
}

void SAVEmassage(struct massage*ps)
{
    FILE*pfwrite=fopen("system_message.txt","wb");
    if(pfwrite==NULL)
    {
        printf("mistakeaiSAVEmassage:%s\n",strerror(errno));
        printf("储存失败\n");
        return;
    }
    for (int i=0;i<ps->size;i++)
    {
        fwrite(&(ps->date[i]),sizeof(struct Peoinfo),1,pfwrite);
    }
    fclose(pfwrite);
    pfwrite=NULL;
}