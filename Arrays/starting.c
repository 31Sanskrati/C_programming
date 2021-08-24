#include <stdio.h>

int main()
{
    int marks[4];

    printf("First student number is \n");
    scanf("%d", &marks[0]);
    printf("Second student number is \n");
    scanf("%d", &marks[1]);
    printf("Third student number is \n");
    scanf("%d", &marks[2]);
    printf("Fourth student number is \n");
    scanf("%d", &marks[3]);
    printf("The marks of all the students are \n %d \n %d \n %d \n %d", marks[0], marks[1], marks[2], marks[3]);
    return 0;
}