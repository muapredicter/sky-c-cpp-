#include <stdio.h>
#define N 2
#define M 3

void Print(double (*arr)[M], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%lf\n", arr[i][j]);
        }
    }
}
void copy(double arr[], double brr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        brr[i] = arr[i];
    }
    return;
}

int main()
{
    double arr[N][M] =
        {
            {1.0, 2.0, 3.0},
            {4.0, 5.0, 6.0}};
    Print(arr, N);
    double brr[N][M] = {0.0};
    Print(brr, N);
    for (int i = 0; i < N; i++)
    {
        copy(arr[i], brr[i], M);
    }
    Print(brr, N);
    return 0;
}