#include <stdio.h>

int maxNum(int a[], int n, int i)
{
    int mx = a[0];

    if (n == i)
    {
        return;
    }
    if (mx < a[i])
    {
        mx = a[i];
    }

    maxNum(a, n, i + 1);

    return mx;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int mxNum = maxNum(a, n, 0);
    printf("%d", mxNum);

    return 0;
}