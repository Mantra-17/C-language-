//write a code in c to reverse a string without using string function
#include<stdio.h>
int main()
{
    char str[100];
    int i,j;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    for(j=i-1;j>=0;j--)
    {
        printf("%c",str[j]);
    }
    return 0;
}
