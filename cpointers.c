#include<stdio.h>

void printAdress(int *n);

int main() 
     {
        int n=4;
        printAdress(&n);
        return 0;


    }

    void printAdress(int *n) {
  printf("adress of n is : %u\n ", n);
        
    } 