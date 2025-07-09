#include<stdio.h>

int main() {
    char age = '*' ;
    char *ptr = &age;

    printf("ptr = %d", *ptr);
    ptr++;
    printf("ptr = %d", *ptr);
}