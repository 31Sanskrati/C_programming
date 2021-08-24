#include <stdio.h>
//This program store students marks using 2D array
int main()
{
    int noOfstudent = 3;
    int noOfsubjects = 5;

    int marks[3][5];

    //Taking input from user
    for (int j = 0; j < noOfstudent; j++)
    {
        for (int i = 0; i < noOfsubjects; i++)
        {
            printf("Marks in %d subject of %d student is: \n", i + 1, j + 1);
            scanf("%d", &marks[j][i]);
        }
    }

    //Printing output
    for (int j = 0; j < noOfstudent; j++)
    {
        for (int i = 0; i < noOfsubjects; i++)
        {
            printf("Marks in %d subject of %d student is: %d \n", i + 1, j + 1, marks[j][i]);
        }
    }

    return 0;
}