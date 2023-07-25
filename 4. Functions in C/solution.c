#include <stdio.h>

int max(int arr[])
{
    int max = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", max(arr));

    return 0;
}
