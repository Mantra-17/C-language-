//write a code for finding length of string without using string function
#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter the string:");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    printf("Length of string is %d",i-1);
    return 0;
}
