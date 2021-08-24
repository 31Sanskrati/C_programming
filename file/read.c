#include <stdio.h>

int main()
{
    FILE *ptr;
    int num1, num2;

    ptr = fopen("ann.txt", "r");
    //read integers from the file
    if (ptr == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        fscanf(ptr, "%d", &num1);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("%d-%d", num1, num2);
    }
    return 0;
}