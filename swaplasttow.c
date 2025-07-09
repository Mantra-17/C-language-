#include<stdio.h>
#include<string.h>

int main(){
 
    char arr[100];
   printf("enter the number \n");
   scanf("%s", arr);
   
 
   printf("Swapped string\n");
  int n = strlen(arr);
  if(n<2){
    printf("Invalid input\n");
  }
  else {
    int temp = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = temp;
  }
  printf("%s", arr);

    return 0;
}