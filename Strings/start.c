#include <stdio.h>

int main()
{
    //char str[] = {'A', 'n', 'n', 'i'} can also be written for
    char str[] = "Anni";
    printf("%c \n", str[0]); //print A

    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    //Easy way to print string
    char *ptr2 = "Jain"; //*ptr2 = ptr[] for declaring array but you cant change it
    printf(" %s\n", ptr2);

    char input[20];
    printf("Enter your name: ");
    scanf("%s", input); //&input is not required as it is already an address
    printf("Your name is %s", input);
    return 0;
}