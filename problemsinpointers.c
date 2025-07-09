#include<stdio.h>

void swap(int a, int b);

int main() {
    int a=4;
    int b=5;
    
    
    printf("initially a was %d\n", a);
    printf("initially b was %d\n", b);
    a = a*b;
   b = a/b;
   a = a/b;  swap(a,b);
   return 0;
}

void swap(int a, int b) {
    

   printf("after swapping a is %d\n", a);
   printf("after swappping b is %d\n", b);
}
