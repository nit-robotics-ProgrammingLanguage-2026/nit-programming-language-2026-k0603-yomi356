
#include <stdio.h>

int main(void)
{
    int n;
    long long i;
    long long sum = 0;

    scanf("%d", &n);

    if (n < 0)
    {
        printf("NG\n");
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("%lld\n", sum);

    return 0;
}
