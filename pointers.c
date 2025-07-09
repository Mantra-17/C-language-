#include<stdio.h>

int main() {

    char grade;

    printf("enter the grade :");
    scanf("%c", &grade);
    char *ptr = &grade;
    char _grade = *ptr;

    printf("%c\n", _grade);

return 0;

}