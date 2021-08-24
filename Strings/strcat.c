#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Sanskrati";
    char str2[] = "Jain";

    printf("%s %s", str1, str2);

    // strcat(str1, str2);
    // printf("%s", str1);

    char str = *str1 + *str2;
    printf("%s", str);

    return 0;
}