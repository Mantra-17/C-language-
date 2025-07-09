#include<stdio.h>

int main() {
    int a;
    int b;

    printf("Enter value of a :");
    scanf("%d", &a);

    printf("Enter value of b :");
    scanf("%d", &b);

    int sum = a+b;
    printf("sum is : %d\n", sum);

    int difference = a-b  ;
    printf("difference is : %d\n", difference);

    int product = a*b;
    printf("product is : %d\n", product);

    int division = a/b ;
    printf("division is : %d\n", division);

    return 0;



}