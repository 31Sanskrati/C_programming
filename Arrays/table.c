#include <stdio.h>
//Printing multiplication table
int main()
{
    int arr[10];
    int num;
    
    printf("Enter the number for table: \n");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {

        arr[i] = num * (i + 1);
    }

    for (int j = 0; j < 10; j++)
    {
        printf("%dX%d = %d \n", num, (j + 1), arr[j]);
    }

    return 0;
}