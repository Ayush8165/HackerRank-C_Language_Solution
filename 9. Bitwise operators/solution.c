#include <stdio.h>

int main()
{
    int n, k, max;
    scanf("%d %d", &n, &k);
    int a[n], b[n], temp[n][n];

    for (int i = 0; i < (n - 1); i++)
    {
        a[i] = i + 1;
    }

    for (int i = 0; i < (n - 1); i++)
    {
        b[i] = i + 2;
    }

    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j < (n - 1); j++)
        {
            if (b[j] > a[i])
            {
                temp[i][j] = a[i] & b[j];
            }
        }
    }

    max = 0;

    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j < (n - 1); j++)
        {
            if (b[j] > a[i])
            {
                if (temp[i][j] >= max)
                {
                    if (temp[i][j] < k)
                    {
                        max = temp[i][j];
                    }
                    else
                    {
                        max = max;
                    }
                }
            }
        }
    }

    printf("%d\n", max);

    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j < (n - 1); j++)
        {
            if (b[j] > a[i])
            {
                temp[i][j] = a[i] | b[j];
            }
        }
    }

    max = 0;

    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j < (n - 1); j++)
        {
            if (b[j] > a[i])
            {
                if (temp[i][j] >= max)
                {
                    if (temp[i][j] < k)
                    {
                        max = temp[i][j];
                    }
                    else
                    {
                        max = max;
                    }
                }
            }
        }
    }

    printf("%d\n", max);

    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j < (n - 1); j++)
        {
            if (b[j] > a[i])
            {
                temp[i][j] = a[i] ^ b[j];
            }
        }
    }

    max = 0;

    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j < (n - 1); j++)
        {
            if (b[j] > a[i])
            {
                if (temp[i][j] >= max)
                {
                    if (temp[i][j] < k)
                    {
                        max = temp[i][j];
                    }
                    else
                    {
                        max = max;
                    }
                }
            }
        }
    }

    printf("%d\n", max);
    return 0;
}
