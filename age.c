#include<stdio.h>
#include<math.h>

int main() {

    int age;
    int b;
    printf("enter your current age :");
    scanf("%d", &age);

    printf("After how many year you want to know your age :");
    scanf("%d", &b);

    printf("after %d years your age would be : %d\n", b, age+b);

    return 0;
}

