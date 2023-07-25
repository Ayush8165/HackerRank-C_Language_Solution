#include <stdio.h>

int a, b, c, sum, n;

void recursion()
{
    sum = a + b + c;
    a = b;
    b = c;
    c = sum;
}

int main()
{
    scanf("%d %d %d %d", &n, &a, &b, &c);
    for (int i = 3; i < n; i++)
    {
        recursion();
    }
    printf("%d", sum);
    return 0;
}
