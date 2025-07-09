#include<stdio.h>

int main () {
    int p,r,t;
  double SI;
  printf("enter the principal :");
  scanf("%d", &p);


   printf("enter the rate :");
   scanf("%d", &r);
 printf("enter the tenure :");
 scanf("%d", &t);

 SI = p*r*t/100;
 printf("simple interest is : %d");
 return 0;




 
}