#include<stdio.h>

int main() {
    int arr[25];
    int neg=0;
    int pos=0;
    int even=0;
    int odd=0;
    for(int i=0;i<25;i++) {
    printf("enter 25 numbers :");
    scanf("%d", &arr[i]); 
    if(arr[i]%2==0&&arr[i]>0) {
        printf("even number\n");
        even++;
    }
    else if(arr[i]%2!=0&&arr[i]>0) {
        printf("odd number\n");
        odd++;
    }

   else if(arr[i]>=0) {
    printf("positive\n");
    pos++;
   } else{
    printf("negative\n");
    neg++;
   }

 }
 
 printf("even numbers are %d\n", even);
 printf("odd numbers are %d\n", odd);
 printf("positive numbers are %d\n", pos);
 printf("negative numbers are %d\n", neg);
    return 0;
    
}