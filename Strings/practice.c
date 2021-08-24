#include <stdio.h>

int stringlen(char * str)
{
    char *ptr = str;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    char str[] = "Sanskrati";
    int jiji = stringlen(str);
    printf("The length of string is %d", jiji);
    return 0;
}