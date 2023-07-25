#include <stdio.h>

int main()
{
    int a, b, sum, sub;
    float c, d, sumf, subf;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    sum = a + b;

    sumf = c + d;
    sub = a - b;
    subf = c - d;
    printf("%d", sum);
    printf(" %d\n", sub);
    printf("%0.1f", sumf);
    printf(" %0.1f", subf);

    return 0;
}
