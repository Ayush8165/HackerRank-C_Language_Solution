#include <stdio.h>

int main()
{
    int n, m, p, q;
    scanf("%d", &n);
    m = n;
    q = n;
    for (int i = 1; i < n; i++, q--)
    {
        m = n;
        for (int j = 1; j <= i; j++, m--)
        {
            printf("%d ", m);
        }
        for (int k = 1; k <= (2 * q - 3); k++)
        {
            printf("%d ", q);
        }
        p = n + 1 - i;
        for (int l = 1; l <= i; l++, p++)
        {
            printf("%d ", p);
        }
        printf("\n");
    }
    for (int i = n; i > 0; i--)
    {
        printf("%d ", i);
    }
    for (int i = 2; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i < n; i++)
    {
        m = n;
        for (int j = 1; j <= (n - i); j++, m--)
        {
            printf("%d ", m);
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            printf("%d ", i + 1);
        }
        for (int l = 1; l <= (n - i); l++)
        {
            printf("%d ", l + i);
        }
        printf("\n");
    }

    return 0;
}
