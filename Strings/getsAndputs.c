#include <stdio.h> 

int main() {
    //gets() for multi-words string
    char name[20];
    printf("Enter your name \n");
    //scanf("%s", name);
    gets(name);
    printf("Your name is %s \n", name);

    //puts() print the multi-words string in next line
    puts(name);
    return 0;
}