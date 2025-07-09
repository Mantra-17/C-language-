#include<stdio.h>
void dowork(int a , int b, int *sum,int *prod, int *avg);


int main() {
    int a=5;
    int b=5;
    int sum,prod,avg;

    dowork(a,b,&sum,&prod,&avg);
    printf("\t \nsum is %d\n prod is %d\n avg is %d\n", sum,prod,avg);

    return 0;
}

void dowork(int a , int b, int *sum,int *prod, int *avg) {
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}
