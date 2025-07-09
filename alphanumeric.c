/*There is a person, who is asked to enter the alphanumeric password for registering into an ecommerce website for purchasing products from website. But he is not aware about, what does
Alphanumeric mean. So, he tries entering various combinations 5 times, but he fails to create
such password. Develop a C program to validate his password. Constraints for writing password
are it should have combination of lowercase, uppercase and digit.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char password[20];
    int i, len, upper = 0, lower = 0, digit = 0;
    printf("Enter the password: ");
    scanf("%s", password);
    len = strlen(password);
    for (i = 0; i < len; i++)
    {
        if (isupper(password[i]))
        {
            upper = 1;
        }
        else if (islower(password[i]))
        {
            lower = 1;
        }
        else if (isdigit(password[i]))
        {
            digit = 1;
        }
    }
    if (upper && lower && digit)
    {
        printf("Valid password\n");
    }
    else
    {
        printf("Invalid password\n");
    }
    return 0;
}
//Can you make it more easy?


