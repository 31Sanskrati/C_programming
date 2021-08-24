#include <stdio.h>
//This program is to compare dates made by using struct

struct dates
{
    int day;
    int month;
    int year;
};

int main()
{
    struct dates input[3];
//dates input from user
    int n = 0;
    while (n < 3)
    {
        printf("Enter the day\n");
        scanf("%d", &input[n].day);
        printf("Enter the month \n");
        scanf("%d", &input[n].month);
        printf("Enter the year \n");
        scanf("%d", &input[n].year);
        n++;
    }

//comparing dates
    if (input[0].year > input[1].year)
    {
        if (input[0].year > input[2].year)
        {
            printf("Greatest date is %d-%d-%d", input[0].day, input[0].month, input[0].year);
        }
        else
        {
            printf("Greatest date is %d-%d-%d", input[2].day, input[2].month, input[2].year);
        }
    }
    else if (input[0].year == input[1].year)
    {
        if (input[0].year > input[2].year)
        {
            if (input[0].month > input[1].month)
            {
                printf("Greatest date is %d-%d-%d", input[0].day, input[0].month, input[0].year);
            }
            else if (input[0].month == input[1].month)
            {
                if (input[0].day == input[1].day)
                {
                    printf("1 and 2 dates");
                }
                else if (input[0].day > input[1].day)
                {
                    printf("Greatest date is %d-%d-%d", input[0].day, input[0].month, input[0].year);
                }
                else
                {
                    printf("Greatest date is %d-%d-%d", input[1].day, input[1].month, input[1].year);
                }
            }
            else
            {
                printf("Greatest date is %d-%d-%d", input[1].day, input[1].month, input[1].year);
            }
        }
        else if(input[0].year < input[2].year)
        {
            printf("Greatest date is %d-%d-%d", input[2].day, input[2].month, input[2].year);
        }
        else
        {
            printf("All dates are same");
        }
        
    }
    else
    {
        printf("Greatest date is %d-%d-%d", input[1].day, input[1].month, input[1].year);
    }

    return 0;
}