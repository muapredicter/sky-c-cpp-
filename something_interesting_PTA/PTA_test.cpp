/*
#include <stdio.h>
struct address
{
    char name[10];
    int birth;
    char phone[17];
} arr[10], t;

int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    for (i = 0; i < n; i++)
        scanf("%s %d %s", arr[i].name, &arr[i].birth, arr[i].phone);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-1-i; j++)
        {
            if (arr[j].birth > arr[j+1].birth)
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%s %d %s\n", arr[i].name, arr[i].birth, arr[i].phone);
    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>

struct bookmessaage
{
    char name[31];
    double price;
}date[10];

int main()
{
    int n, i, j, mini = 0, maxi = 0;
    double min = 1000000, max = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("\n");
        gets(date[i].name);
        scanf("%lf", &date[i].price);
        if (date[i].price > max)
        {
            max = date[i].price;
            maxi = i;
        }
        if (date[i].price < min)
        {
            min = date[i].price;
            mini = i;
        }
    }
    printf("%.2lf, %s\n", date[maxi].price, date[maxi].name);
    printf("%.2lf, %s\n", date[mini].price, date[mini].name);
    return 0;
}
*/