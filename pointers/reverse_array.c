#include <stdio.h>
//Reversing an array by using function

int * reverse(int *array, int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        //reversing 
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
    return array;
}
int main()
{
    //initialising an array
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    reverse(array, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("The reverse array[%d] is %d \n", i, array[i]);
    }

    return 0;
}