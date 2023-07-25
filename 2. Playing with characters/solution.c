#include <stdio.h>

int main()
{
    char ch, s[100], sen[100];
    scanf("%c", &ch);
    scanf("%s", &s);
    fgets(sen, 100, stdin);
    scanf("%[^\n]s", &sen);
    printf("%c", ch);
    printf("\n%s", s);
    printf("\n%s", sen);
    return 0;
}
