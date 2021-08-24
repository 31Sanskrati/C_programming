#include <stdio.h>

int main()
{
    int i = 3;
    int * j; //declare int-pointer
    j = &i; //store address
    int ** k;
    k = &j;
    printf("Address of i is %u or %u \n", &i, j);
    printf("The address of j is %u \n", &j);
    printf("The address of j is %u \n", k);
    printf("The value of i is %d or %d or %d \n", i, *j, *(&i));
    return 0;
}