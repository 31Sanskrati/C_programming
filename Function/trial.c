#include <stdio.h>

void morning(), afternoon(), night();  //function prototype

int main()
{
    morning();        //call
    afternoon();
    return 0;
}

void morning()        //defination
{
    printf("Good Morning Anni \n");
}

void afternoon()
{
    printf("Good Afternoon Anni \n");
    night();
}

void night(){
    printf("Good Night Anni \n");
}