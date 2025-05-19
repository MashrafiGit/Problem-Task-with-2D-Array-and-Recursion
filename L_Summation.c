#include <stdio.h>
 
long long sum = 0;
 
void array_sum(int a[], int n, int i)
{
    if (i == n)
    {
        printf("%lld ", sum);
        return;
    }
 
    sum = sum + a[i];
 
    array_sum(a, n, i + 1);
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
 
    array_sum(a, n, 0);
 
    return 0;
}