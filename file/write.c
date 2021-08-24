#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    int num = 2002;
    fptr = fopen("san.txt", "w");
    fprintf(fptr, "The year is %d.", num);
    fprintf(fptr, " This is my birthday year.");
    fclose(fptr);
    exit(0);
    return 0;
}