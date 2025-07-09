//write a code that check how mnany time character is repeated in a string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count=0;
    printf("enter the string\n");
    gets(str);
    int len=strlen(str);
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    for(int i=0;i<len;i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    printf("the character %c is repeated %d times",ch,count);
    return 0;
}
