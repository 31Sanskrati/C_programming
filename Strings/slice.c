#include <stdio.h>

void slice(char *str, int n, int m)
{
    int i = 0;
    while ((i + m) < n)
    {
        str[i] = str[i + m];
        i++;
    }
    str[i] = '\0';
}
int main()
{
    char str[11] = "Sansktrati";
    slice(str, 1, 5);
    printf("%s", slice);
    return 0;
}