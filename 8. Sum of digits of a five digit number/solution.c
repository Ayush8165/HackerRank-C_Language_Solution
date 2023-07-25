#include <stdio.h>

int main()
{
    int a[5], b, n;
    scanf("%d", &n);

    for (int i = 0; i < 5; i++)
    {
        a[i] = n % 10;
        n = n / 10;
    }

    b = 0;

    for (int i = 0; i < 5; i++)
    {
        b = b + a[i];
    }

    printf("%d", b);
    return 0;
}
