#include <stdio.h>

char read(char *message, char m)
{
    char *ptr = message;
    while (*ptr != '\0')
    {
        if (*ptr == m)
        {
            printf("Message has a character");
        }
        else
        {
            printf("No match");
        }
        ptr++;
    }
}
int main()
{
    char message[] = "My name is Sanskrati Jain";
    char alpha;
    printf("Enter a character \n");
    scanf("%c", &alpha);
    read(message, alpha);
    return 0;
}