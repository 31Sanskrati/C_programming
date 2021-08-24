#include <stdio.h>

void wrong_swap(int x, int y);//This will not work
void swap(int *n, int *m);//This will work

int main()
{
    int a = 3, b = 5;
    printf("The value of a and b is %d and %d \n", a, b);

    //Thsi will not work
    wrong_swap(3, 5);
    printf("The value of a and b after wrong_swap is %d and %d \n", a, b);

    //Thsi will work
    swap(&a, &b);
    printf("The value of a and b after swap is %d and %d \n", a, b);
    return 0;
}

void wrong_swap(int x, int y)
{
    int temp;
    x = temp;
    x = y;
    y = temp;
    //will not work cause we call function by value --> 
    //this means the value of a and b is send to the function it cant be changed within the function
}

void swap(int *n, int *m)
{
    int temp;
    temp = *n;
    *n = *m;
    *m = temp;
    //called function by address
}