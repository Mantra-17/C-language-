#include<stdio.h>

int main(){
    int *ptr , a=7;
    ptr = &a;
    *ptr += 1;
    printf("%d %d", *ptr,a);
}