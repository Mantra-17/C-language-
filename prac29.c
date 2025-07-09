
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *str;
    str = (char *)calloc(10, sizeof(char));
    strcpy(str, "C-Programming");
    printf("String = %s, Address = %u\n", str, str);
    str = (char *)realloc(str, 20);
    strcat(str, ".com");
    printf("String = %s, Address = %u\n", str, str);
    free(str);
    return 0;
}

