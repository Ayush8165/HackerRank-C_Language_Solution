#include <stdio.h>
#include <string.h>

int main()
{
    char a[10000];
    scanf("%[^\n]s", &a);
    int length;
    length = strlen(a);
    for (int i = 0; i < length; i++)
    {
        if (a[i] != ' ')
        {
            printf("%c", a[i]);
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}
