#include<stdio.h>
#include<math.h>


  int totalmarks(int arr[], int n)  {
    int total=0;

    for(int i=0;i<n;i++) {
        total+=arr[i];
    }
       printf("total marks is %d\n", total);
     

  }

  float avgmarks(int arr[], int n) {
    int avg = 0;
     totalmarks(arr,n);
     avg = totalmarks/n;
     printf("average marks is %d\n", avg);
  }
 
 


int main() {
    int n;
    int arr[200];
    int total;
    printf("Enter the number of students : ");
    scanf("%d", &n);
    printf("enter the CCP marks of %d students :", n);
     for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
     }

     totalmarks(arr,n);
     avgmarks(arr , n);
      

   return 0;
    
}