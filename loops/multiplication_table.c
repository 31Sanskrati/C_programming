#include <stdio.h>

int main()
{
    // //Multiplication Table
    // int i;
    // for (i = 1; i <= 10; i++)
    // {
    //     printf("%d", i*10);
    //     printf("\n");
    // }

    //multiplication table in reverse order
    int i;
    for (i = 10; i > 0; --i)
    {
        printf("10 X %d = %d", i, i*10);
        printf("\n");
    }


    return 0;
}