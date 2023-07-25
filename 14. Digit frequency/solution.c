#include <stdio.h>
#include <string.h>

int main()
{
    char a[10000];
    char b[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    scanf("%[^\n]s", &a);
    int length, flag;
    length = strlen(a);
    for (int i = 0; i < 10; i++)
    {
        flag = 0;
        for (int j = 0; j < length; j++)
        {
            if (a[j] == b[i])
            {
                flag++;
            }
        }
        printf("%d ", flag);
    }
    return 0;
}
