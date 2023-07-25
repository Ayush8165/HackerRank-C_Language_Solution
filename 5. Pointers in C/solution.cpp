#include <stdio.h>

int a, b, c, sub, sum;
int *p = &a;
int *q = &b;

void mod(int g)
{
    if (g >= 0)
    {
        c = g;
    }
    if (g < 0)
    {
        c = -g;
    }
}

int main()
{
    scanf("%d %d", &a, &b);
    sum = *p + *q;
    sub = *p - *q;
    mod(sub);
    printf("%d", sum);
    printf("\n%d", c);
    return 0;
}
